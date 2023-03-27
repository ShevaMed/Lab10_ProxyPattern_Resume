/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *firstName_lineEdit;
    QLabel *label_2;
    QLineEdit *lastName_lineEdit;
    QLabel *label_3;
    QLineEdit *phone_lineEdit;
    QLabel *label_4;
    QLineEdit *email_lineEdit;
    QLabel *label_5;
    QLineEdit *education_lineEdit;
    QLabel *label_6;
    QLineEdit *expereinceDes_lineEdit;
    QPushButton *Upload_pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLCDNumber *lcdNumber;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(283, 539);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 261, 452));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label);

        firstName_lineEdit = new QLineEdit(verticalLayoutWidget);
        firstName_lineEdit->setObjectName("firstName_lineEdit");
        QFont font1;
        font1.setPointSize(11);
        firstName_lineEdit->setFont(font1);

        verticalLayout->addWidget(firstName_lineEdit);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label_2);

        lastName_lineEdit = new QLineEdit(verticalLayoutWidget);
        lastName_lineEdit->setObjectName("lastName_lineEdit");
        lastName_lineEdit->setFont(font1);
        lastName_lineEdit->setMaxLength(25);

        verticalLayout->addWidget(lastName_lineEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label_3);

        phone_lineEdit = new QLineEdit(verticalLayoutWidget);
        phone_lineEdit->setObjectName("phone_lineEdit");
        phone_lineEdit->setFont(font1);

        verticalLayout->addWidget(phone_lineEdit);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label_4);

        email_lineEdit = new QLineEdit(verticalLayoutWidget);
        email_lineEdit->setObjectName("email_lineEdit");
        email_lineEdit->setFont(font1);

        verticalLayout->addWidget(email_lineEdit);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label_5);

        education_lineEdit = new QLineEdit(verticalLayoutWidget);
        education_lineEdit->setObjectName("education_lineEdit");
        education_lineEdit->setFont(font1);
        education_lineEdit->setFrame(true);

        verticalLayout->addWidget(education_lineEdit);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label_6);

        expereinceDes_lineEdit = new QLineEdit(verticalLayoutWidget);
        expereinceDes_lineEdit->setObjectName("expereinceDes_lineEdit");
        expereinceDes_lineEdit->setMinimumSize(QSize(0, 100));
        expereinceDes_lineEdit->setFont(font1);
        expereinceDes_lineEdit->setTabletTracking(false);
        expereinceDes_lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        expereinceDes_lineEdit->setDragEnabled(false);

        verticalLayout->addWidget(expereinceDes_lineEdit);

        Upload_pushButton = new QPushButton(verticalLayoutWidget);
        Upload_pushButton->setObjectName("Upload_pushButton");
        Upload_pushButton->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        Upload_pushButton->setFont(font2);

        verticalLayout->addWidget(Upload_pushButton);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 470, 261, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        lcdNumber = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber->setObjectName("lcdNumber");

        horizontalLayout->addWidget(lcdNumber);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        statusbar->setFont(font3);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Resume", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        firstName_lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "aaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        firstName_lineEdit->setText(QString());
        firstName_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "John", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        lastName_lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "aaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        lastName_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        phone_lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "+38 (\\000) 000-00-00;_", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        email_lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "NNNNNNNNNNnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", nullptr));
        email_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "john_dark87@gmail.com", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Education", nullptr));
        education_lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "SPEC-000  U\\niversity: >AAAaaaaa;_", nullptr));
        education_lineEdit->setPlaceholderText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Expereince / Description", nullptr));
        Upload_pushButton->setText(QCoreApplication::translate("MainWindow", "Upload Resume", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Count attempt: </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
