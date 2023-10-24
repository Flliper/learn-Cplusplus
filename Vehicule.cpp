//
// Created by Antoine on 18/10/2023.
//

#include "Vehicule.h"
#include "iostream"

Vehicule::Vehicule(int prix, int annee)
        :m_prix(prix), m_anneeFabrication(annee)
{}

void Vehicule::affiche() const
{
    std::cout << "Ceci est un vehicule coutant " << m_prix << " euros." << std::endl;
}

Vehicule::~Vehicule() = default; // Quand on ne met rien dedans on peut mettre = default à la place des accolades


Voiture::Voiture(int prix, int portes, int annee)
        :Vehicule(prix, annee), m_portes(portes)
{}

void Voiture::affiche() const
{
    std::cout << "Ceci est une voiture avec " << m_portes << " portes, fabriqué en "
    << m_anneeFabrication << " et coutant " << m_prix << " euros." << std::endl;
}

Voiture::~Voiture() = default;

Moto::Moto(int prix, double vitesseMax, int annee)
        :Vehicule(prix, annee), m_vitesse(vitesseMax)
{}

void Moto::affiche() const
{
    std::cout << "Ceci est une moto allant a " << m_vitesse << " km/h, fabriqué en "
    << m_anneeFabrication << " et coutant " << m_prix << " euros." << std::endl;
}

Moto::~Moto() = default;


Camion::Camion(int prix, int poidsMax, int annee)
        :Vehicule(prix, annee), m_poidsMax(poidsMax)
{}

void Camion::affiche() const
{
    std::cout << "Ceci est un camion pouvant transporter " << m_poidsMax << " kg, fabriqué en"
    << m_anneeFabrication << " et coutant " << m_prix << " euros." << std::endl;
}

Camion::~Camion() = default;

