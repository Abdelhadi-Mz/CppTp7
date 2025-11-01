#include "contact.h"

Contact::Contact(string n) : nom(n), telephone("Non defini"), email("Non defini") {}

Contact::Contact(string n, string t) : nom(n), telephone(t), email("Non defini") {}

Contact::Contact(string n, string t, string e) : nom(n), telephone(t), email(e) {}

void Contact::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Telephone : " << telephone << endl;
    cout << "Email : " << email << endl;
}
