#include "Zoo.h"

Zoo::Zoo()
{
    //ctor
}
Zoo::Zoo(string adresse)
{
    this->adresse=adresse;
}
Zoo::~Zoo()
{
    for(vector<Animal*>::iterator it=tabAnimaux.begin(); it!=tabAnimaux.end(); it++)
        delete(*it);
}
Zoo::Zoo(const Zoo& zo)
{
    tabVeterinaire=zo.tabVeterinaire;
    Animal *p;

    vector< Animal*>::const_iterator i;
    for(i=zo.tabAnimaux.begin(); i!=zo.tabAnimaux.end(); i++)
    {
        if(typeid(**i)==typeid( Animal))
        {
            p=new  Animal (**i);
        }
        else
        {
            p=new Lion (static_cast<const Lion&>(**i));
        }

        tabAnimaux.push_back(p);

    }
}
Zoo& Zoo::operator=(const Zoo& zo)
{
    if(this!=&zo)
    {
        for(vector<Animal*>::iterator it=tabAnimaux.begin(); it!=tabAnimaux.end(); it++)
            delete(*it);
        tabAnimaux.clear();
        tabVeterinaire=zo.tabVeterinaire;
        Animal *p;

        vector< Animal*>::const_iterator i;
        for(i=zo.tabAnimaux.begin(); i!=zo.tabAnimaux.end(); i++)
        {
            if(typeid(**i)==typeid( Animal))
            {
                p=new  Animal (**i);
            }
            else
            {
                p=new Lion (static_cast<const Lion&>(**i));
            }

            tabAnimaux.push_back(p);

        }

    }
    return(*this);

}
void Zoo::afficher(){
    cout << "Adresse: " << adresse << endl;
    vector <Animal*>::const_iterator itA;
    vector <Veterinaire>::iterator itV;
    cout << "Liste des animaux" << endl;
    for (itA=tabAnimaux.begin();itA!=tabAnimaux.end();itA++){
        (*itA)->afficher();
    }
    cout << "La liste des veterinaire" << endl;
    for (itV=tabVeterinaire.begin();itV!=tabVeterinaire.end();itV++){
        itV->afficher();
    }
}
vector<Animal*>::iterator Zoo::chercherAnimal(int mat){
    vector <Animal*>::iterator itA;
    for (itA=tabAnimaux.begin();itA!=tabAnimaux.end();itA++){
        if((*itA)->getMatricule()==mat){
            return itA;
        }
    }
    return tabAnimaux.end();
}
bool Zoo::ajouter(Animal &A){
    if (chercherAnimal(A.getMatricule())==tabAnimaux.end()){
        Animal *p = new Animal(A);
        tabAnimaux.push_back(p);
        return true;
    }
    return false;
}
bool Zoo::ajouter(Lion &L){
    if (chercherAnimal(L.getMatricule())==tabAnimaux.end()){
        Animal *p = new Lion(L);
        tabAnimaux.push_back(p);
        return true;
    }
    return false;
}
bool Zoo::ajouter(Veterinaire &V){
    if (chercherAnimal(L.getMatricule())==tabAnimaux.end()){
        Animal *p = new Veterinaire(V);
        tabAnimaux.push_back(p);
        return true;
    }
    return false;
}

