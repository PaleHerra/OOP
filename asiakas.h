#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "luottotili.h"
#include "pankkitili.h"


class asiakas
{
public:
    asiakas();

    asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);

    bool tiliSiirto(double, asiakas&);
private:
    string nimi;
    pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
