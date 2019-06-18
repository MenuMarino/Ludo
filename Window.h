//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#ifndef LUDO_WINDOW_H
#define LUDO_WINDOW_H

#include <SFML/Graphics.hpp>
#include "Dado.h"
#include "DadoResultado.h"
#include "Jugador.h"

class Window {
    const int WINDOW_WIDTH = 1132;
    const int WINDOW_HEIGHT = 1132;
    sf::Texture texture;
    sf::Sprite sprite;

public:
    sf::RenderWindow window;

    Window() = default;
    explicit Window(const std::string& WindowName);
    ~Window() = default;
    void openWindow(Jugador j1, Jugador j2);
    void openWindow(Jugador j1, Jugador j2, Jugador j3);
    void openWindow(Jugador j1, Jugador j2, Jugador j3, Jugador j4);
};


#endif //LUDO_WINDOW_H
