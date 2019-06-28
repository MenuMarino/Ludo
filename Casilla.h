#ifndef LUDO_CASILLA_H
#define LUDO_CASILLA_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace std;

class Casilla {
protected:
    double x; // posicion en x
    double y; // posicion en y
    int color; // 1 rojo 2 azul 3 verde 4 amarillo
    bool is_taken = false;
    bool is_casa;
    bool is_zona_segura;
    bool is_destino_final;
    bool is_ultima_casilla_normal;
    bool is_normal;
public:

    Casilla() {}
    Casilla(double x, double y, int color, bool is_normal,
            bool is_casa, bool is_zona_segura, bool is_destino_final,
            bool is_ultima_casilla_normal):
    x{x}, y{y}, color{color}, is_normal{is_normal}, is_casa{is_casa},
    is_zona_segura{is_zona_segura}, is_destino_final{is_destino_final},
    is_ultima_casilla_normal{is_ultima_casilla_normal} {}

    virtual double get_x() { return x; }
    virtual double get_y() { return y; }
    virtual int get_color() { return color; }

    bool get_is_taken() { return is_taken; }
    bool get_is_casa() { return is_casa; }
    bool get_is_zona_segura() { return is_zona_segura; }
    bool get_is_destino_final() { return is_destino_final; }
    bool get_is_ultima_casilla_normal() { return is_ultima_casilla_normal; }
    bool get_is_normal() { return is_normal; }

    void set_is_taken(bool _is_taken) { is_taken = _is_taken; }
    void set_is_casa(bool _is_casa) { is_casa = _is_casa; }
    void set_is_zona_segura(bool _is_zona_segura) { is_zona_segura = _is_zona_segura; }
    void set_is_destino_final(bool _is_destino_final) { is_destino_final = _is_destino_final; }
    void set_is_ultima_casilla_normal(bool _is_ultima_casilla_normal) { is_ultima_casilla_normal = _is_ultima_casilla_normal; }
    void set_is_normal(bool _is_normal) { is_normal = _is_normal; }
    
};


#endif //LUDO_CASILLA_H
