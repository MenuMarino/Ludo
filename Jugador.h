#ifndef LUDO_POO2_JUGADOR_H
#define LUDO_POO2_JUGADOR_H

#include <string>

using namespace std;

class Jugador {
    string nombre;
    int color;
public:
    void jugar(Ficha, int);
    Ficha* seleccionarFichaEnJuego();
};


#endif