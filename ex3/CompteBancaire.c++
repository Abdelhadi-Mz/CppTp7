#include "CompteBancaire.h"

CompteBancaire::CompteBancaire() {
    solde = 0.0;
    codeSecurite = "0000";
}

CompteBancaire::CompteBancaire(double soldeInitial) {
    solde = soldeInitial;
    codeSecurite = "0000";
}

CompteBancaire::CompteBancaire(double soldeInitial, string code) {
    solde = soldeInitial;
    codeSecurite = code;
}

void CompteBancaire::afficherSolde() const {
    cout << "Solde actuel : " << solde << " DH" << endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Retrait de " << montant << " DH effectue." << endl;
    } else {
        cout << "Solde insuffisant !" << endl;
    }
}

void CompteBancaire::retrait(double montant, string code) {
    if (code != codeSecurite) {
        cout << "Code de securite incorrect !" << endl;
        return;
    }
    if (montant <= solde) {
        solde -= montant;
        cout << "Retrait securise de " << montant << " DH effectue." << endl;
    } else {
        cout << "Solde insuffisant !" << endl;
    }
}
