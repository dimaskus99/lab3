#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include "client.h"
#include "database.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onAddClientButtonClicked();
    void onShowClientsButtonClicked();

private:
    QLineEdit *idEdit;
    QLineEdit *fullNameEdit;
    QLineEdit *genderEdit;
    QLineEdit *birthDateEdit;
    QLineEdit *ageEdit;
    QLineEdit *heightEdit;
    QLineEdit *weightEdit;
    QLineEdit *childrenCountEdit;
    QLineEdit *maritalStatusEdit;
    QLineEdit *badHabitsEdit;
    QLineEdit *hobbiesEdit;
    QLineEdit *descriptionEdit;
    QLineEdit *zodiacSignCodeEdit;
    QLineEdit *relationshipCodeEdit;
    QLineEdit *nationalityCodeEdit;
    QLineEdit *addressEdit;
    QLineEdit *phoneEdit;
    QLineEdit *passportDataEdit;
    QLineEdit *partnerInfoEdit;
    QTextEdit *outputTextEdit;

    Database database;
};

#endif // MAINWINDOW_H
