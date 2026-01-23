#include "italianchef.h"
#include <iostream>
using namespace std;


italianChef::italianChef()
{

    cout << "olen italiadefaultkonstruktorissa!" << endl;




}

italianChef::italianChef(string cN)
{

    chefName = cN;
    cout << "olen italiINPUTkonstruktorissa!" << endl;

}

italianChef::~italianChef()
    {

        cout << "olen  italiandefaultdekostruktorissa" << endl;


    }

    bool italianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
    {

       // if (pw != passWord) return false;
        if(pw.compare(password) == 1) return false;
        water = amountOfWater;
        flour = amountOfFlour;

        int numberOfPizzas = makePizza();
        cout << "saatiin tehtya: " << numberOfPizzas <<" pizzaa" << endl;
        return true;
    }

    int italianChef:: makePizza()
    {
        int pizzalasku=0;
        cout << "tehdaan pizzaa" << endl;
        cout << "jauhoja on: " << flour << endl;
        cout << "vetta on: " << water << endl;
        while (water/5 > flour/5){
            water--;
        }
        while(water/5 < flour/5){
            flour--;
        }

        pizzalasku = (water/5 + flour/5)/2;
        return pizzalasku;
    }

