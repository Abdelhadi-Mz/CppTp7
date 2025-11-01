#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    double solde;
    string codeSecurite;

public:

    CompteBancaire();
    CompteBancaire(double soldeInitial);
    CompteBancaire(double soldeInitial, string code);

    void afficherSolde() const;
    void retrait(double montant);
    void retrait(double montant, string code);
};

#endif
