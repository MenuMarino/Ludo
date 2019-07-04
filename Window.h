//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#ifndef LUDO_WINDOW_H
#define LUDO_WINDOW_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Dado.h"
#include "DadoResultado.h"
#include "Jugador.h"
#include "DadoResultado.h"
#include "Tablero.h"

/// - TODO:
// * mostrar cuantas fichas ha metido al destino cada jugador?
// * dejar que cada jugador meta una ficha al destino y desaparecer esa ficha
// * terminar el juego cuando un jugador metio las 4 fichas (o dejar que sigan jugando para 2do 3er y 4to puesto?)

class Window {
    const int WINDOW_WIDTH = 1132;
    const int WINDOW_HEIGHT = 1132;
    sf::Texture texture;
    sf::Sprite sprite;
    vector<Jugador*> jugadores;
    sf::RenderWindow window;
    Dado dado;
    DadoResultado dado_resultado;
    int num_movimientos_amarillo = 0;
    int num_movimientos_verde = 0;
    int num_movimientos_azul = 0;
    int num_movimientos_rojo = 0;
    int turno = 0;
    Tablero tablero;
    sf::Text turno_text;
    sf::Font turno_text_font;
public:
    Window() = default;
    explicit Window(const std::string& WindowName);
    void openWindow(Jugador* j1, Jugador* j2, int& num_jugadores);
    void openWindow(Jugador* j1, Jugador* j2, Jugador* j3, int& num_jugadores);
    void openWindow(Jugador* j1, Jugador* j2, Jugador* j3, Jugador* j4, int& num_jugadores);
    void updateWindow(const sf::Sprite& background, const sf::Text& dado_result, const sf::Text& turno, const vector<Jugador*>& jugadores, const int& num_jugadores);
    void reset2jugadores(int color);
    void reset3jugadores(int color);
    void reset4jugadores(int color);
    ~Window() {
        for (auto& jugador: jugadores)
            delete jugador;
    }
};


#endif //LUDO_WINDOW_H
