#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"
#include "Dado.h"

class Jugador {
    string nombre;
    int color;
    Ficha* ficha;
public:
    Jugador() = default;
    Jugador(const string& nombre, int color, Ficha* ficha): nombre{nombre}, color{color}, ficha{ficha} {};
    void jugar(Ficha* _ficha, Dado dado);
};


#endif
