//
// Created by Gabriel Spranger Rojas on 2019-06-08.
//

#include "Ficha.h"

Ficha::Ficha(int x, int y, char estado, int color) {
    this->x = x;
    this->y = y;
    this->color = color;

    if (toupper(estado) == 'C')
        this->estado = estado;
    else if (toupper(estado) == 'J')
        this->estado = estado;
    else if (toupper(estado) == 'S')
        this->estado = estado;
    else if (toupper(estado) == 'F')
        this->estado = estado;
    else
        std::cout << "Estado de ficha invalido." << std::endl;
}

void Ficha::mover(Casilla* casilla) {
    // si la casilla es blanca y no esta disponible, esa ficha se la a la base

    // si la casilla es zona segura, no pasa nada

    // si la casilla es destino final y tiene el mismo color de la ficha, entonces se puede mover
    // de lo contrario, no se puede mover. A parte, la distancia entre la ficha y la casilla casa
    // debe ser igual a lo que saco el dado
}