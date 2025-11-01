#include "facture.h"

int main() {
    Facture f;

    f.ajouterArticle("Stylo", 2.5);
    f.ajouterArticle("Cahier", 3.0, 4);
    f.ajouterArticle("Clé USB", 10.0, 2, 20.0);

    f.afficherTotal();
    return 0;
}
