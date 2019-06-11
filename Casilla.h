#ifndef LUDO_CASILLA_H
#define LUDO_CASILLA_H

#include <iostream>

class Casilla {
    int x; // posicion en x
    int y; // posicion en y
    int color; // 1 rojo, 2 azul, 3 verde, 4 amarillo o 0 blanco

public:
    Casilla(int x, int y, int color): x{x}, y{y}, color{color} {}

    virtual void mostrar() = 0;

    virtual int get_x() { return x; }
    virtual int get_y() { return y; }
    virtual int get_color() { return color; }
    
};


#endif //LUDO_CASILLA_H
