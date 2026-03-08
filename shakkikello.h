#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Shakkikello;
}
QT_END_NAMESPACE

class Shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    Shakkikello(QWidget *parent = nullptr);
    ~Shakkikello();
    void timeout();
    //void updateProgressBar();
    void setGameInfoText(QString, short);

private slots:
    void on_playerButton2_clicked();
    void on_playerButton_clicked();

    void on_startButton_clicked();
    void updateProgressBar();

    void on_timeButton_clicked();

    void on_timeButton2_clicked();

    void on_stopButton_clicked();

private:
    Ui::Shakkikello *ui;
    int p1Time; // player1
    int p2Time; // player2
    int currentPlayer = 0;
    int gameTime = 0;
    QTimer*timer = nullptr;
    int pelitila = 0;


};
#endif // SHAKKIKELLO_H
