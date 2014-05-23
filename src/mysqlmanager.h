#ifndef MYSQLMANAGER_H
#define MYSQLMANAGER_H
#include <QtSql>

class mySQLManager
{
public:
    mySQLManager(QString host_name,QString db_name,QString db_User,QString db_Password);
    void writeMySQL(QString tableName, QStringList bindingTo, QStringList parametersToBind);
private:
    QSqlDatabase m_db;
};

#endif // MYSQLMANAGER_H
