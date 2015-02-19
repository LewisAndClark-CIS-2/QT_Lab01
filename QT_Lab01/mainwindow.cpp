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

    if (ui->password->text() == "secret")
    {
       ui->output->setText("Here's the secret to living to\n100: live to 99 and then be VERY\ncareful.");
    }
    else
    {
        ui->output->setText("That's not the correct password,\nso I can't share the secret with you.");
        ui->output->setText(ui->password->text());
    }
}
