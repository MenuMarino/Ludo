//
// Created by Gabriel Spranger Rojas on 2019-06-08.
//

#ifndef LUDO_CASILLA_H
#define LUDO_CASILLA_H

#include <iostream>

class Casilla {
    int x; // posicion en x
    int y; // posicion en y
    int color; // rojo, azul, verde, amarillo o blanco
    bool disponible = true;
public:
    Casilla(int x, int y, int color): x{x}, y{y}, color{color} {}

    virtual void mostrar() = 0;

    virtual int get_x() { return x; }
    virtual int get_y() { return y; }
    virtual int get_color() { return color; }
    virtual bool get_disponibilidad() { return disponible; }

    virtual void set_color(int new_color) { this->color = new_color; }
    virtual void set_disponibilidad(bool disponibilidad) { this->disponible = disponibilidad; }
};


#endif //LUDO_CASILLA_H