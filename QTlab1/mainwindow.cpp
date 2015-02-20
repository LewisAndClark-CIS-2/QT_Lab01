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



void MainWindow::on_SubmitButton_clicked()
{
    QString theSecret = "Here's the Secret to living to 100: live 99 and then be VERY careful.";
    if ( ui->lineEdit->text() == "secret")
    {
        ui->textEdit->setText(theSecret);
    }
    else {
        ui->textEdit->setText("That's not the correct password, so I can't share the secret with you.");
    }

}
