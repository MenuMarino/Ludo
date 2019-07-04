//
// Created by Gabriel Spranger Rojas on 2019-06-08.
//

#include "Ficha.h"
#include "Jugador.h"

Ficha::Ficha(double x, double y, int color) {
    current_casilla = nullptr;
    initial_x = x;
    initial_y = y;
    this->x = x;
    this->y = y;
    this->color = color;
    estado = 'C'; /// cada ficha empieza en casa

    ficha_sprite.setOutlineThickness(4);
    ficha_sprite.setOutlineColor(sf::Color::Black);
    ficha_sprite.setRadius(FICHA_RADIUS);

    switch (color) {
        case 1:
            ficha_sprite.setFillColor(sf::Color::Red);
            posicion_actual = 27; /// posicion inicial rojo
            break;
        case 2:
            ficha_sprite.setFillColor(sf::Color::Blue);
            posicion_actual = 40; /// posicion inicial azul
            break;
        case 3:
            ficha_sprite.setFillColor(sf::Color::Green);
            posicion_actual = 14; /// posicion inicial verde
            break;
        case 4:
            ficha_sprite.setFillColor(sf::Color::Yellow);
            posicion_actual = 1; /// posicion inicial amarillo
            break;
        default:
            break;
    }

    ficha_sprite.setPosition(x, y);
}

void Ficha::move_to_casa() {
    ficha_sprite.setPosition(initial_x, initial_y);
    x = initial_x;
    y = initial_y;
}

void Ficha::move_to(Casilla* casilla, int _posicion_actual) {
    if (casilla != nullptr) {
        posicion_actual += _posicion_actual;
        if (casilla->get_current_ficha() == nullptr) { /// no hay ficha en la casilla a la que me quiero mover
            x = casilla->get_x() - FICHA_RADIUS;
            y = casilla->get_y() - FICHA_RADIUS;

            ficha_sprite.setPosition(x, y);

            casilla->set_current_ficha(this);
            if (current_casilla == nullptr) {
                current_casilla = casilla;
            } else {
                current_casilla->set_current_ficha(nullptr);
                current_casilla = casilla;
            }
        } else { /// ya hay una ficha en la casilla
            if (casilla->get_current_ficha()->get_color() != this->get_color()) { /// las fichas son del mismo color?
                casilla->get_current_ficha()->move_to_casa(); /// esta ficha se come a la que ya estaba en la casilla
                casilla->get_current_ficha()->set_estado('C'); /// porque mandas a la ficha a su casa
                x = casilla->get_x() - FICHA_RADIUS;
                y = casilla->get_y() - FICHA_RADIUS;

                ficha_sprite.setPosition(x, y);

                casilla->set_current_ficha(this);
                if (current_casilla == nullptr) {
                    current_casilla = casilla;
                } else {
                    current_casilla->set_current_ficha(nullptr);
                    current_casilla = casilla;
                }
            }
        }
    }
}


