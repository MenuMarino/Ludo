#ifndef LUDO_FICHA_H
#define LUDO_FICHA_H

#include "Casilla.h"

const int FICHA_RADIUS = 20;

class Jugador;

class Ficha {
    Casilla* current_casilla;
    double initial_x;
    double initial_y;
    int color;
    double x;
    double y;
    char estado;
    sf::CircleShape ficha_sprite;
    bool all_in_casa = true;
    int posicion_actual;

public:
    Ficha(double x, double y, int color);

    double get_initial_x() { return initial_x; }
    double get_initial_y() { return initial_y; }

    double get_x() { return x; }
    double get_y() { return y; }

    int get_posicion_actual() { return posicion_actual; }

    double get_color() { return color; }

    char get_estado() { return estado; }
    void set_estado(char _estado) { estado = _estado; }

    void move_to(Casilla* casilla, int _posicion_actual);
    void move_to_casa();

    sf::CircleShape get_ficha_sprite() { return ficha_sprite; }
};



#endif //LUDO_FICHA_H
