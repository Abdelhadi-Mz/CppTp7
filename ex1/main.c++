#include "contact.h"

int main() {
    Contact c1("yassine");
    Contact c2("speed", "0612345678");
    Contact c3("Kai", "0711223344", "charlie@mail.com");

    cout << "Carnet d'adresses :" << endl;

    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}
