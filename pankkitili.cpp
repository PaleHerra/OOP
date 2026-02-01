#include "pankkitili.h"
#include <iostream>
using namespace std;

/*
    pankkitili();
    pankkitili(string);

    virtual bool deposit(double);
    virtual bool withdraw(double);

protected:
    std::string omistaja;
    double saldo = 0;
*/


pankkitili::pankkitili()
{

    cout << "Olen pankkitili: default konstruktorissa!" << endl;

}

pankkitili::pankkitili(string om)
{
    cout << "Pankkitili luotu: " << om << endl;
    omistaja = om;

}

double pankkitili::getBalance()
{
    //cout << "olen saldokyselyssa!" << endl;
    return saldo;

}

bool pankkitili::deposit(double sum)
{
    cout << "Olen pankkitili: talletuksessa!" << endl;
    if(sum < 0) return false;
    saldo += sum;
    return true;
}


bool pankkitili::withdraw(double sum)
{
    cout << "Olen pankkitili: nostossa!" << endl;

    if((sum < 0)  || (saldo - sum < 0))return false;
    saldo -= sum;
    return true;

}




