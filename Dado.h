#ifndef LUDO_DADO_H
#define LUDO_DADO_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Dado {

    sf::Sprite dado;
    sf::Texture dadoTexture;

    Dado() {
        dadoTexture.loadFromFile("/Users/benjamindiaz/CLionProjects/Ludo/Images/dice.png");
        dadoTexture.create(128, 128);
        dado.setTexture(dadoTexture);
        dado.setPosition(502, 502);
    }

    sf::Sprite get_dado() { return dado; }

    int lanzar() {
        return  (rand() % 6)+1;
    }
};

#endif

