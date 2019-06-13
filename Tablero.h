#ifndef LUDO_TABLERO_H
#define LUDO_TABLERO_H

#include <vector>
#include "Casilla.h"
#include "CasillaNormal.h"

class Tablero {
    vector<Casilla*> casillas;
public:
    Tablero();
    void mostrar();
};


#endif