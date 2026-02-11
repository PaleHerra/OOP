#include <iostream>
#include "students.h"
#include <vector>
#include <algorithm>
using namespace std;


int main ()
{
    int selection =0;
    string nimi;
    int ika;
    vector<Students>studentList;
    vector<Students>::iterator it = studentList.begin();

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;



        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "Valinta 0" << endl;

            cout << "Kerro uuden opiskelijan nimi ja ika" << endl;
            cin >> nimi;
            cin >> ika;


            studentList.emplace_back(nimi,ika);

            cout << "lisattiin: " << nimi << ", " << ika << endl;
            break;

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Valinta 1" << endl;
            cout << "Tulostetaan lista" << endl;

            for(auto &s: studentList)
            {
                s.printStudentInfo();
            }

            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 2" << endl;
            cout << "Jarjestetaan aakkosjarjestyjseen" << endl;

            sort(studentList.begin(), studentList.end(), [](Students &a, Students &b ){

                return a.getName() < b.getName();

            });
            for(auto &s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 3" << endl;

            sort(studentList.begin(), studentList.end(), [](Students &a, Students &b ){

                return a.getAge() < b.getAge();

            });

            for(auto &s: studentList)
            {
                s.printStudentInfo();
            }
            break;


        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Valinta 4" << endl;
            cout << "Kerro uuden opiskelijan nimi" << endl;
            cin >> nimi;
            it = find_if(studentList.begin(), studentList.end(), [nimi](Students &a){


                    return a.getName() == nimi;



            });

            if(it != studentList.end()){
            it->printStudentInfo();
            }

            else{
                cout << nimi << "ei ollut listassa!" << endl;
            }
            break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
    }
}while(selection < 5);

return 0;
}
