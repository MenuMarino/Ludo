//
// Created by Gabriel Spranger Rojas on 2019-06-18.
//

#ifndef LUDO_DADORESULTADO_H
#define LUDO_DADORESULTADO_H

#include <SFML/Graphics.hpp>
#include "Dado.h"

class DadoResultado {

    sf::Font font;
    sf::Text text;

public:
    DadoResultado(double x, double y) {
        font.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/font.ttf");
        Dado dado;
        text.setFont(font);
        text.setString("6"); // text.setString(to_string(dado.lanzar()));
        text.setCharacterSize(30); // in pixels, not points!
        text.setFillColor(sf::Color::Black);
        text.setStyle(sf::Text::Bold);
        text.setPosition(x, y);
    }

    sf::Text get_dado_resultado() { return text; }

};


#endif //LUDO_DADORESULTADO_H
