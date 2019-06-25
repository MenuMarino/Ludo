//
// Created by Gabriel Spranger Rojas on 2019-06-18.
//

#ifndef LUDO_DADORESULTADO_H
#define LUDO_DADORESULTADO_H

#include <SFML/Graphics.hpp>
#include "Dado.h"

const int TEXT_SIZE = 25;

class DadoResultado {

    sf::Font font;
    sf::Text text;

public:
    DadoResultado() {
        font.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/font.ttf");
        text.setFont(font);
        text.setCharacterSize(TEXT_SIZE);
        text.setFillColor(sf::Color::Black);
        text.setStyle(sf::Text::Bold);
        text.setPosition(0, 0);
    }
    DadoResultado(double x, double y) {
        font.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/font.ttf");
        text.setFont(font);
        text.setCharacterSize(TEXT_SIZE);
        text.setFillColor(sf::Color::Black);
        text.setStyle(sf::Text::Bold);
        text.setPosition(x, y);
    }

    sf::Text get_dado_resultado() { return text; }
    void set_position(double new_x, double new_y) { text.setPosition(new_x, new_y); }
    void set_text(int dado_resultado) { text.setString(to_string(dado_resultado)); }

};


#endif //LUDO_DADORESULTADO_H
