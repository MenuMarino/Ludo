//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include "Window.h"

Window::Window(const std::string& WindowName) {
    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WindowName);
    texture.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Images/ludo-board.png");
    texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
    sprite.setTexture(texture);

    turno_text_font.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/Arial/Arial.ttf");
    turno_text.setFont(turno_text_font);
    turno_text.setCharacterSize(25);
    turno_text.setFillColor(sf::Color::Black);
    turno_text.setStyle(sf::Text::Bold);
    turno_text.setString("Es tu turno!");
    turno_text.setPosition(0, 0);
}

void Window::updateWindow(const sf::Sprite& background, const sf::Text& dado_result, const sf::Text& turno, const vector<Jugador*>& jugadores, const int& num_jugadores) {
    window.clear();
    window.draw(sprite);
    window.draw(dado.get_dado());
    window.draw(dado_resultado.get_dado_resultado());
    window.draw(turno_text);
    for (int i = 0; i < num_jugadores; ++i) {
        Jugador* jugador = jugadores[i];
        for (int j = 0; j < jugador->get_num_fichas(); ++j) {
            window.draw(jugador->get_ficha_sprite_at(j));
        }
    }
    window.display();
}

void Window::openWindow(vector<Jugador*>& _jugadores, const int& num_jugadores) {
    this->jugadores = _jugadores;
    int turno = 0;
    bool in_safe_zone = false;
    while (window.isOpen()) {
        updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores);
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonReleased) {
                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window));

                sf::FloatRect bounds = dado.get_dado().getGlobalBounds();

                if (bounds.contains(clickCoordinate)) { /// clicked on dado
                    num_movimientos = dado.lanzar();
                    dado_resultado.set_text(num_movimientos);
                    updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores);
                    if (turno == 0) {
                        dado_resultado.set_position(jugadores[0]->get_corner_x(), jugadores[0]->get_corner_y());
                        if (num_movimientos == 6) {
                            jugadores[0]->move_ficha_from_casa();
                        }
                    } else if (turno == 1) {
                        dado_resultado.set_position(jugadores[1]->get_corner_x(), jugadores[1]->get_corner_y());

                        if (num_movimientos == 6) {
                            jugadores[1]->move_ficha_from_casa();
                        }
                    } else if (turno == 2) {
                        dado_resultado.set_position(jugadores[2]->get_corner_x(), jugadores[2]->get_corner_y());
                        if (num_movimientos == 6) {
                            jugadores[2]->move_ficha_from_casa();
                        }
                    } else if (turno == 3) {
                        dado_resultado.set_position(jugadores[3]->get_corner_x(), jugadores[3]->get_corner_y());
                        if (num_movimientos == 6) {
                            jugadores[3]->move_ficha_from_casa();
                        }
                        turno = -1;
                    }
                    updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores);
                    ++turno;
                }
            }

        }

        if (turno == 0) {
            turno_text.setPosition(jugadores[turno]->get_turno_text_x(), jugadores[turno]->get_turno_text_y());
        } else if (turno == 1) {
            turno_text.setPosition(jugadores[turno]->get_turno_text_x(), jugadores[turno]->get_turno_text_y());
        } else if (turno == 2) {
            turno_text.setPosition(jugadores[turno]->get_turno_text_x(), jugadores[turno]->get_turno_text_y());
        } else if (turno == 3) {
            turno_text.setPosition(jugadores[turno]->get_turno_text_x(), jugadores[turno]->get_turno_text_y());
        }

        updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores);
    } // end of while(window.isOpen())

}





/// Logica de Movimiento (no descomentar)
//            double x, y;
//            for (int k = 0; k < num_movimientos; ++k) {
//                if (!in_safe_zone) {
//                    x = tablero.get_casilla_x_at(i+k);
//                    y = tablero.get_casilla_y_at(i+k);
//                    j1->move_to(x - FICHA_RADIUS, y - FICHA_RADIUS);
//                    ++i;
//                } else {
//                    x = tablero.get_recta_final_amarillo_x_at(j);
//                    y = tablero.get_recta_final_amarillo_y_at(j);
//
//                    if (x == ultima_casilla_segura_para_amarillo_x &&
//                        y == ultima_casilla_segura_para_amarillo_y) { // amarillo ganó
//                        window.close();
//                    }
//                    j1->move_to(x - FICHA_RADIUS, y - FICHA_RADIUS);
//                    ++j;
//                }
//                if (x == ultima_casilla_normal_para_amarillo_x && y == ultima_casilla_normal_para_amarillo_y) {
//                    x = tablero.get_casilla_x_at(tablero.get_casilla_size() - 1);
//                    y = tablero.get_casilla_y_at(tablero.get_casilla_size() - 1);
//                    j1->move_to(x - FICHA_RADIUS, y - FICHA_RADIUS);
//                    in_safe_zone = true;
//                }
//            }

/// Texto y resultado de dado por turno
