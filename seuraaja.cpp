#include "seuraaja.h"


/*
    Seuraaja* next = nullptr;
    Seuraaja();
    Seuraaja(string);
    string getNimi();
    void paivitys(string);
 */


Seuraaja::Seuraaja()
{
    cout << "Seuraaja konst" << endl;
}

Seuraaja::Seuraaja(string aNimi)
{
    cout << "Seuraaja paramet konst" << endl;

    nimi = aNimi;
}

string Seuraaja::getNimi()
{
    cout << "getN" << endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti)
{
    cout << "paiv" << endl;
    cout << "Viesti: " << viesti << endl;
}

