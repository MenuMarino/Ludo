//
// Created by Gabriel Spranger Rojas on 2019-06-08.
//

#include "Ficha.h"

Ficha::Ficha(double x, double y, int color) {
    this->x = x;
    this->y = y;
    this->color = color;
    this->estado = 'C'; // cada ficha empieza en casa

    ficha_sprite.setOutlineThickness(4);
    ficha_sprite.setOutlineColor(sf::Color::Black);
    ficha_sprite.setRadius(FICHA_RADIUS);

    switch (color) {
        case 1:
            ficha_sprite.setFillColor(sf::Color::Red);
            break;
        case 2:
            ficha_sprite.setFillColor(sf::Color::Blue);
            break;
        case 3:
            ficha_sprite.setFillColor(sf::Color::Green);
            break;
        case 4:
            ficha_sprite.setFillColor(sf::Color::Yellow);
            break;
        default:
            break;
    }

    ficha_sprite.setPosition(x, y);
}

void Ficha::move_to(double x, double y) {
    ficha_sprite.setPosition(x, y);
}

void Ficha::mover(Casilla* casilla, char tipo_de_casilla) {

}


