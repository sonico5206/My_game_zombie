#include "menu.h"
#include "ui_menu.h"
#include"game.h"
#include"results.h"
#include"settings.h"
#include<QMessageBox>
Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton clicked_button_exit =QMessageBox::question(this,"","exit the programm?",QMessageBox::Yes|QMessageBox::No);
    if(clicked_button_exit==QMessageBox::Yes){
        QApplication::quit();
    }
}



void Menu::on_pushButton_clicked()
{
    hide();
        Game window_1;
        window_1.setModal(true);
        window_1.exec();
}


void Menu::on_pushButton_3_clicked() //results
{
    results window_2;
    window_2.setModal(true);
    window_2.exec();
}


void Menu::on_pushButton_4_clicked()   //settings
{
    settings window_3;
        window_3.setModal(true);
        window_3.exec();
}

