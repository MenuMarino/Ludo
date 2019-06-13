#include "Tablero.h"

Tablero::Tablero() {
    casillas.emplace_back(Casilla(490.5332, 1094.2657, 0));
    casillas.emplace_back(Casilla(490.5332, 1018.7991, 4)); // comienzo amarillo
    casillas.emplace_back(Casilla(490.5332, 943.3325, 0));
    casillas.emplace_back(Casilla(490.5332, 867.8659, 0));
    casillas.emplace_back(Casilla(490.5332, 792.3993, 0));
    casillas.emplace_back(Casilla(490.5332, 716.9327, 0)); // diagonal

    casillas.emplace_back(Casilla(415.0666, 641.4665, 0));
    casillas.emplace_back(Casilla(339.5999, 641.4665, 0));
    casillas.emplace_back(Casilla(264.1333, 641.4665, 0));
    casillas.emplace_back(Casilla(188.6666, 641.4665, 0));
    casillas.emplace_back(Casilla(113.1999, 641.4665, 0));
    casillas.emplace_back(Casilla(37.73333, 641.4665, 0)); // esquina

    casillas.emplace_back(Casilla(37.73333, 565.9998, 0));
    casillas.emplace_back(Casilla(37.73333, 490.5332, 0)); // esquina

    casillas.emplace_back(Casilla(113.1999, 490.5332, 3)); // comienzo verde
}

void Tablero::mostrar() {

}


