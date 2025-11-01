#include "CompteBancaire.h"

int main() {
    CompteBancaire c1;
    CompteBancaire c2(1000);
    CompteBancaire c3(2000, "1234");

    c1.afficherSolde();
    c2.afficherSolde();
    c3.afficherSolde();

    c2.retrait(200);
    c3.retrait(500, "1234");
    c3.retrait(3000, "1234");
    c3.retrait(100, "9999");

    c2.afficherSolde();
    c3.afficherSolde();

    return 0;
}
