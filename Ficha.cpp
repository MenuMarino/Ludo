//
// Created by Gabriel Spranger Rojas on 2019-06-08.
//

#include "Ficha.h"

Ficha::Ficha(double x, double y, int color) {
    this->x = x;
    this->y = y;
    this->color = color;
    this->estado = 'C'; // cada ficha empieza en casa
}

void Ficha::mover(Casilla* casilla, char tipo_de_casilla) {

}
