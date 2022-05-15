#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Animal.h"
#include "Lion.h"
#include "Zoo.h"
#include "Veterinaire.h"
int main()
{
    Zoo Z("Bardo");
    Animal A1(1, "Oiseaux");
    Lion L1(2, "Lion", 4.5);
    Veterinaire V1(2, "Yacine", "Khouini");
    Z.ajouter(A1);
    Z.ajouter(L1);
    Z.ajouter(V1);
    Z.afficher();
    return 0;
}
