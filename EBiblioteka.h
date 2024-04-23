// EBiblioteka.h
#ifndef EBIBLIOTEKA_H
#define EBIBLIOTEKA_H

class ElementBiblioteczny {
private:
    int nrID;

public:
    ElementBiblioteczny(int id);
    int GetNrID();
    void SetNrID(int id);
    void WypiszDane();
};

#endif
