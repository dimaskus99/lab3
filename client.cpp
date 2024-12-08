#include "client.h"

Client::Client(QString id, QString fullName, QString gender, QDate birthDate, int age,
               double height, double weight, int childrenCount, QString maritalStatus,
               QString badHabits, QString hobbies, QString description,
               QString zodiacSignCode, QString relationshipCode,
               QString nationalityCode, QString address, QString phone,
               QString passportData, QString partnerInfo)
    : id(id), fullName(fullName), gender(gender), birthDate(birthDate), age(age),
      height(height), weight(weight), childrenCount(childrenCount), maritalStatus(maritalStatus),
      badHabits(badHabits), hobbies(hobbies), description(description),
      zodiacSignCode(zodiacSignCode), relationshipCode(relationshipCode),
      nationalityCode(nationalityCode), address(address), phone(phone),
      passportData(passportData), partnerInfo(partnerInfo) {}

QString Client::getId() const { return id; }
void Client::setId(const QString &value) { id = value; }

QString Client::getFullName() const { return fullName; }
void Client::setFullName(const QString &value) { fullName = value; }

QString Client::getGender() const { return gender; }
void Client::setGender(const QString &value) { gender = value; }

QDate Client::getBirthDate() const { return birthDate; }
void Client::setBirthDate(const QDate &value) { birthDate = value; }

int Client::getAge() const { return age; }
void Client::setAge(int value) { age = value; }

double Client::getHeight() const { return height; }
void Client::setHeight(double value) { height = value; }

double Client::getWeight() const { return weight; }
void Client::setWeight(double value) { weight = value; }

int Client::getChildrenCount() const { return childrenCount; }
void Client::setChildrenCount(int value) { childrenCount = value; }

QString Client::getMaritalStatus() const { return maritalStatus; }
void Client::setMaritalStatus(const QString &value) { maritalStatus = value; }

QString Client::getBadHabits() const { return badHabits; }
void Client::setBadHabits(const QString &value) { badHabits = value; }

QString Client::getHobbies() const { return hobbies; }
void Client::setHobbies(const QString &value) { hobbies = value; }

QString Client::getDescription() const { return description; }
void Client::setDescription(const QString &value) { description = value; }

QString Client::getZodiacSignCode() const { return zodiacSignCode; }
void Client::setZodiacSignCode(const QString &value) { zodiacSignCode = value; }

QString Client::getRelationshipCode() const { return relationshipCode; }
void Client::setRelationshipCode(const QString &value) { relationshipCode = value; }

QString Client::getNationalityCode() const { return nationalityCode; }
void Client::setNationalityCode(const QString &value) { nationalityCode = value; }

QString Client::getAddress() const { return address; }
void Client::setAddress(const QString &value) { address = value; }

QString Client::getPhone() const { return phone; }
void Client::setPhone(const QString &value) { phone = value; }

QString Client::getPassportData() const { return passportData; }
void Client::setPassportData(const QString &value) { passportData = value; }

QString Client::getPartnerInfo() const { return partnerInfo; }
void Client::setPartnerInfo(const QString &value) { partnerInfo = value; }
