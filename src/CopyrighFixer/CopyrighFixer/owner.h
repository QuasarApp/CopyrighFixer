#ifndef OWNER_H
#define OWNER_H

#include "CopyrighFixer_global.h"
#include <QString>

namespace CopyrighFixer{

/**
 * @brief The Owner class for collect information about owner.
 */
class CopyrighFixer_EXPORT Owner
{
public:
    Owner();

private:
    QString name;
    QString timeRange;

public:

    /**
     * @brief setName The method will save the name of the owner who last used it
     * @param ownerName This is name of the owner.
     */
    void setName(const QString &ownerName);

    /**
     * @brief getOwnerName The method allows you to get information about the owner.
     * @return the owner name.
     */
    QString getOwnerName();

    /**
     * @brief setTimeRange A method that allows you to set the time interval for using a file.
     * @param interval This is a string value indicating the  date of ownership of the file.
     */
    void setTimeRange(const QString &interval);

    /**
     * @brief getTimeRange The method changes the timestamp of the usage.
     * @return the time interval when the file was modified
     */
    QString getTimeRange();

};

};

#endif // OWNER_H