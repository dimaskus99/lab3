#ifndef DATABASE_H
#define DATABASE_H

#include "client.h"
#include <QList>
#include <QTextStream>
#include <QFile>
#include <QDebug>

class Database
{
public:
    Database();
    void addClient(const Client &client);
    void showClients() const;
    void saveToFile() const;
    void loadFromFile();

private:
    QList<Client> clients;
    const QString filename = "clients.txt";
};

#endif // DATABASE_H
