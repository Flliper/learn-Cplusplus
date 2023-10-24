#include <iostream>
#include <string>

using namespace std;

#include "Personnage.h"
#include "Arme.h"
#include "Duree.h"
#include "Magicien.h"
#include "Vehicule.h"

#include "vector"

int main()
{
    vector<Vehicule*> listeVehicules;

    listeVehicules.push_back(new Voiture(15000, 5, 2015));
    listeVehicules.push_back(new Voiture(12000, 3, 2005));
    listeVehicules.push_back(new Moto(2000, 212.5, 2008));

    listeVehicules[0]->affiche();
    //On affiche les informations de la première voiture

    listeVehicules[2]->affiche();
    //Et celles de la moto

    for(int i(0); i<listeVehicules.size(); ++i)
    {
        delete listeVehicules[i];  //On libère la i-ème case mémoire allouée
        listeVehicules[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
    }

    return 0;
}







//int main()
//{
//    //Création des personnages
//    Personnage david, goliath("Epee aiguisee", 20);
//
//    //Au combat !
//    goliath.attaquer(david);
//    david.boirePotionDeVie(20);
//    goliath.attaquer(david);
//    david.attaquer(goliath);
//    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
//    goliath.attaquer(david);
//
//    //Temps mort ! Voyons voir la vie de chacun…
//    cout << "David" << endl;
//    david.afficherEtat();
//    cout << endl << "Goliath" << endl;
//    goliath.afficherEtat();
//
//    return 0;
//}