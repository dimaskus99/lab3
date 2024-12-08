#include "mainwindow.h"
#include "client.h"
#include "database.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    idEdit = new QLineEdit(this);
    fullNameEdit = new QLineEdit(this);
    genderEdit = new QLineEdit(this);
    birthDateEdit = new QLineEdit(this);
    ageEdit = new QLineEdit(this);
    heightEdit = new QLineEdit(this);
    weightEdit = new QLineEdit(this);
    childrenCountEdit = new QLineEdit(this);
    maritalStatusEdit = new QLineEdit(this);
    badHabitsEdit = new QLineEdit(this);
    hobbiesEdit = new QLineEdit(this);
    descriptionEdit = new QLineEdit(this);
    zodiacSignCodeEdit = new QLineEdit(this);
    relationshipCodeEdit = new QLineEdit(this);
    nationalityCodeEdit = new QLineEdit(this);
    addressEdit = new QLineEdit(this);
    phoneEdit = new QLineEdit(this);
    passportDataEdit = new QLineEdit(this);
    partnerInfoEdit = new QLineEdit(this);
    outputTextEdit = new QTextEdit(this);

    QPushButton *addButton = new QPushButton("Add Client", this);
    QPushButton *showButton = new QPushButton("Show Clients", this);

    QVBoxLayout *layout = new QVBoxLayout;

    layout->addWidget(new QLabel("ID:"));
    layout->addWidget(idEdit);
    layout->addWidget(new QLabel("Full Name:"));
    layout->addWidget(fullNameEdit);
    layout->addWidget(new QLabel("Gender:"));
    layout->addWidget(genderEdit);
    layout->addWidget(new QLabel("Birth Date (YYYY-MM-DD):"));
    layout->addWidget(birthDateEdit);
    layout->addWidget(new QLabel("Age:"));
    layout->addWidget(ageEdit);
    layout->addWidget(new QLabel("Height:"));
    layout->addWidget(heightEdit);
    layout->addWidget(new QLabel("Weight:"));
    layout->addWidget(weightEdit);
    layout->addWidget(new QLabel("Children Count:"));
    layout->addWidget(childrenCountEdit);
    layout->addWidget(new QLabel("Marital Status:"));
    layout->addWidget(maritalStatusEdit);
    layout->addWidget(new QLabel("Bad Habits:"));
    layout->addWidget(badHabitsEdit);
    layout->addWidget(new QLabel("Hobbies:"));
    layout->addWidget(hobbiesEdit);
    layout->addWidget(new QLabel("Description:"));
    layout->addWidget(descriptionEdit);
    layout->addWidget(new QLabel("Zodiac Sign Code:"));
    layout->addWidget(zodiacSignCodeEdit);
    layout->addWidget(new QLabel("Relationship Code:"));
    layout->addWidget(relationshipCodeEdit);
    layout->addWidget(new QLabel("Nationality Code:"));
    layout->addWidget(nationalityCodeEdit);
    layout->addWidget(new QLabel("Address:"));
    layout->addWidget(addressEdit);
    layout->addWidget(new QLabel("Phone:"));
    layout->addWidget(phoneEdit);
    layout->addWidget(new QLabel("Passport Data:"));
    layout->addWidget(passportDataEdit);
    layout->addWidget(new QLabel("Partner Info:"));
    layout->addWidget(partnerInfoEdit);
    layout->addWidget(addButton);
    layout->addWidget(showButton);
    layout->addWidget(outputTextEdit);

    QWidget *widget = new QWidget(this);
    widget->setLayout(layout);
    setCentralWidget(widget);

    connect(addButton, &QPushButton::clicked, this, &MainWindow::onAddClientButtonClicked);
    connect(showButton, &QPushButton::clicked, this, &MainWindow::onShowClientsButtonClicked);
}

MainWindow::~MainWindow()
{
}

void MainWindow::onAddClientButtonClicked()
{
    Client client(idEdit->text(), fullNameEdit->text(), genderEdit->text(),
                 QDate::fromString(birthDateEdit->text(), "yyyy-MM-dd"), ageEdit->text().toInt(),
                 heightEdit->text().toDouble(), weightEdit->text().toDouble(),
                 childrenCountEdit->text().toInt(), maritalStatusEdit->text(),
                 badHabitsEdit->text(), hobbiesEdit->text(), descriptionEdit->text(),
                 zodiacSignCodeEdit->text(), relationshipCodeEdit->text(),
                 nationalityCodeEdit->text(), addressEdit->text(), phoneEdit->text(),
                 passportDataEdit->text(), partnerInfoEdit->text());

    database.addClient(client);
}

void MainWindow::onShowClientsButtonClicked()
{
    outputTextEdit->clear();
    database.showClients();
}
