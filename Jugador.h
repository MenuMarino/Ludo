#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"
#include "Dado.h"

class Jugador {
    string nombre;
    int color;
    Ficha* ficha;
    sf::CircleShape jugador;
public:
    Jugador() = default;
    Jugador(const string& nombre, int color, Ficha* ficha, double initial_x_pos, double initial_y_pos): nombre{nombre}, color{color}, ficha{ficha} {
        jugador.setRadius(20);
        jugador.setPosition(sf::Vector2f(initial_x_pos, initial_y_pos));
        jugador.setOutlineThickness(4);
        jugador.setOutlineColor(sf::Color::Black);

        switch (color) {
            case 1:
                jugador.setFillColor(sf::Color::Red);
                break;
            case 2:
                jugador.setFillColor(sf::Color::Blue);
                break;
            case 3:
                jugador.setFillColor(sf::Color::Green);
                break;
            case 4:
                jugador.setFillColor(sf::Color::Yellow);
                break;
            default:
                break;
        }

    };

    sf::CircleShape get_jugador() { return jugador; }

    void jugar(Ficha* _ficha, Dado dado);
};


#endif
