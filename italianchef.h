#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"
using namespace std;

class italianChef : public chef
{
public:
    italianChef();
    ~italianChef();
    italianChef(string);
    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int  flour;
    int water;
    int makePizza();

};

#endif // ITALIANCHEF_H
