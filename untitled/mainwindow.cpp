#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

/*
 *Jacob steiner
 *2/20/15
 *QT_Lab01
 */

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
    QString access = ui -> lineEdit -> text();
    if (access == "Password"){
        ui->label->setText("Access granted.");
        ui->lineEdit->setText("");
    }
    else {
        ui->label->setText("Access denied");
        ui->lineEdit->setText("");
    }

}
