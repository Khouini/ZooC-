#ifndef VETERINAIRE_H
#define VETERINAIRE_H
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Veterinaire
{
    public:
        Veterinaire();
        Veterinaire(int, string, string);
        virtual ~Veterinaire();
        void afficher();
    protected:

    private:
        int id;
        string nom, prenom;
        vector <string> tabMatAnimauxVet;
};

#endif // VETERINAIRE_H
