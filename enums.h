#ifndef ENUMS_H
#define ENUMS_H

#include <QObject>

enum class Modus
{
    noMode,
    newMode,
    updateMode,
    deleteMode
};

enum DataRole {
    IsNewRole = Qt::UserRole + 1
};

#endif // ENUMS_H
