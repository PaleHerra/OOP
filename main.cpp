#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    string kokinNimi;
    chef kokki_1("Lars");

    kokinNimi = kokki_1.getName();

    cout << "main: kokin nimi on:" << kokinNimi << endl;
    kokki_1.makeSalad(15);
    kokki_1.makeSalad(6);
    kokki_1.makeSalad(17);

    kokki_1.makeSoup(15);


    italianChef it_kokki_1("Fabio");

    it_kokki_1.makeSalad(15);
    it_kokki_1.askSecret("pizza", 20, 5);


    return 0;
}
