#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString Password = "Secret";
    if(ui->textEdit->toPlainText() == Password)
        ui->textEdit->setText("The Secret of living to 100, is to live to 99 and then tread carefully!");
    else
        ui->textEdit->setText("Sorry the password is wrong! please try again!");
}
