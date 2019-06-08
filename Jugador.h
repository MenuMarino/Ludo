#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"
#include <iostream>
#include <string>

using namespace std;

class Jugador {
    string nombre;
    int color;
public:
    Jugador(): nombre{"Jugador"}, color{0} {};
    Jugador(string nombre, int color): nombre{nombre}, color{color} {};
    void jugar(Ficha, int);
    Ficha* seleccionarFichaEnJuego();
};


#endif