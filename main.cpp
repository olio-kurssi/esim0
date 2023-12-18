#include <iostream>

using namespace std;

int main()
{
    //tietueen luominen
    typedef struct Person_struct{
        int age;
        string name;
    }
    person;

    //tietuemuuttujan luominen ja sen käyttö
    person pe;
    pe.age=23;
    pe.name="Teppo Testi";
    cout<<"Terve "<<pe.name<<" olet siis "<<pe.age<<" vuotias"<<endl;
}
