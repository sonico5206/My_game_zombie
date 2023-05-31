#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_checkBox_stateChanged(int arg1)
//{
//    bool chek_box_clicked;
//    if(ui->checkBox->isChecked()){
//        chek_box_clicked=true;
//    }else{chek_box_clicked=false;}
//    //return chek_box_clicked;
//}

void MainWindow::on_pushButton_4_clicked()                  //button_next
{
//    QString name=ui->lineEdit->text();
//    QString email=ui->lineEdit_2->text();
//    QString age=ui->lineEdit_3->text();


   // нужно проверить стоит ли галочка

hide();
    Menu window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_5_clicked()                  //button_exit
{
    QMessageBox::StandardButton clicked_button_exit =QMessageBox::question(this,"","exit the programm?",QMessageBox::Yes|QMessageBox::No);
    if(clicked_button_exit==QMessageBox::Yes){
        QApplication::quit();
    }
}




