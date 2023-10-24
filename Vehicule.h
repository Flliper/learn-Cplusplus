//
// Created by Antoine on 18/10/2023.
//

#ifndef LEARNC__PROJECT_VEHICULE_H
#define LEARNC__PROJECT_VEHICULE_H

class Vehicule
{
public:
    Vehicule(int prix, int anneeFabrication);           //Construit un véhicule d'un certain prix
    virtual void affiche() const;
    virtual ~Vehicule();          //Remarquez le 'virtual' ici

protected:
    int m_prix;
    int m_anneeFabrication;
};

class Voiture: public Vehicule
{
public:
    Voiture(int prix, int portes, int anneeFabrication);
    //Construit une voiture dont on fournit le prix et le nombre de portes
    virtual void affiche() const;
    virtual ~Voiture();

private:
    int m_portes;
};

class Moto : public Vehicule
{
public:
    Moto(int prix, double vitesseMax, int anneeFabrication);
    //Construit une moto d'un prix donné et ayant une certaine vitesse maximale
    virtual void affiche() const;
    virtual ~Moto();

private:
    double m_vitesse;
};

class Camion : public Vehicule
{
public:
    Camion(int prix, int poidsMax, int anneeFabrication);
    virtual ~Camion();

    virtual void affiche() const;

private:
    int m_poidsMax;
};


#endif //LEARNC__PROJECT_VEHICULE_H
