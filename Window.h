//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#ifndef LUDO_WINDOW_H
#define LUDO_WINDOW_H

#include <SFML/Graphics.hpp>
#include "Dado.h"
#include "DadoResultado.h"
#include "Jugador.h"
#include "DadoResultado.h"

const int YELLOW_CORNER_X = 60;
const int YELLOW_CORNER_Y = 1040;

const int GREEN_CORNER_X = 60;
const int GREEN_CORNER_Y = 60;

const int RED_CORNER_X = 1060;
const int RED_CORNER_Y = 60;

const int BLUE_CORNER_X = 1060;
const int BLUE_CORNER_Y = 1040;

class Window {
    const int WINDOW_WIDTH = 1132;
    const int WINDOW_HEIGHT = 1132;
    sf::Texture texture;
    sf::Sprite sprite;

public:
    sf::RenderWindow window;
    Dado dado;
    DadoResultado dado_resultado;

    Window() = default;
    explicit Window(const std::string& WindowName);
    ~Window() = default;
    void openWindow(Jugador j1, Jugador j2);
    void openWindow(Jugador j1, Jugador j2, Jugador j3);
    void openWindow(Jugador j1, Jugador j2, Jugador j3, Jugador j4);
};


#endif //LUDO_WINDOW_H
