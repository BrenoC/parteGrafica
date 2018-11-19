#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
vision object;
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

void MainWindow::on_okBTN_clicked()
{
    int index;
    index = ui->comboBox->currentIndex();
    switch(index){
    case 0: object.soma();
        break;
    case 1:object.subtrai();
        break;
    case 2:
        if(object.getN() >= 0){
            object.fatorial();
        }
        else{
          QMessageBox::information(this, tr("WARNING"), tr("Fatorial de numero negativo nao existe!!!"));
        }
        break;
    }
    ui->display->display(object.getN());
    ui->display2->display(object.getFat());
}
