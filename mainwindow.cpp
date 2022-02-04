#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "add_matlab.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if(!add_matlabInitialize()){
        qDebug("add_matlab unsuccessfully initialized");
        return;
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString result;

    mwArray a(1,1,mxDOUBLE_CLASS);
    mwArray b(1,1,mxDOUBLE_CLASS);
    mwArray c(1,1,mxDOUBLE_CLASS);

    a(1,1)=ui->LE1->text().toInt();
    b(1,1)=ui->LE2->text().toInt();

    add_matlab(1,c,a,b);
    result = c.ToString();
    ui->LE3->setText(result);
    qDebug()<<result;
}

