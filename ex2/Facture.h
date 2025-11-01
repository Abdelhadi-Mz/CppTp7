#ifndef FACTURE_H
#define FACTURE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Facture {
private:
    struct Article {
        string nom;
        float prix;
        int quantite;
        float tva;
    };

    vector<Article> articles;

public:
    void ajouterArticle(string nom, float prix);
    void ajouterArticle(string nom, float prix, int quantite);
    void ajouterArticle(string nom, float prix, int quantite, float tva);
    void afficherTotal();
};

#endif

