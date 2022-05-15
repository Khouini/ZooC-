#ifndef ZOO_H
#define ZOO_H
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Animal.h"
#include "Lion.h"
#include "Veterinaire.h"
class Zoo
{
    public:
        Zoo();
        Zoo(string);
        virtual ~Zoo();
        Zoo(const Zoo&);
        Zoo& operator=(const Zoo&);
        void afficher();
        vector<Animal*>::iterator chercherAnimal(int);
        bool ajouter(Animal &A);
        bool ajouter(Lion &L);
        bool ajouter(Veterinaire &V);
    protected:

    private:
        string adresse;
        vector <Animal*> tabAnimaux;
        vector <Veterinaire> tabVeterinaire;
};

#endif // ZOO_H
