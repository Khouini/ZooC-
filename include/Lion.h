#ifndef LION_H
#define LION_H
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Animal.h"
class Lion : public Animal
{
    public:
        Lion();
        Lion(int, string, float);
        afficher();
        virtual ~Lion();

    protected:

    private:
        float qntViande;
};

#endif // LION_H
