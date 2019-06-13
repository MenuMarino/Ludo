#include <iostream>
#include <vector>

#include "Dado.h"
#include "Jugador.h"
#include "Ficha.h"
#include "Tablero.h"

using namespace std;

class Juego {
    int turno;
    int numero_jugadores;
    Dado dado;
    Tablero tablero;
    vector<Jugador*> jugadores;

public:
    Juego() {}
    void siguiente_turno();
    void adicionar_jugador();
    void validar_fin_juego();
    void validar_salida_ficha();
    void validar_captura_ficha();
    void finalizar_juego();
};
