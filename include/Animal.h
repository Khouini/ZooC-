#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;
#include <string>
#include <vector>
class Animal
{
    public:
        Animal();
        Animal(int, string);
        virtual ~Animal();
        void afficher();
        int getMatricule(){return matricule;}
    protected:
        int matricule;
        string espece;
        vector <string> tabVaccins;
    private:

};

#endif // ANIMAL_H
