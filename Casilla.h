#ifndef LUDO_CASILLA_H
#define LUDO_CASILLA_H

#include <iostream>

using namespace std;

class Casilla {
protected:
    double x; // posicion en x
    double y; // posicion en y
    int color; // 1 rojo 2 azul 3 verde 4 amarillo
public:
    bool is_taken = false;

    Casilla() {}
    Casilla(double x, double y, int color): x{x}, y{y}, color{color} {}

//    virtual void mostrar() = 0;

    virtual double get_x() { return x; }
    virtual double get_y() { return y; }
    virtual int get_color() { return color; }
    
};


#endif //LUDO_CASILLA_H
