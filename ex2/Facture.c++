#include "facture.h"

void Facture::ajouterArticle(string nom, float prix) {
    Article a = {nom, prix, 1, 0};
    articles.push_back(a);
}

void Facture::ajouterArticle(string nom, float prix, int quantite) {
    Article a = {nom, prix, quantite, 0};
    articles.push_back(a);
}

void Facture::ajouterArticle(string nom, float prix, int quantite, float tva) {
    Article a = {nom, prix, quantite, tva};
    articles.push_back(a);
}

void Facture::afficherTotal() {
    float totalHT = 0, totalTTC = 0;

    cout << "\n    Facture    " << endl;
    for (int i = 0; i < articles.size(); i++) {
        Article a = articles[i];
        float prixHT = a.prix * a.quantite;
        float prixTTC = prixHT + (prixHT * a.tva / 100);
        cout << a.nom << " | Qte: " << a.quantite 
             << " | HT: " << prixHT << " | TTC: " << prixTTC << endl;
        totalHT += prixHT;
        totalTTC += prixTTC;
    }

    cout << "Total HT : " << totalHT << endl;
    cout << "Total TTC: " << totalTTC << endl;
}
