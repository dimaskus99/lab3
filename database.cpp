#include "database.h"

Database::Database() {
    loadFromFile();
}

void Database::addClient(const Client &client) {
    clients.append(client);
    saveToFile();
}

void Database::showClients() const {
    for (const Client &client : clients) {
        qDebug() << "ID:" << client.getId();
        qDebug() << "Full Name:" << client.getFullName();
        qDebug() << "Gender:" << client.getGender();
        qDebug() << "Birth Date:" << client.getBirthDate().toString();
        qDebug() << "Age:" << client.getAge();
        qDebug() << "Height:" << client.getHeight();
        qDebug() << "Weight:" << client.getWeight();
        qDebug() << "Children Count:" << client.getChildrenCount();
        qDebug() << "Marital Status:" << client.getMaritalStatus();
        qDebug() << "Bad Habits:" << client.getBadHabits();
        qDebug() << "Hobbies:" << client.getHobbies();
        qDebug() << "Description:" << client.getDescription();
        qDebug() << "Zodiac Sign Code:" << client.getZodiacSignCode();
        qDebug() << "Relationship Code:" << client.getRelationshipCode();
        qDebug() << "Nationality Code:" << client.getNationalityCode();
        qDebug() << "Address:" << client.getAddress();
        qDebug() << "Phone:" << client.getPhone();
        qDebug() << "Passport Data:" << client.getPassportData();
        qDebug() << "Partner Info:" << client.getPartnerInfo();
        qDebug() << "----------------------------------";
    }
}

void Database::saveToFile() const {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    for (const Client &client : clients) {
        out << client.getId() << "," << client.getFullName() << "," << client.getGender() << ","
            << client.getBirthDate().toString() << "," << client.getAge() << "," << client.getHeight() << ","
            << client.getWeight() << "," << client.getChildrenCount() << "," << client.getMaritalStatus() << ","
            << client.getBadHabits() << "," << client.getHobbies() << "," << client.getDescription() << ","
            << client.getZodiacSignCode() << "," << client.getRelationshipCode() << "," << client.getNationalityCode() << ","
            << client.getAddress() << "," << client.getPhone() << "," << client.getPassportData() << ","
            << client.getPartnerInfo() << "\n";
    }
}

void Database::loadFromFile() {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList data = line.split(",");

        if (data.size() >= 19) {
            Client client(data[0], data[1], data[2], QDate::fromString(data[3], "yyyy-MM-dd"), data[4].toInt(),
                          data[5].toDouble(), data[6].toDouble(), data[7].toInt(), data[8], data[9],
                          data[10], data[11], data[12], data[13], data[14], data[15], data[16], data[17], data[18]);
            clients.append(client);
        }
    }
}
