#include "connection.h"

Connection::Connection()
{}

bool Connection::createconnect()
{bool test=false;
    db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test_bd");//inserer le nom de la source de données ODBC
db.setUserName("rania");//inserer nom de l'utilisateur
db.setPassword("rania");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
    return  test;
}
void Connection::closeConnection(){db.close();}
