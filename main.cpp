#include <iostream>
#include "luottotili.h"
#include "pankkitili.h"
#include "asiakas.h"
using namespace std;

int main()
{
   // cout << "Hello World!" << endl;
/*
    pankkitili pt1("Mirka");
    pankkitili pt2("Mikko");
    //Luottotili lt1;
   // Luottotili lt2("Make", 500);
    pt2.deposit(100);
    pt2.withdraw(50);
    pt1.deposit(50);
    double luettusaldo = pt2.getBalance();
    cout << "Mikon saldo on: " << luettusaldo << endl;
    luettusaldo = pt1.getBalance();
    cout << "Mirkan saldo on: " << luettusaldo << endl;

   // lt2.withdraw(100);
    //lt2.deposit(30);
    //luettusaldo = lt2.getBalance();
   // cout << "Maken luotto saldo on: " << luettusaldo << endl;
    */
    asiakas kt1("Miska",1);
    asiakas kt2("Jaska",2);

    kt1.talletus(200);
    kt1.showSaldo();

   kt1.tiliSiirto(200, kt2);

    kt2.showSaldo();
    kt1.showSaldo();
    //cout << "tilin saldo: " << testi << endl;
    return 0;
}
