#include "Lion.h"

Lion::Lion()
{
    //ctor
}
Lion::Lion(int matricule, string espece, float qntViande):Animal(matricule, espece){
    this->qntViande=qntViande;
}
Lion::~Lion()
{
    //dtor
}
Lion::afficher(){
    Animal::afficher();
    cout << "La quantite de viande: " << qntViande << endl;
    cout << "---------------------------" << endl;
}
