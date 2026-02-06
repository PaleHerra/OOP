#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Notifikaattori n;
    Seuraaja* s1 = new Seuraaja("Ukko");
    Seuraaja* s2 = new Seuraaja("Mikko");
    Seuraaja* s3 = new Seuraaja("Anni");

    n.tulosta();
    n.postita("juups");
    n.poista(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();
    n.postita("jaaps");

    n.poista(s1);
    n.tulosta();
    n.poista(s2);
    n.tulosta();
    n.poista(s3);
    n.tulosta();



    return 0;
}
