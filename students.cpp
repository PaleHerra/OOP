#include "students.h"
#include <iostream>
using namespace std;

Students::Students(string nimi,int ika)
{
    Name = nimi;
    Age = ika;
}

void Students::setAge(int ika)
{

    Age = ika;
}


void Students::setName(string nimi)
{


    Name = nimi;
}


string Students::getName()
{
    return (Name);
}

int Students::getAge()
{
    return (Age);

}



void Students::printStudentInfo()
{

    cout << "Name: " << Name << " Age: " << Age << endl;
}




