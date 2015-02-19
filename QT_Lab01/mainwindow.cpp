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

void MainWindow::on_pushButton_pressed()
{
    QString password = ui->lineEdit->text();
    if (password == "secret")
    {
        ui->textEdit->setText("Here's the secret to living to 100: live to 99 and then be VERY carelful.");
    }
    else
    {
        ui->textEdit->setText("That's not the correct password, so I can't share the secret with you.");
    }
}
