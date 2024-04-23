// Ksiazka.h
#ifndef KSIAZKA_H
#define KSIAZKA_H
#include "EBiblioteka.h"

class Ksiazka {
private:
    std::string Autor;
    std::string Tytul;
    ElementBiblioteczny* NrID; 
    bool Dostepnosc;

    bool CzyDostepna();

public:
    Ksiazka();
    Ksiazka(std::string autor, std::string tytul, int id, bool dostepnosc);
    void WypiszDane();
};

#endif
