#ifndef GAMENEW_H
#define GAMENEW_H


class GameNew
{
public:
    GameNew(int); // konstruktori
        ~GameNew();
    void play();
    void printGameResult();


    private:

    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

protected:

};



#endif // GAMENEW_H
