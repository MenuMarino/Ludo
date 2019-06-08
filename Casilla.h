#ifndef LUDO_CASILLA_H
#define LUDO_CASILLA_H

#include <iostream>

class Casilla {
    int x; // posicion en x
    int y; // posicion en y
    int color; // 1 rojo, 2 azul, 3 verde, 4 amarillo o 0 blanco
    bool es_casa;
    bool es_normal;
    bool es_zona_segura;
    bool es_destino_final;
public:
    Casilla(int x, int y, int color, bool es_casa, bool es_normal, bool es_zona_segura, bool es_destino_final): x{x}, y{y}, color{color} {
        this->es_casa = es_casa;
        this->es_normal = es_normal;
        this->es_zona_segura = es_zona_segura;
        this->es_destino_final = es_destino_final;
    }

    virtual void mostrar() = 0;

    virtual int get_x() { return x; }
    virtual int get_y() { return y; }
    virtual int get_color() { return color; }
    virtual bool get_es_casa() { return es_casa; }
    virtual bool get_es_normal() { return es_normal; }
    virtual bool get_es_zona_segura() { return es_zona_segura; }
    virtual bool get_es_destino_final() { return es_destino_final; }

    virtual void set_color(int new_color) { this->color = new_color; }
};


#endif //LUDO_CASILLA_H
