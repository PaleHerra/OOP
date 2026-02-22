#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Alkutila 0";
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::setActiveControls()
{
    qDebug() << "tila 0 kontrollerit";


}*/

void MainWindow::on_plusButton_clicked()
{
    if(tila == 2) {
    qDebug() << "Tila: " << tila << "plus sallittu";

    //Haetaan num 1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    //Haetaan num 2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " + " << num2;
    //lasketaan tulos
    result = num1 + num2;

    //kirjoitetaan tulos editoriin
    QString r = QString::number(result);
    ui -> resultEdit -> setText(r);
    //palataan alkutilaan
    tila = 0;
    }
}


void MainWindow::on_minusButton_clicked()
{
    if(tila == 2) {
     qDebug() << "Tila: " << tila << "miinus sallittu";

    //Haetaan num 1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    //Haetaan num 2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " - " << num2;
    //lasketaan tulos
    result = num1 - num2;

    //kirjoitetaan tulos editoriin
    QString r = QString::number(result);
    ui -> resultEdit -> setText(r);

    //palataan alkutilaan
    tila = 0;
    qDebug() << "Nykyinen tila: " << tila;
    }

}


void MainWindow::on_multButton_clicked()
{
    if(tila == 2) {
        qDebug() << "Tila: " << tila << "kertominen sallittu";

        //Haetaan num 1
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();
        //Haetaan num 2
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " * " << num2;
        //lasketaan tulos
        result = num1 * num2;

        //kirjoitetaan tulos editoriin
        QString r = QString::number(result);
        ui -> resultEdit -> setText(r);

        //palataan alkutilaan
        tila = 0;
        qDebug() << "Nykyinen tila: " << tila;
    }
}


void MainWindow::on_divButton_clicked()
{
    if(tila == 2) {
        qDebug() << "Tila: " << tila << "jako sallittu";

        //Haetaan num 1
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();
        //Haetaan num 2
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " / " << num2;
        //lasketaan tulos

        double result = static_cast<double>(num1) / num2;

        //kirjoitetaan tulos editoriin
        QString r = QString::number(result, 'f',2);
        ui -> resultEdit -> setText(r);

        //palataan alkutilaan
        tila = 0;
        qDebug() << "Nykyinen tila: " << tila;
    }
}



void MainWindow::on_N3Button_clicked()
{
   setEditNum(3);
}


void MainWindow::on_N2Button_clicked()
{
    setEditNum(2);

}


void MainWindow::on_N1Button_clicked()
{
    setEditNum(1);

}

void MainWindow::setEditNum(int num)
{
    QString lukuNyt;
    if(tila == 0) {
        qDebug() << "tila 0: kirjoitetaan num1:" << num;
        lukuNyt = ui->num1Edit->text();
        lukuNyt += QString::number(num);
        ui->num1Edit->setText(lukuNyt);


    }
    else if (tila ==1){
        qDebug() << "tila 1: kirjoitetaan num2:" << num;
        lukuNyt = ui->num2Edit->text();
        lukuNyt += QString::number(num);
        ui->num2Edit->setText(lukuNyt);
        //tila = 2;
    }
    else{
        qDebug() << "Vaara tila: Ei voi syottaa numeroa";
    }
    //ui->num1Edit->setText(QString::number(num));
}

void MainWindow::on_enterButton_clicked()
{
    qDebug() << "Nykyinen tila: " << tila;
    //tilasta 0 tilaan 1
    if(tila == 0){
        tila = 1;
    }
    // tilasta 1 tilaan o
    else if (tila==1){
        tila = 2;
    }

    qDebug() << "Uusi tila: " << tila;

}


void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    tila = 0;
    qDebug() << "Clearissa palautetaan tilaan " << tila;

}



void MainWindow::on_N4Button_clicked()
{
     setEditNum(4);
}

void MainWindow::on_N5Button_clicked()
{
     setEditNum(5);
}

void MainWindow::on_N6Button_clicked()
{
     setEditNum(6);
}

void MainWindow::on_N7Button_clicked()
{
     setEditNum(7);
}

void MainWindow::on_N8Button_clicked()
{
     setEditNum(8);
}
void MainWindow::on_N9Button_clicked()
{
     setEditNum(9);
}
void MainWindow::on_N0Button_clicked()
{
     setEditNum(0);
}



