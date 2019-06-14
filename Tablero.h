#ifndef LUDO_TABLERO_H
#define LUDO_TABLERO_H

#include <vector>
#include "Casilla.h"
#include "CasillaNormal.h"

class Tablero {
    vector<Casilla*> casillas;

    vector<Casilla*> recta_final_amarillo;
    vector<Casilla*> recta_final_verde;
    vector<Casilla*> recta_final_rojo;
    vector<Casilla*> recta_final_azul;

    vector<Casilla*> casas_amarillas;
    vector<Casilla*> casas_verdes;
    vector<Casilla*> casas_rojos;
    vector<Casilla*> casas_azules;
public:
    Tablero();
    void mostrar();
    ~Tablero();
};


#endif