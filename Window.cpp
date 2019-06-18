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
//            else if (event.type == sf::Event::MouseButtonPressed) {
//                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//
//                sf::FloatRect bounds = dado.getGlobalBounds();
//
//                if (bounds.contains(clickCoordinate)) {
//                    cout << "Clicked on dado." << endl;
//
//
//                }
//            }
        }

        Dado dado;
        DadoResultado dado_resultado(200, 200);

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
        }

        Dado dado;
        DadoResultado dado_resultado(300, 300);

        window.clear();
        window.draw(sprite);
        window.draw(dado.get_dado());
        window.draw(dado_resultado.get_dado_resultado());
        window.draw(j1.get_jugador());
        window.draw(j2.get_jugador());
        window.draw(j3.get_jugador());
        // Update the window
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
        }

        Dado dado;
        DadoResultado dado_resultado(400, 400);

        window.clear();
        window.draw(sprite);
        window.draw(dado.get_dado());
        window.draw(dado_resultado.get_dado_resultado());
        window.draw(j1.get_jugador());
        window.draw(j2.get_jugador());
        window.draw(j3.get_jugador());
        window.draw(j4.get_jugador());
        // Update the window
        window.display();
    }
}



