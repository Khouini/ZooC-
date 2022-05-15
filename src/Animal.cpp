#include "Animal.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>
Animal::Animal()
{
    //ctor
}
Animal::Animal(int matricule, string espece)
{
    this->matricule=matricule;
    this->espece=espece;
}

Animal::~Animal()
{
    //dtor
}
void Animal::afficher(){
    cout << "Matricule: " << matricule << endl;
    cout << "Espece: " << espece << endl;
    for (int i=0;i<tabVaccins.size();i++){
        cout << "Vaccin n°" << i << " " << tabVaccins[i] << endl;
    }
    cout << "---------------------------" << endl;
}
