#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "string.h"

using namespace std;

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

void MainWindow::on_pushButton_pressed()
{
    QString bll = ui->lineEdit->text();
    if(bll == "secret"){
        ui->textBrowser->setText( "Herre's the secret to living to 100 live to 99 and then be VERY carefull");
    }
    else{
        ui->textBrowser->setText( "that password is invalid");
    }
}
