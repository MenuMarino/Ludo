#include "Jugador.h"

void Jugador::jugar(Ficha* _ficha, Dado dado) {
    for (int i = 1; i <= 3; ++i) {
        int movimientos = dado.lanzar();
        if (i == 3 && movimientos == 6) {
            return; // pierde turno
        }
        /// moverse
    }
}

