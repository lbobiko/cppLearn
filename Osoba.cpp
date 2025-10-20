#include "Osoba.h"
#include <iostream>

using namespace std;

Osoba::Osoba(string imie, int wiek)
    : imie(imie), wiek(wiek) {

}

Osoba::~Osoba() {
    cout << "Obiekt " << imie << " usuniety." << endl;
}

void Osoba::przedstawSie() {
    cout << "Nazywam sie " << imie << " i mam " << wiek << " lat." << endl;
}

int Osoba::getWiek() const {
    return wiek;
}

string Osoba::getImie() const {
    return imie;
}