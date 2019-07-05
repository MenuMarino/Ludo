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

//////////////////////////////////////////
////////////// 2 JUGADORES ///////////////
//////////////////////////////////////////
void Window::openWindow(Jugador *j1, Jugador *j2, int& num_jugadores) {

}

//////////////////////////////////////////
////////////// 3 JUGADORES ///////////////
//////////////////////////////////////////

void Window::openWindow(Jugador *j1, Jugador *j2, Jugador *j3, int& num_jugadores) {

}

//////////////////////////////////////////
////////////// 4 JUGADORES ///////////////
//////////////////////////////////////////

void Window::openWindow(Jugador *j1, Jugador *j2, Jugador *j3, Jugador *j4, int& num_jugadores) {
    this->jugadores = {j1, j2, j3, j4};

    // TODO que solo se pueda lanzar el dado 1 vez cuando se tiene al menos una ficha en juego

    // TODO mejorar el código (apariencia, meter la implementación el las clases y más comentarios)

    int fichas_metidas_amarillo = 0;
    int fichas_metidas_verde = 0;
    int fichas_metidas_rojo = 0;
    int fichas_metidas_azul = 0;

    bool amarillo_saco_6 = false;
    bool verde_saco_6 = false;
    bool rojo_saco_6 = false;
    bool azul_saco_6 = false;

    bool clicked_on_j1_f1 = false;
    bool clicked_on_j1_f2 = false;
    bool clicked_on_j1_f3 = false;
    bool clicked_on_j1_f4 = false;

    bool clicked_on_j2_f1 = false;
    bool clicked_on_j2_f2 = false;
    bool clicked_on_j2_f3 = false;
    bool clicked_on_j2_f4 = false;

    bool clicked_on_j3_f1 = false;
    bool clicked_on_j3_f2 = false;
    bool clicked_on_j3_f3 = false;
    bool clicked_on_j3_f4 = false;

    bool clicked_on_j4_f1 = false;
    bool clicked_on_j4_f2 = false;
    bool clicked_on_j4_f3 = false;
    bool clicked_on_j4_f4 = false;

    /// Fichas y Jugadores

    Jugador* jugador_amarillo = j1;
    Jugador* jugador_verde = j2;
    Jugador* jugador_rojo = j3;
    Jugador* jugador_azul = j4;

    Ficha* ficha1_amarilla = jugador_amarillo->get_ficha_at(0);
    Ficha* ficha2_amarilla = jugador_amarillo->get_ficha_at(1);
    Ficha* ficha3_amarilla = jugador_amarillo->get_ficha_at(2);
    Ficha* ficha4_amarilla = jugador_amarillo->get_ficha_at(3);

    Ficha* ficha1_verde = jugador_verde->get_ficha_at(0);
    Ficha* ficha2_verde = jugador_verde->get_ficha_at(1);
    Ficha* ficha3_verde = jugador_verde->get_ficha_at(2);
    Ficha* ficha4_verde = jugador_verde->get_ficha_at(3);

    Ficha* ficha1_roja = jugador_rojo->get_ficha_at(0);
    Ficha* ficha2_roja = jugador_rojo->get_ficha_at(1);
    Ficha* ficha3_roja = jugador_rojo->get_ficha_at(2);
    Ficha* ficha4_roja = jugador_rojo->get_ficha_at(3);

    Ficha* ficha1_azul = jugador_azul->get_ficha_at(0);
    Ficha* ficha2_azul = jugador_azul->get_ficha_at(1);
    Ficha* ficha3_azul = jugador_azul->get_ficha_at(2);
    Ficha* ficha4_azul = jugador_azul->get_ficha_at(3);

    while (window.isOpen()) {
        updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores);

        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            /// se hizo un click
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f anotherClickCoord = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                /// han clickeado en ficha de jugador 1?
                if (turno == 0) {
                    if (j1->get_f1_bounds().contains(anotherClickCoord)) {
                        clicked_on_j1_f1 = true;
                    }
                    if (j1->get_f2_bounds().contains(anotherClickCoord)) {
                        clicked_on_j1_f2 = true;
                    }
                    if (j1->get_f3_bounds().contains(anotherClickCoord)) {
                        clicked_on_j1_f3 = true;
                    }
                    if (j1->get_f4_bounds().contains(anotherClickCoord)) {
                        clicked_on_j1_f4 = true;
                    }
                }
                /// han clickeado en ficha de jugador 2?
                if (turno == 1) {
                    if (j2->get_f1_bounds().contains(anotherClickCoord)) {
                        clicked_on_j2_f1 = true;
                    }
                    if (j2->get_f2_bounds().contains(anotherClickCoord)) {
                        clicked_on_j2_f2 = true;
                    }
                    if (j2->get_f3_bounds().contains(anotherClickCoord)) {
                        clicked_on_j2_f3 = true;
                    }
                    if (j2->get_f4_bounds().contains(anotherClickCoord)) {
                        clicked_on_j2_f4 = true;
                    }
                }
                /// han clickeado en ficha de jugador 3?
                if (turno == 2) {
                    if (j3->get_f1_bounds().contains(anotherClickCoord)) {
                        clicked_on_j3_f1 = true;
                    }
                    if (j3->get_f2_bounds().contains(anotherClickCoord)) {
                        clicked_on_j3_f2 = true;
                    }
                    if (j3->get_f3_bounds().contains(anotherClickCoord)) {
                        clicked_on_j3_f3 = true;
                    }
                    if (j3->get_f4_bounds().contains(anotherClickCoord)) {
                        clicked_on_j3_f4 = true;
                    }
                }
                /// han clickeado en ficha de jugador 4?
                if (turno == 3) {
                    if (j4->get_f1_bounds().contains(anotherClickCoord)) {
                        clicked_on_j4_f1 = true;
                    }
                    if (j4->get_f2_bounds().contains(anotherClickCoord)) {
                        clicked_on_j4_f2 = true;
                    }
                    if (j4->get_f3_bounds().contains(anotherClickCoord)) {
                        clicked_on_j4_f3 = true;
                    }
                    if (j4->get_f4_bounds().contains(anotherClickCoord)) {
                        clicked_on_j4_f4 = true;
                    }
                }
            }

            short veces_dado_dio_6_amarillo = 0;
            short veces_dado_dio_6_verde = 0;
            short veces_dado_dio_6_rojo = 0;
            short veces_dado_dio_6_azul = 0;

            /// se hizo un click
            if (event.type == sf::Event::MouseButtonReleased) {
                sf::Vector2f clickCoordinate = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                sf::FloatRect bounds = dado.get_dado().getGlobalBounds();

                /// se hizo click en el dado
                if (bounds.contains(clickCoordinate)) {
                    if (turno == 0) {
                        num_movimientos_amarillo = dado.lanzar();
                        dado_resultado.set_text(num_movimientos_amarillo); /// mostrar los movimientos que tiene el jugador
                        dado_resultado.set_position(jugadores[turno]->get_corner_x(), jugadores[turno]->get_corner_y());
                        j1->check_all_in_casa(); /// chequear que todos esten en casa
                        if (j1->get_all_in_casa() && num_movimientos_amarillo != 6) { /// todas las fichas estan en casa y no ha tocado 6? pierde turno
                            ++turno;
                        } else if (!(j1->get_all_in_casa()) && num_movimientos_amarillo == 6) { /// tiene al menos una ficha en jugego y sacó 6? turno extra
                            if (veces_dado_dio_6_amarillo == 3) { /// saco tres veces seguidas 6
                                veces_dado_dio_6_amarillo = 0;
                                ++turno;
                            } else {
                                amarillo_saco_6 = true;
                                ++veces_dado_dio_6_amarillo;
                            }
                        }
                    } else if (turno == 1) {
                        num_movimientos_verde = dado.lanzar();
                        dado_resultado.set_text(num_movimientos_verde); /// mostrar los movimientos que tiene el jugador
                        dado_resultado.set_position(jugadores[turno]->get_corner_x(), jugadores[turno]->get_corner_y());
                        j2->check_all_in_casa(); /// chequear que todos esten en casa
                        if (j2->get_all_in_casa() && num_movimientos_verde != 6) { /// todas las fichas estan en casa y no ha tocado 6? pierde turno
                            ++turno;
                        } else if (!(j2->get_all_in_casa()) && num_movimientos_verde == 6) { /// tiene al menos una ficha en jugego y sacó 6? turno extra
                            if (veces_dado_dio_6_verde == 3) { /// saco tres veces seguidas 6
                                veces_dado_dio_6_verde = 0;
                                ++turno;
                            } else {
                                verde_saco_6 = true;
                                ++veces_dado_dio_6_verde;
                            }
                        }
                    } else if (turno == 2) {
                        num_movimientos_rojo = dado.lanzar();
                        dado_resultado.set_text(num_movimientos_rojo); /// mostrar los movimientos que tiene el jugador
                        dado_resultado.set_position(jugadores[turno]->get_corner_x(), jugadores[turno]->get_corner_y());
                        j3->check_all_in_casa(); /// chequear que todos esten en casa
                        if (j3->get_all_in_casa() && num_movimientos_rojo != 6) { /// todas las fichas estan en casa y no ha tocado 6? pierde turno
                            ++turno;
                        } else if (!(j3->get_all_in_casa()) && num_movimientos_rojo == 6) { /// tiene al menos una ficha en jugego y sacó 6? turno extra
                            if (veces_dado_dio_6_rojo == 3) { /// saco tres veces seguidas 6
                                veces_dado_dio_6_rojo = 0;
                                ++turno;
                            } else {
                                rojo_saco_6 = true;
                                ++veces_dado_dio_6_rojo;
                            }
                        }
                    } else if (turno == 3) {
                        num_movimientos_azul = dado.lanzar();
                        dado_resultado.set_text(num_movimientos_azul); /// mostrar los movimientos que tiene el jugador
                        dado_resultado.set_position(jugadores[turno]->get_corner_x(), jugadores[turno]->get_corner_y());
                        j4->check_all_in_casa(); /// chequear que todos esten en casa
                        if (j4->get_all_in_casa() && num_movimientos_azul != 6) { /// todas las fichas estan en casa y no ha tocado 6? pierde turno
                            turno = 0;
                        } else if (!(j4->get_all_in_casa()) && num_movimientos_azul == 6) { /// tiene al menos una ficha en jugego y sacó 6? turno extra
                            if (veces_dado_dio_6_azul == 3) { /// saco tres veces seguidas 6
                                veces_dado_dio_6_azul = 0;
                                ++turno;
                            } else {
                                azul_saco_6 = true;
                                ++veces_dado_dio_6_azul;
                            }
                        }
                    }
                    updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores); /// dibujar todo de nuevo
                }
            }

        } // end of while (pollEvent(event))

        if (turno == 0) { /// TURNO AMARILLO
            turno_text.setPosition(jugador_amarillo->get_turno_text_x(), jugador_amarillo->get_turno_text_y());
            if (clicked_on_j1_f1) { /// click en la primera ficha
                if (ficha1_amarilla->get_estado() == 'C' && num_movimientos_amarillo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_amarillo->move_ficha_from_casa(0);
                } else if (ficha1_amarilla->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_amarillo->move_ficha_to(tablero.get_casilla_at(num_movimientos_amarillo+ficha1_amarilla->get_posicion_actual(), 4, num_movimientos_amarillo, fichas_metidas_amarillo), 0, num_movimientos_amarillo);
                }
                reset4jugadores(4, amarillo_saco_6);
                clicked_on_j1_f1 = false;

            } else if (clicked_on_j1_f2) { /// click en la segunda ficha
                if (ficha2_amarilla->get_estado() == 'C' && num_movimientos_amarillo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_amarillo->move_ficha_from_casa(1);
                } else if (ficha2_amarilla->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_amarillo->move_ficha_to(tablero.get_casilla_at(num_movimientos_amarillo+ficha2_amarilla->get_posicion_actual(), 4, num_movimientos_amarillo, fichas_metidas_amarillo), 1, num_movimientos_amarillo);
                }
                reset4jugadores(4, amarillo_saco_6);
                clicked_on_j1_f2 = false;

            } else if (clicked_on_j1_f3) { /// click en la tercera ficha
                if (ficha3_amarilla->get_estado() == 'C' && num_movimientos_amarillo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_amarillo->move_ficha_from_casa(2);
                } else if (ficha3_amarilla->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_amarillo->move_ficha_to(tablero.get_casilla_at(num_movimientos_amarillo+ficha3_amarilla->get_posicion_actual(), 4, num_movimientos_amarillo, fichas_metidas_amarillo), 2, num_movimientos_amarillo);
                }
                reset4jugadores(4, amarillo_saco_6);
                clicked_on_j1_f3 = false;

            } else if (clicked_on_j1_f4) { /// click en la cuarta ficha
                if (ficha4_amarilla->get_estado() == 'C' && num_movimientos_amarillo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_amarillo->move_ficha_from_casa(3);
                } else if (ficha4_amarilla->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_amarillo->move_ficha_to(tablero.get_casilla_at(num_movimientos_amarillo+ficha4_amarilla->get_posicion_actual(), 4, num_movimientos_amarillo, fichas_metidas_amarillo), 3, num_movimientos_amarillo);
                }
                reset4jugadores(4, amarillo_saco_6);
                clicked_on_j1_f4 = false;

            }
        } else if (turno == 1) { /// TURNO VERDE
            turno_text.setPosition(jugador_verde->get_turno_text_x(), jugador_verde->get_turno_text_y());
            if (clicked_on_j2_f1) { /// click en la primera ficha
                if (ficha1_verde->get_estado() == 'C' && num_movimientos_verde == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_verde->move_ficha_from_casa(0);
                } else if (ficha1_verde->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_verde->move_ficha_to(tablero.get_casilla_at(num_movimientos_verde+ficha1_verde->get_posicion_actual(), 3, num_movimientos_verde, fichas_metidas_verde), 0, num_movimientos_verde);
                }
                reset4jugadores(3, verde_saco_6);
                clicked_on_j2_f1 = false;

            } else if (clicked_on_j2_f2) { /// click en la segunda ficha
                if (ficha2_verde->get_estado() == 'C' && num_movimientos_verde == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_verde->move_ficha_from_casa(1);
                } else if (ficha2_verde->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_verde->move_ficha_to(tablero.get_casilla_at(num_movimientos_verde+ficha2_verde->get_posicion_actual(), 3, num_movimientos_verde, fichas_metidas_verde), 1, num_movimientos_verde);
                }
                reset4jugadores(3, verde_saco_6);
                clicked_on_j2_f2 = false;

            } else if (clicked_on_j2_f3) { /// click en la tercera ficha
                if (ficha3_verde->get_estado() == 'C' && num_movimientos_verde == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_verde->move_ficha_from_casa(2);
                } else if (ficha3_verde->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_verde->move_ficha_to(tablero.get_casilla_at(num_movimientos_verde+ficha3_verde->get_posicion_actual(), 3, num_movimientos_verde, fichas_metidas_verde), 2, num_movimientos_verde);
                }
                reset4jugadores(3, verde_saco_6);
                clicked_on_j2_f3 = false;

            } else if (clicked_on_j2_f4) { /// click en la cuarta ficha
                if (ficha4_verde->get_estado() == 'C' && num_movimientos_verde == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_verde->move_ficha_from_casa(3);
                } else if (ficha4_verde->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_verde->move_ficha_to(tablero.get_casilla_at(num_movimientos_verde+ficha4_verde->get_posicion_actual(), 3, num_movimientos_verde, fichas_metidas_verde), 3, num_movimientos_verde);
                }
                reset4jugadores(3, verde_saco_6);
                clicked_on_j2_f4 = false;

            }
        } else if (turno == 2) { /// TURNO ROJO
            turno_text.setPosition(jugador_rojo->get_turno_text_x(), jugador_rojo->get_turno_text_y());
            if (clicked_on_j3_f1) { /// click en la primera ficha
                if (ficha1_roja->get_estado() == 'C' && num_movimientos_rojo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_rojo->move_ficha_from_casa(0);
                } else if (ficha1_roja->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_rojo->move_ficha_to(tablero.get_casilla_at(num_movimientos_rojo+ficha1_roja->get_posicion_actual(), 1, num_movimientos_rojo, fichas_metidas_rojo), 0, num_movimientos_rojo);
                }
                reset4jugadores(1, rojo_saco_6);
                clicked_on_j3_f1 = false;

            } else if (clicked_on_j3_f2) { /// click en la segunda ficha
                if (ficha2_roja->get_estado() == 'C' && num_movimientos_rojo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_rojo->move_ficha_from_casa(1);
                } else if (ficha2_roja->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_rojo->move_ficha_to(tablero.get_casilla_at(num_movimientos_rojo+ficha2_roja->get_posicion_actual(), 1, num_movimientos_rojo, fichas_metidas_rojo), 1, num_movimientos_rojo);
                }
                reset4jugadores(1, rojo_saco_6);
                clicked_on_j3_f2 = false;

            } else if (clicked_on_j3_f3) { /// click en la tercera ficha
                if (ficha3_roja->get_estado() == 'C' && num_movimientos_rojo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_rojo->move_ficha_from_casa(2);
                } else if (ficha3_roja->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_rojo->move_ficha_to(tablero.get_casilla_at(num_movimientos_rojo+ficha3_roja->get_posicion_actual(), 1, num_movimientos_rojo, fichas_metidas_rojo), 2, num_movimientos_rojo);
                }
                reset4jugadores(1, rojo_saco_6);
                clicked_on_j3_f3 = false;

            } else if (clicked_on_j3_f4) { /// click en la cuarta ficha
                if (ficha4_roja->get_estado() == 'C' && num_movimientos_rojo == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_rojo->move_ficha_from_casa(3);
                } else if (ficha4_roja->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_rojo->move_ficha_to(tablero.get_casilla_at(num_movimientos_rojo+ficha4_roja->get_posicion_actual(), 1, num_movimientos_rojo, fichas_metidas_rojo), 3, num_movimientos_rojo);
                }
                reset4jugadores(1, rojo_saco_6);
                clicked_on_j3_f4 = false;

            }
        } else if (turno == 3) { /// TURNO AZUL
            turno_text.setPosition(jugador_azul->get_turno_text_x(), jugador_azul->get_turno_text_y());

            if (clicked_on_j4_f1) { /// click en la primera ficha
                if (ficha1_azul->get_estado() == 'C' && num_movimientos_azul == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_azul->move_ficha_from_casa(0);
                } else if (ficha1_azul->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_azul->move_ficha_to(tablero.get_casilla_at(num_movimientos_azul+ficha1_azul->get_posicion_actual(), 2, num_movimientos_azul, fichas_metidas_azul), 0, num_movimientos_azul);
                }
                reset4jugadores(2, azul_saco_6);
                clicked_on_j4_f1 = false;

            } else if (clicked_on_j4_f2) { /// click en la segunda ficha
                if (ficha2_azul->get_estado() == 'C' && num_movimientos_azul == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_azul->move_ficha_from_casa(1);
                } else if (ficha2_azul->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_azul->move_ficha_to(tablero.get_casilla_at(num_movimientos_azul+ficha2_azul->get_posicion_actual(), 2, num_movimientos_azul, fichas_metidas_azul), 1, num_movimientos_azul);
                }
                reset4jugadores(2, azul_saco_6);
                clicked_on_j4_f2 = false;

            } else if (clicked_on_j4_f3) { /// click en la tercera ficha
                if (ficha3_azul->get_estado() == 'C' && num_movimientos_azul == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_azul->move_ficha_from_casa(2);
                } else if (ficha3_azul->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_azul->move_ficha_to(tablero.get_casilla_at(num_movimientos_azul+ficha3_azul->get_posicion_actual(), 2, num_movimientos_azul, fichas_metidas_azul), 2, num_movimientos_azul);
                }
                reset4jugadores(2, azul_saco_6);
                clicked_on_j4_f3 = false;

            } else if (clicked_on_j4_f4) { /// click en la cuarta ficha
                if (ficha4_azul->get_estado() == 'C' && num_movimientos_azul == 6) { /// si esta en casa y el dado dio 6, sale de casa
                    jugador_azul->move_ficha_from_casa(3);
                } else if (ficha4_azul->get_estado() == 'J') { /// mover la ficha si ya no esta en casa
                    jugador_azul->move_ficha_to(tablero.get_casilla_at(num_movimientos_azul+ficha4_azul->get_posicion_actual(), 2, num_movimientos_azul, fichas_metidas_azul), 3, num_movimientos_azul);
                }
                reset4jugadores(2, azul_saco_6);
                clicked_on_j4_f4 = false;
            }
        }

        /// Algun jugador ya metio las 4 fichas?
        if (fichas_metidas_amarillo == 4) { /// amarillo ganó
            window.draw(mensaje_ganador(j1->get_nombre()));
            sleep_for(3);
            window.close();
        } else if (fichas_metidas_verde == 4) { /// verde ganó
            window.draw(mensaje_ganador(j2->get_nombre()));
            sleep_for(3);
            window.close();
        } else if (fichas_metidas_azul == 4) { /// azul ganó
            window.draw(mensaje_ganador(j4->get_nombre()));
            sleep_for(3);
            window.close();
        }  else if (fichas_metidas_rojo == 4) { /// rojo ganó
            window.draw(mensaje_ganador(j3->get_nombre()));
            sleep_for(3);
            window.close();
        }

        updateWindow(sprite, dado_resultado.get_dado_resultado(), turno_text, jugadores, num_jugadores); /// dibujar todo de nuevo
    } // end of while(window.isOpen())
}

sf::Text Window::mensaje_ganador(const string&& nombre_jugador) {
    mensaje_game_over_font.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/Arial/Arial.ttf");
    mensaje_game_over.setFont(turno_text_font);
    mensaje_game_over.setCharacterSize(50);
    mensaje_game_over.setFillColor(sf::Color::Black);
    mensaje_game_over.setStyle(sf::Text::Bold);
    mensaje_game_over.setPosition(566, 566);
    mensaje_game_over.setString("Ganó " + nombre_jugador + "!");
    return mensaje_game_over;
}

void Window::sleep_for(const float& time) {
    sf::sleep(sf::seconds(time));
}

void Window::reset2jugadores(const int& color, bool& saco_6) {
    if (saco_6) {
        switch (color) {
            case 3:
                turno = 1;
                num_movimientos_verde = 0;
                break;
            case 4:
                turno = 0;
                num_movimientos_amarillo = 0;
                break;
            default:
                printf("Invalid color in reset");
                break;
        }
        saco_6 = false;
    } else {
        switch (color) {
            case 3:
                turno = 0;
                num_movimientos_verde = 0;
                break;
            case 4:
                ++turno;
                num_movimientos_amarillo = 0;
                break;
            default:
                printf("Invalid color in reset");
                break;
        }
    }
}

void Window::reset3jugadores(const int& color, bool& saco_6) {
    if (saco_6) {
        switch (color) {
            case 1:
                turno = 2;
                num_movimientos_rojo = 0;
                break;
            case 3:
                turno = 1;
                num_movimientos_verde = 0;
                break;
            case 4:
                turno = 0;
                num_movimientos_amarillo = 0;
                break;
            default:
                printf("Invalid color in reset");
                break;
        }
        saco_6 = false;
    } else {
        switch (color) {
            case 1:
                turno = 0;
                num_movimientos_rojo = 0;
                break;
            case 3:
                ++turno;
                num_movimientos_verde = 0;
                break;
            case 4:
                ++turno;
                num_movimientos_amarillo = 0;
                break;
            default:
                printf("Invalid color in reset");
                break;
        }
    }
}

void Window::reset4jugadores(const int& color, bool& saco_6) {
    if (saco_6) {
        switch (color) {
            case 1:
                turno = 2;
                num_movimientos_rojo = 0;
                break;
            case 2:
                turno = 3;
                num_movimientos_azul = 0;
                break;
            case 3:
                turno = 1;
                num_movimientos_verde = 0;
                break;
            case 4:
                turno = 0;
                num_movimientos_amarillo = 0;
                break;
            default:
                printf("Invalid color in reset");
                break;
        }
        saco_6 = false;
    } else {
        switch (color) {
            case 1:
                ++turno;
                num_movimientos_rojo = 0;
                break;
            case 2:
                turno = 0;
                num_movimientos_azul = 0;
                break;
            case 3:
                ++turno;
                num_movimientos_verde = 0;
                break;
            case 4:
                ++turno;
                num_movimientos_amarillo = 0;
                break;
            default:
                printf("Invalid color in reset");
                break;
        }
    }
}
