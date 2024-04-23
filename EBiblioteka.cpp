// EBiblioteka.cpp
#include <iostream>
#include "EBiblioteka.h"

ElementBiblioteczny::ElementBiblioteczny(int id) {
    nrID = id;
}

int ElementBiblioteczny::GetNrID() {
    return nrID;
}

void ElementBiblioteczny::SetNrID(int id) {
    nrID = id;
}

void ElementBiblioteczny::WypiszDane() {
    std::cout << "Nr ID: " << nrID << std::endl;
}
