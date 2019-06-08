#include <iostream>
#include <vector>
#include "Dado.h"
#include "Jugador.h"
//#include todos sus headers
using namespace std;

class Juego{
int turno;
int numJugadores;
Dado dado;
Tablero tablero;
vector<Jugador> jugadores;
vector<Casilla> casillas;
vector<Ficha> fichas;

public:
Juego(){}
void siguiente_turno();
void adicionar_jugador();
void validar_fin_juego();
void validar_salida_ficha();
void validar_captura_ficha();
void finalizar_juego();
};
