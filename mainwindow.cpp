#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QMessageBox>
#include<QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->hideErrorMessage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSayHello_clicked()
{
    QString name = ui->txtName->text();

    if (name != NULL && !name.isEmpty())
    {
        this->hideErrorMessage();
        QMessageBox* messageBox = new QMessageBox(this);
        messageBox->setText(name);
        messageBox->show();
    }
    else
    {
        this->showErrorMessage();
    }
}

void MainWindow::showErrorMessage()
{
    ui->lblErrorMessage->setVisible(true);
}

void MainWindow::hideErrorMessage()
{
    ui->lblErrorMessage->setVisible(false);
}
