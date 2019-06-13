//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include "CasillaComienzo.h"

CasillaComienzo::CasillaComienzo(int color) {
    switch (color) {
        case 1: // rojo
            this->color = color;
            x = 0;
            y = 0;
            break;
        case 2: // azul
            this->color = color;
            x = 0;
            y = 0;
            break;
        case 3: // verde
            this->color = color;
            x = 0;
            y = 0;
            break;
        case 4: // amarillo
            this->color = color;
            x = 0;
            y = 0;
            break;
        default:
            cout << "Color de casilla comienzo inválido." << endl;
            break;
    }
}