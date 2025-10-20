//
// Created by Łukasz Bobiński on 20/10/2025.
//

#ifndef CPPLEARN_OSOBA_H
#define CPPLEARN_OSOBA_H
#include <string>
using namespace std;

class Osoba {
private:
    string imie;
    int wiek;
public:
    Osoba(string imie,int wiek);    // konstruktor
    ~Osoba();                       // destruktor
    void przedstawSie();

    int getWiek() const;

    string getImie() const;

};


#endif //CPPLEARN_OSOBA_H