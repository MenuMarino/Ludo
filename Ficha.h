#ifndef LUDO_FICHA_H
#define LUDO_FICHA_H

#include "Casilla.h"

class Ficha {
    int color;
public:
    double x;
    double y;
    char estado;

    Ficha(double x, double y, int color);
    void mover(Casilla* casilla, char tipo_de_casilla); // se necesita el tipo de casilla para hacerle un dynamic_cast al parametro 'Casilla'

    double get_x() { return x; }
    double get_y() { return y; }
    double get_color() { return color; }
    char get_estado() { return estado; }
};


#endif //LUDO_FICHA_H
