#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gamenew.h"

using namespace std;




void GameNew::play()
{

    cout << "GAME CONSTRUCTOR: pelissa" << endl;

    srand(std::time(0));
    randomNumber = (rand()%maxNumber)+1;

    cout << "maxNumber: " << maxNumber << endl << "randomnumber: " << randomNumber << endl;
    bool stayInLoop = true;
    while(stayInLoop)
    {
        cout << "arvaa luku!" << endl;

        cin >> playerGuess;
        if(playerGuess < randomNumber)
        {
            cout << "arvaus liian pieni!" << endl;
            numOfGuesses++;
        }

        else if(playerGuess > randomNumber)
        {
            cout << "arvaus liian suuri!" << endl;
            numOfGuesses++;
        }

        else
        {

            numOfGuesses++;
            stayInLoop = false;
        }
    }

}

GameNew:: GameNew(int mN)
{
    cout << "GAME CONSTRUCTOR: peli luotu" << endl;
    maxNumber = mN;
    numOfGuesses = 0;
}


GameNew::~GameNew()
{
    cout << "GAME CONSTRUCTOR: Peli loppui\n";
}





void GameNew::printGameResult()
{

    cout << "GAME CONSTRUCTOR: ";
    cout << "Arvasit oikein\n";
    cout << "Arvausten maara: " << numOfGuesses << endl;



}


