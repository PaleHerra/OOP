#include "asiakas.h"
#include "pankkitili.h"
#include <iostream>



/*
    asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, asiakas&);

*/


asiakas::asiakas()
{
    cout << "Olen asiakas: default konstruktorissa!" << endl;

}

asiakas::asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{


    cout << "Asiakkuus luotu: " << name << endl;
    nimi = name;
}

string asiakas::getNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{

    cout << "Kayttotilin " << this->getNimi() << " saldo: "<< kayttotili.getBalance() << endl;
    cout << "Luottotilin " << this->getNimi() << " saldo: "<< luottotili.getBalance() << endl;
}



bool asiakas::nosto(double sum)
{

    kayttotili.withdraw(sum);
    return true;

}



bool asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
    return true;
}



bool asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
    return true;

}



bool asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
    return true;

}

bool asiakas::tiliSiirto(double sum, asiakas & kohde)
{

    cout <<  "Pankkitili: " << this->getNimi() << " siirtaa " << sum << " " << kohde.getNimi() << "lle" << endl;
    if(sum < 0) return false;
    double testi = kayttotili.getBalance();

    if ((testi - sum) < 0)
    {
        cout << "siirto epaonnistui" << endl;
        return false;
    }

    kayttotili.withdraw(sum);

    cout << "olen tilisiirrossa!" << endl;


    kohde.talletus(sum);
    return true;
}


