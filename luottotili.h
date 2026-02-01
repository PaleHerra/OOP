#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <iostream>
#include "pankkitili.h"

using namespace std;


class Luottotili : public pankkitili
{
public:
    Luottotili();
    Luottotili(string, double);
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;



protected:
    double luottoraja = 0;



};

#endif // LUOTTOTILI_H
