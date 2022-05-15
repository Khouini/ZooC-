#include "Veterinaire.h"

Veterinaire::Veterinaire()
{
    //ctor
}

Veterinaire::~Veterinaire()
{
    //dtor
}
Veterinaire::Veterinaire(int id, string nom, string prenom){
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
}
void Veterinaire::afficher(){
    cout << "ID: " << id << endl;
    cout << "Nom: " << nom << endl;
    cout << "Prenom: " << prenom << endl;
    for (int i=0;i<tabMatAnimauxVet.size();i++){
        cout << "Matricule animal n°" << i << " " << tabMatAnimauxVet[i] << endl;
    }
}
