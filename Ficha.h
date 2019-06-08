#ifndef LUDO_FICHA_H
#define LUDO_FICHA_H

#include "Casilla.h"

class Ficha {
    int x;
    int y;
    char estado;
    int color;
public:
    explicit Ficha(int x, int y, char estado, int color);
    void mover(Casilla* casilla);

    int get_x() { return x; }
    int get_y() { return y; }
    int get_color() { return color; }
    char get_estado() { return estado; }
};


#endif //LUDO_FICHA_H
