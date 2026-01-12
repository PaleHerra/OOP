#include <iostream>
#include <cstdlib>
using namespace std;


int game(int maxNum){


srand(time(0));
int quess = 0;
int randomNumber =(rand() % maxNum) + 1;
int arvausMaara = 0;
    for(int i = 0; i==0;)
    {
        cout << "arvaa luku!" << endl;

        cin >> quess;
        if(quess < randomNumber)
        {
            cout << "arvaus liian pieni!" << endl;
            arvausMaara++;
        }

        else if(quess > randomNumber)
        {
            cout << "arvaus liian suuri!" << endl;
            arvausMaara++;
        }

        else
        {
            cout << "arvaus oli oikein!" << endl;
            arvausMaara++;
            i++;
        }
    }
    //cout << "Arvasit: " << arvausMaara << " kertaa!"<< endl;
    return(arvausMaara);
}

int main()
{

/*
    int randomNumber = rand() % 21;
    cout << "randomnumero:" << randomNumber << endl;


        for(int i = 0; i==0;)
    {
            cout << "arvaa luku!" << endl;

            cin >> quess;
            if(quess < randomNumber)
            {
                cout << "arvaus liian pieni!" << endl;
            }

            else if(quess > randomNumber)
            {
                cout << "arvaus liian suuri!" << endl;
            }

            else
            {
                cout << "arvaus oli oikein!" << endl;
                i++;
            }
    }
    */
    int maara = game(20);

    cout << "Arvasit: " << maara << " kertaa!"<< endl;
return 0;
}



