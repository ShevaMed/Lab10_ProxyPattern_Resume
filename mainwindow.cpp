#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    resume = new ProxyResume(ui->firstName_lineEdit, ui->lastName_lineEdit, ui->phone_lineEdit,
                                  ui->email_lineEdit, ui->education_lineEdit, ui->expereinceDes_lineEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete resume;
}


void MainWindow::on_Upload_pushButton_clicked()
{
    ui->firstName_lineEdit->setStyleSheet("");
    ui->lastName_lineEdit->setStyleSheet("");
    ui->phone_lineEdit->setStyleSheet("");
    ui->email_lineEdit->setStyleSheet("");
    ui->education_lineEdit->setStyleSheet("");
    ui->expereinceDes_lineEdit->setStyleSheet("");

    resume->uploadResume();

    QString status = resume->getStatus();
    int countAttempt = resume->getCountAttempt();

    ui->statusbar->showMessage(status);

    ui->lcdNumber->display(countAttempt);
}

