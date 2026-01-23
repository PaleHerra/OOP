#include "chef.h"
#include <iostream>

chef::chef()
{

    cout << "Olen default konstruktorissa!" << endl;
}


chef::chef(string cN)
{

    cout << "Olen input konstruktorissa!" << endl;
    chefName = cN;
}



chef::~chef()
{

    cout << "Olen default konstruktorissa!" << endl;
}



int chef::makeSalad(int numberOfItems)
{
    cout << "olen salaattifunktionssa!" << endl;
  //  int numberOfPortions = numberOfItems/5;
    cout << "annoit: " << numberOfItems << " ainesta" << endl;
    cout << "Siita saadaan " << numberOfItems/5 << " salaattiannosta" << endl;
    return numberOfItems/5;

}

int chef::makeSoup(int numberOfItems)
{
    cout << "olen soppafunktiossa!" << endl;
    cout << "annoit: " << numberOfItems << " ainesta" << endl;
    cout << "Siita saadaan " << numberOfItems/3 << " soppaannosta" << endl;
    return numberOfItems/3;
}

string chef::getName()
{
    cout << "olen getterissä!" << endl;
    cout << "Kokin nimi on: " << chefName << endl;
    return chefName;

}

void chef::setName(string cN)
{
    cout << "olen setterissä!" << endl;
    chefName = cN;
}

