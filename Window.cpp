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

void Window::openWindow(vector<Jugador*>& _jugadores, const int& num_jugadores) {
    this->jugadores = _jugadores;
            /// Logica del Movimiento (no descomentar)
//    int i = 2;
//    int j = 0;
//    bool in_safe_zone = false;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            // si se ha clickeado dentro de la imagen dado, lanzalo y dibuja el resultado
            // el resultado se guarda en la variable num_movimientos
            if (event.type == sf::Event::MouseButtonReleased) {
                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window)); // get click coordinates

                sf::FloatRect bounds = dado.get_dado().getGlobalBounds(); // get global bounds of the dado image

                if (bounds.contains(clickCoordinate)) { // check if click is within the global bounds of dado
                    num_movimientos = dado.lanzar();
                    dado_resultado.set_text(num_movimientos);
                }
            }
            /// Logica de Movimiento (no descomentar)
//            if (event.type == sf::Event::MouseButtonReleased) {
//                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//
//                sf::FloatRect bounds = j1->get_jugador().getGlobalBounds();
//
//                if (bounds.contains(clickCoordinate)) {
//                    double x, y;
//
//                    if (!in_safe_zone) {
//                        x = tablero.get_casilla_x_at(i);
//                        y = tablero.get_casilla_y_at(i);
//                        j1->move_to(x-JUGADOR_RADIUS, y-JUGADOR_RADIUS);
//                        ++i;
//                    } else {
//                        x = tablero.get_recta_final_amarillo_x_at(j);
//                        y = tablero.get_recta_final_amarillo_y_at(j);
//
//                        if (x == ultima_casilla_segura_para_amarillo_x && y == ultima_casilla_segura_para_amarillo_y) { // amarillo ganó
//                            window.close();
//                        }
//                        j1->move_to(x-JUGADOR_RADIUS, y-JUGADOR_RADIUS);
//                        ++j;
//                    }
//                    if (x == ultima_casilla_normal_para_amarillo_x && y == ultima_casilla_normal_para_amarillo_y) {
//                        x = tablero.get_casilla_x_at(tablero.get_casilla_size()-1);
//                        y = tablero.get_casilla_y_at(tablero.get_casilla_size()-1);
//                        j1->move_to(x-JUGADOR_RADIUS, y-JUGADOR_RADIUS);
//                        in_safe_zone = true;
//                    }
//                }
//            }
        }

        dado_resultado.set_position(GREEN_CORNER_X, GREEN_CORNER_Y);

        window.clear();

        window.draw(sprite);
        window.draw(dado.get_dado());
        window.draw(dado_resultado.get_dado_resultado());
        // por cada jugador y por cada ficha que tenga ese jugador, dibujala
        for (int i = 0; i < num_jugadores; ++i) {
            Jugador* jugador = jugadores[i];
            for (int j = 0; j < jugador->get_num_fichas(); ++j) {
                window.draw(jugador->get_ficha_sprite_at(j));
            }
        }

        window.display();
    }
}




