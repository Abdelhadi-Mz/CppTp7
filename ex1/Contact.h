#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n);

    Contact(string n, string t);

    Contact(string n, string t, string e);

    void afficher() const;
};

#endif
