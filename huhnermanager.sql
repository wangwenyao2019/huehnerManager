create database huehnermanager; 
go	

use huehnermanager;	
go

create table stammdaten
(
	sd_ringnr			varchar(10)	not null primary key,
	sd_name			varchar(30)	null,
	sd_schlupfdatum	date			not null,
	sd_rasse			varchar(30)	not null,
	sd_geschlecht		char(1)		null,	--m/w
	sd_stamm			int			null,
	sd_federfarbe		varchar(30)	null,
	sd_kammfarbe		varchar(20)	null,
	sd_gewicht		float		null,	--z.B 2500 (in Gramm)
	sd_vertraeglichkeit varchar(3)	null,	--OK/NOK (Nicht OK)
	sd_eierfarbe		varchar(20)	null,	--Nur bei Henne beleg
	sd_legeleistung	int			null,	--Nur bei Henne bel.
	sd_eiergewicht	int			null,	--Nur bei Henne bel.
	sd_befruchtungsrate int		null		--Nur bei Hahn bel.
);


--drop table stammdaten;

create table legedaten
(
	lm_datum	date	not null,	 --Aktuelles Datum
	lm_ring_nr	varchar(10)	not null,	--Huhn ID
	lm_markierungs_farbe varchar(20) 	null,--Optional
	lm_anzahl	int	not null,	--1-2, (0 nicht erf.)
	lm_gewicht	int	not null,	--Bei 2, d Gesamtgew.
	constraint for_ring_nr foreign key(lm_ring_nr) 
                              references stammdaten(sd_ringnr)
);

--drop table legedaten;

INSERT INTO stammdaten VALUES
('25W0001', 'Ginger',  '2022-03-15', 'Rhode Island Red',  'w', 1, 'Red',     'Red',   2500, 'OK',  'Brown',  NULL, NULL, NULL),
('25W0002', 'Clover',  '2022-05-20', 'Plymouth Rock',     'w', 2, 'Barred',  'Red',   2300, 'OK',  'Cream',  NULL, NULL, NULL),
('25W0003', 'Sunny',   '2022-07-12', 'Leghorn',           'w', 3, 'White',   'Pink',  2100, 'OK',  'White',  NULL, NULL, NULL),
('25W0004', 'Mabel',   '2022-09-05', 'Orpington',         'w', 4, 'Buff',    'Red',   2800, 'NOK', 'Pink',   NULL, NULL, NULL),
('25W0005', 'Daisy',   '2023-01-10', 'Sussex',            'w', 5, 'Speckled','Red',   2600, 'OK',  'Brown',  NULL, NULL, NULL),
('25W0006', 'Penny',   '2023-02-28', 'Australorp',        'w', 1, 'Black',   'Red',   2450, 'OK',  'Brown',  NULL, NULL, NULL),
('25W0007', 'Ruby',    '2022-11-15', 'Marans',            'w', 2, 'Cuckoo',  'Red',   2700, 'OK',  'Dark',   NULL, NULL, NULL),
('25W0008', 'Blossom', '2023-04-01', 'Silkie',            'w', 3, 'Gray',    'Purple',1800, 'OK',  'Cream',  NULL, NULL, NULL),
('25M0001', 'Rocky',   '2021-08-10', 'Brahma',            'm', 4, 'White',   'Red',   4500, 'NOK', NULL,     NULL, NULL, 85),
('25M0002', 'Duke',    '2021-09-25', 'Sussex',            'm', 5, 'Gray',    'Red',   4000, 'OK',  NULL,     NULL, NULL, 92);

select * from stammdaten

INSERT INTO legedaten VALUES
('2023-10-01', '25W0001', 'Red',    1, 55),
('2023-10-02', '25W0001', 'Red',    2, 95),
('2023-10-30', '25W0001', 'Red',    1, 60),

('2023-10-01', '25W0002', 'Blue',   1, 50),
('2023-10-02', '25W0002', 'Blue',   1, 52),
('2023-10-30', '25W0002', 'Blue',   2, 98),

('2023-10-01', '25W0003', 'Green',  1, 48),
('2023-10-02', '25W0003', 'Green',  1, 49),
('2023-10-30', '25W0003', 'Green',  1, 53),

('2023-10-01', '25W0004', 'Red',    1, 58),
('2023-10-02', '25W0004', 'Blue',   0, 0), -- 0不记录
('2023-10-03', '25W0004', 'Red',    1, 60),
('2023-10-30', '25W0004', 'Blue',   1, 57),

('2023-10-01', '25W0005', 'Yellow', 2, 92),
('2023-10-02', '25W0005', 'Purple', 1, 49),
('2023-10-30', '25W0005', 'Orange', 1, 55),

('2023-10-01', '25W0006', 'Green', 2, 52),
('2023-10-02', '25W0006', 'Red', 1, 69),
('2023-10-03', '25W0006', 'Blue', 2, 75),

('2023-10-01', '25W0007', 'Blue', 2, 72),
('2023-10-02', '25W0007', 'Red', 2, 68),
('2023-10-04', '25W0007', 'Blue', 2, 55),

('2023-10-01', '25W0008', 'Red', 1, 62),
('2023-10-02', '25W0008', 'Red', 1, 58),
('2023-10-04', '25W0008', 'Blue', 2, 75);


select * from legedaten;

select lm_ring_nr as ring_nr, 
       sum(lm_anzahl)*365/(select datediff(day,MIN(lm_datum), MAX(lm_datum)) + 1) as anzahl,
	   sum(lm_gewicht) / sum(lm_anzahl) as schnittgewicht
	into legestatistik	from legedaten
	group by lm_ring_nr;

--Übernehmen der Daten in die Stammtabelle und Zwischentabelle löschen
update stammdaten                   --Zwischentabelle abfragen
	set sd_legeleistung = (select anzahl 
                              from legestatistik 
                                   where sd_ringnr = ring_nr),
        sd_eiergewicht  = (select schnittgewicht 
                                   from legestatistik
                                   where sd_ringnr = ring_nr);

drop table legestatistik;            --Zwischentabelle löschen