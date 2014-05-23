#include "mysqlmanager.h"
#include <QDebug>
mySQLManager::mySQLManager(QString host_name, QString db_name, QString db_User, QString db_Password)
{
    m_db.addDatabase("QMYSQL");
    m_db.setHostName(host_name);
     m_db.setDatabaseName(db_name);
     m_db.setUserName(db_User);
     m_db.setPassword(db_Password);


    bool ok = m_db.open();

}

void mySQLManager::writeMySQL(QString tableName,QStringList bindingTo,QStringList parametersToBind)
{
    //Dynamic C++ SQL Query Builder
    //Written By Jesse Bud
    // Free and Open!!
    QSqlQuery dbQuery;
    QString templateQuery = "INSERT INTO " + tableName + "(";
    for(int i = 0; i < bindingTo.size(); i++){
        if (i == bindingTo.size()){
            templateQuery.append(")");
        return;
        }
        templateQuery.append(bindingTo.at(i) + "," + " ");
    }
        templateQuery.append("VALUES (");
    for(int i=0; i <= parametersToBind.size(); i++){
          templateQuery.append("?, ");
    }
    templateQuery.chop(2);
    templateQuery.append(")");
    qDebug() << templateQuery;
    dbQuery.prepare(templateQuery);
    for(int i = 0; i < parametersToBind.size(); i++){
        dbQuery.addBindValue(parametersToBind.at(i));
    }
    dbQuery.exec();
}
