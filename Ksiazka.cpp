// Ksiazka.cpp
#include <iostream>
#include "Ksiazka.h"

Ksiazka::Ksiazka() {}

Ksiazka::Ksiazka(std::string autor, std::string tytul, int id, bool dostepnosc) 
    : Autor(autor), Tytul(tytul), Dostepnosc(dostepnosc) {
    NrID = new ElementBiblioteczny(id); // Create a new ElementBiblioteczny object and store its pointer
}

bool Ksiazka::CzyDostepna() {
    return Dostepnosc;
}

void Ksiazka::WypiszDane() {
    std::cout << "Autor: " << Autor << std::endl;
    std::cout << "Tytul: " << Tytul << std::endl;
    NrID->WypiszDane(); // Access the object through the pointer
    std::cout << "Dostepnosc: " << (Dostepnosc ? "Dostepna" : "Niedostepna") << std::endl;
}
