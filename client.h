#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QDate>

class Client
{
public:
    Client(QString id, QString fullName, QString gender, QDate birthDate, int age,
           double height, double weight, int childrenCount, QString maritalStatus,
           QString badHabits, QString hobbies, QString description,
           QString zodiacSignCode, QString relationshipCode,
           QString nationalityCode, QString address, QString phone,
           QString passportData, QString partnerInfo);

    QString getId() const;
    void setId(const QString &value);

    QString getFullName() const;
    void setFullName(const QString &value);

    QString getGender() const;
    void setGender(const QString &value);

    QDate getBirthDate() const;
    void setBirthDate(const QDate &value);

    int getAge() const;
    void setAge(int value);

    double getHeight() const;
    void setHeight(double value);

    double getWeight() const;
    void setWeight(double value);

    int getChildrenCount() const;
    void setChildrenCount(int value);

    QString getMaritalStatus() const;
    void setMaritalStatus(const QString &value);

    QString getBadHabits() const;
    void setBadHabits(const QString &value);

    QString getHobbies() const;
    void setHobbies(const QString &value);

    QString getDescription() const;
    void setDescription(const QString &value);

    QString getZodiacSignCode() const;
    void setZodiacSignCode(const QString &value);

    QString getRelationshipCode() const;
    void setRelationshipCode(const QString &value);

    QString getNationalityCode() const;
    void setNationalityCode(const QString &value);

    QString getAddress() const;
    void setAddress(const QString &value);

    QString getPhone() const;
    void setPhone(const QString &value);

    QString getPassportData() const;
    void setPassportData(const QString &value);

    QString getPartnerInfo() const;
    void setPartnerInfo(const QString &value);

private:
    QString id;
    QString fullName;
    QString gender;
    QDate birthDate;
    int age;
    double height;
    double weight;
    int childrenCount;
    QString maritalStatus;
    QString badHabits;
    QString hobbies;
    QString description;
    QString zodiacSignCode;
    QString relationshipCode;
    QString nationalityCode;
    QString address;
    QString phone;
    QString passportData;
    QString partnerInfo;
};

#endif // CLIENT_H

