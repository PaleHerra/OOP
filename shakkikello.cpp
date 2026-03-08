#include "shakkikello.h"
#include "./ui_shakkikello.h"

Shakkikello::Shakkikello(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shakkikello)
{
    ui->setupUi(this);
    setGameInfoText("Select playtime and press start", 0);

}

Shakkikello::~Shakkikello()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
   // setGameInfoText("Select playtime and press start", 0);
}

void Shakkikello::on_playerButton_clicked()
{
    currentPlayer = 2;
}
void Shakkikello::on_playerButton2_clicked()
{
    currentPlayer = 1;
}


void Shakkikello::on_startButton_clicked()
{
    if(pelitila == 1){
    //gameTime = 10;
    p2Time = gameTime;
    p1Time = gameTime;
    currentPlayer = 1;
    pelitila = 2;
    setGameInfoText("Game ongoing!", 0);

    // ui alustukset
    ui -> progressBar -> setRange(0,gameTime);
    ui -> progressBar2 -> setRange(0,gameTime);
    ui -> progressBar ->setValue(gameTime);
    ui -> progressBar2 ->setValue(gameTime);
    // käynnistetään ajastin

    timer = new QTimer(this);
    connect(timer,  //lähettävä olio
            &QTimer::timeout, // signaali
            this, // vastaanottava olio
            &Shakkikello::updateProgressBar); // slotti
    timer-> setInterval(1000); // 1000mms = 1s
    timer-> start();
    }
}

void Shakkikello::updateProgressBar()
{

    if(currentPlayer == 1){
        if(p1Time == 0){
            // pelaaja 1 hävisi
            timer->stop();
            delete timer;
            timer = nullptr;
            if(pelitila != 0){
            setGameInfoText("Player 2 won!", 0);
            }
        }
        else{
    p1Time = p1Time-1;
    ui->progressBar->setValue(p1Time);
        }
    }
    else{
        if(p2Time == 0){
            // pelaaja 2 hävisi
            timer->stop();
            delete timer;
            timer = nullptr;
            if(pelitila != 0){
            setGameInfoText("Player 1 won!", 0);
            }
        }
    else{
        p2Time = p2Time-1;
        ui->progressBar2->setValue(p2Time);
        }
    }
}


void Shakkikello::on_timeButton_clicked()
{
    if(pelitila == 0){
        gameTime = 120;
        pelitila = 1;
        setGameInfoText("Ready to play", 0);
    }
}


void Shakkikello::on_timeButton2_clicked()
{
    if(pelitila == 0){
        gameTime = 300;
        pelitila = 1;
        setGameInfoText("Ready to play", 0);
    }
}


void Shakkikello::on_stopButton_clicked()
{
    setGameInfoText("Select playtime and press start game!", 0);
    ui->progressBar->setValue(0);
    qDebug() << "testi 1";
    ui->progressBar2->setValue(0);
    qDebug() << "testi 2";

    if (timer != nullptr) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    pelitila = 0;
    qDebug() << "testi 6";


}

void Shakkikello::setGameInfoText(QString a, short b){

    //QString a = QString::text()
    //ui->label->setText("testi");
    if (pelitila == 0) {
        ui->label -> setText(a);
    }
   else if(pelitila == 1){
            ui->label -> setText(a);
        }
   else if(pelitila == 2){
        ui->label -> setText(a);
    }

       // ui->label->setText("testi");

}

