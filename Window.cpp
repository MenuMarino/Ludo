//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include "Window.h"

Window::Window(const std::string& WindowName) {
    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WindowName);
    texture.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Images/ludo-board.png");
    texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
    sprite.setTexture(texture);
}

void Window::openWindow(Jugador j1, Jugador j2) {
    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window)); // get click coordinates

                sf::FloatRect bounds = dado.get_dado().getGlobalBounds(); // get global bounds of the dado image

                if (bounds.contains(clickCoordinate)) { // check if click is within the global bounds of dado
                    dado_resultado.set_text(dado.lanzar());
                }
            }
        }

        dado_resultado.set_position(YELLOW_CORNER_X, YELLOW_CORNER_Y);

        window.clear();

        window.draw(sprite);
        window.draw(dado.get_dado());
        window.draw(dado_resultado.get_dado_resultado());
        window.draw(j1.get_jugador());
        window.draw(j2.get_jugador());

        window.display();
    }
}

void Window::openWindow(Jugador j1, Jugador j2, Jugador j3) {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window)); // get click coordinates

                sf::FloatRect bounds = dado.get_dado().getGlobalBounds(); // get global bounds of the dado image

                if (bounds.contains(clickCoordinate)) { // check if click is within the global bounds of dado
                    dado_resultado.set_text(dado.lanzar());
                }
            }
        }

        dado_resultado.set_position(GREEN_CORNER_X, GREEN_CORNER_Y);

        window.clear();

        window.draw(sprite);
        window.draw(dado.get_dado());
        window.draw(dado_resultado.get_dado_resultado());
        window.draw(j1.get_jugador());
        window.draw(j2.get_jugador());
        window.draw(j3.get_jugador());

        window.display();
    }
}

void Window::openWindow(Jugador j1, Jugador j2, Jugador j3,
                        Jugador j4) {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window)); // get click coordinates

                sf::FloatRect bounds = dado.get_dado().getGlobalBounds(); // get global bounds of the dado image

                if (bounds.contains(clickCoordinate)) { // check if click is within the global bounds of dado
                    dado_resultado.set_text(dado.lanzar());
                }
            }
        }

        dado_resultado.set_position(RED_CORNER_X, RED_CORNER_Y);

        window.clear();

        window.draw(sprite);
        window.draw(dado.get_dado());
        window.draw(dado_resultado.get_dado_resultado());
        window.draw(j1.get_jugador());
        window.draw(j2.get_jugador());
        window.draw(j3.get_jugador());
        window.draw(j4.get_jugador());

        window.display();
    }
}



