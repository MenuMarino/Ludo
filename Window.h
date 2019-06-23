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
#include "Tablero.h"

const int YELLOW_CORNER_X = 60;
const int YELLOW_CORNER_Y = 1040;

const int GREEN_CORNER_X = 60;
const int GREEN_CORNER_Y = 60;

const int RED_CORNER_X = 1060;
const int RED_CORNER_Y = 60;

const int BLUE_CORNER_X = 1060;
const int BLUE_CORNER_Y = 1040;

const int JUGADOR_RADIUS = 20;

class Window {
    const int WINDOW_WIDTH = 1132;
    const int WINDOW_HEIGHT = 1132;
    sf::Texture texture;
    sf::Sprite sprite;
    vector<Jugador*> jugadores;
    sf::RenderWindow window;
    Dado dado;
    DadoResultado dado_resultado;
    int num_movimientos = 0;
    Tablero tablero;
public:

    /// Coordenadas Amarillo
    const double ultima_casilla_normal_para_amarillo_x = tablero.get_casilla_x_at(tablero.get_casilla_size()-1);
    const double ultima_casilla_normal_para_amarillo_y = tablero.get_casilla_y_at(tablero.get_casilla_size()-1);

    const double ultima_casilla_segura_para_amarillo_x = tablero.get_recta_final_amarillo_x_at(5);
    const double ultima_casilla_segura_para_amarillo_y = tablero.get_recta_final_amarillo_y_at(5);

    /// Coordenadas Verde
    const double ultima_casilla_normal_para_verde_x = tablero.get_casilla_x_at(12);
    const double ultima_casilla_normal_para_verde_y = tablero.get_casilla_y_at(12);

    const double ultima_casilla_segura_para_verde_x = tablero.get_recta_final_verde_x_at(5);
    const double ultima_casilla_segura_para_verde_y = tablero.get_recta_final_verde_y_at(5);

    /// Coordenadas Rojo
    const double ultima_casilla_normal_para_rojo_x = tablero.get_casilla_x_at(12);
    const double ultima_casilla_normal_para_rojo_y = tablero.get_casilla_y_at(12);

    const double ultima_casilla_segura_para_rojo_x = tablero.get_recta_final_rojo_x_at(5);
    const double ultima_casilla_segura_para_rojo_y = tablero.get_recta_final_rojo_y_at(5);

    /// Coordenadas Azul
    const double ultima_casilla_normal_para_azul_x = tablero.get_casilla_x_at(12);
    const double ultima_casilla_normal_para_azul_y = tablero.get_casilla_y_at(12);

    const double ultima_casilla_segura_para_azul_x = tablero.get_recta_final_azul_x_at(5);
    const double ultima_casilla_segura_para_azul_y = tablero.get_recta_final_azul_y_at(5);

    Window() = default;
    explicit Window(const std::string& WindowName);
    void openWindow(vector<Jugador*>& jugadores, const int& num_jugadores);

    ~Window() {
        for (auto& jugador: jugadores)
            delete jugador;
    }
};


#endif //LUDO_WINDOW_H
