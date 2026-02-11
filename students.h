#ifndef STUDENTS_H
#define STUDENTS_H
#include <iostream>
using namespace std;



class Students
{
public:
    Students(string,int);
    void setAge(int);
    void setName(string);
    string getName();

    int getAge();
    void printStudentInfo();

private:

    string Name;
    int Age;
};

#endif // STUDENTS_H
