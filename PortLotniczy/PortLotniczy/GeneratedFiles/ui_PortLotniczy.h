/********************************************************************************
** Form generated from reading UI file 'PortLotniczy.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTLOTNICZY_H
#define UI_PORTLOTNICZY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortLotniczyClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *Loty;
    QLineEdit *portOd;
    QLineEdit *portPrzy;
    QCalendarWidget *calendarWidget;
    QDateEdit *dataOdl;
    QDateEdit *dataPrzy;
    QTimeEdit *GodiznOdlo;
    QTimeEdit *godzPrzy;
    QComboBox *Przewoznik;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PortLotniczyClass)
    {
        if (PortLotniczyClass->objectName().isEmpty())
            PortLotniczyClass->setObjectName(QStringLiteral("PortLotniczyClass"));
        PortLotniczyClass->resize(1161, 331);
        centralWidget = new QWidget(PortLotniczyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Loty = new QTextBrowser(centralWidget);
        Loty->setObjectName(QStringLiteral("Loty"));
        Loty->setGeometry(QRect(610, 30, 521, 231));
        portOd = new QLineEdit(centralWidget);
        portOd->setObjectName(QStringLiteral("portOd"));
        portOd->setGeometry(QRect(10, 30, 113, 20));
        portPrzy = new QLineEdit(centralWidget);
        portPrzy->setObjectName(QStringLiteral("portPrzy"));
        portPrzy->setGeometry(QRect(150, 30, 113, 20));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(280, 20, 311, 161));
        dataOdl = new QDateEdit(centralWidget);
        dataOdl->setObjectName(QStringLiteral("dataOdl"));
        dataOdl->setGeometry(QRect(10, 110, 110, 22));
        dataPrzy = new QDateEdit(centralWidget);
        dataPrzy->setObjectName(QStringLiteral("dataPrzy"));
        dataPrzy->setGeometry(QRect(150, 110, 110, 22));
        GodiznOdlo = new QTimeEdit(centralWidget);
        GodiznOdlo->setObjectName(QStringLiteral("GodiznOdlo"));
        GodiznOdlo->setGeometry(QRect(10, 70, 111, 22));
        godzPrzy = new QTimeEdit(centralWidget);
        godzPrzy->setObjectName(QStringLiteral("godzPrzy"));
        godzPrzy->setGeometry(QRect(150, 70, 111, 22));
        Przewoznik = new QComboBox(centralWidget);
        Przewoznik->addItem(QString());
        Przewoznik->addItem(QString());
        Przewoznik->setObjectName(QStringLiteral("Przewoznik"));
        Przewoznik->setGeometry(QRect(70, 160, 111, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 10, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 10, 47, 13));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 200, 151, 23));
        PortLotniczyClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PortLotniczyClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1161, 21));
        PortLotniczyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PortLotniczyClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PortLotniczyClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PortLotniczyClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PortLotniczyClass->setStatusBar(statusBar);

        retranslateUi(PortLotniczyClass);

        QMetaObject::connectSlotsByName(PortLotniczyClass);
    } // setupUi

    void retranslateUi(QMainWindow *PortLotniczyClass)
    {
        PortLotniczyClass->setWindowTitle(QApplication::translate("PortLotniczyClass", "PortLotniczy", nullptr));
        Przewoznik->setItemText(0, QApplication::translate("PortLotniczyClass", "Lot", nullptr));
        Przewoznik->setItemText(1, QApplication::translate("PortLotniczyClass", "BudensWera", nullptr));

        label->setText(QApplication::translate("PortLotniczyClass", "Odlot Z", nullptr));
        label_2->setText(QApplication::translate("PortLotniczyClass", "Loty", nullptr));
        label_3->setText(QApplication::translate("PortLotniczyClass", "Przylot do", nullptr));
        pushButton->setText(QApplication::translate("PortLotniczyClass", "Szukaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PortLotniczyClass: public Ui_PortLotniczyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTLOTNICZY_H
