#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"
#include "Tablero.h"

class Jugador {
    Tablero tablero;
    int ficha_a_sacar_de_casa_roja = 0;
    int ficha_a_sacar_de_casa_azul = 0;
    int ficha_a_sacar_de_casa_verde = 0;
    int ficha_a_sacar_de_casa_amarilla = 0;
    int current_ficha = 0;
    string nombre;
    int color;
    vector<Ficha*> fichas;
    int num_fichas = 4;
public:
    Jugador() = default;
    Jugador(const string& nombre, int color): nombre{nombre}, color{color} {
        switch (color) {
            case 1:
                fichas.emplace_back(new Ficha(839.1333-FICHA_RADIUS, 226.4-FICHA_RADIUS, 1));
                fichas.emplace_back(new Ficha(905.6-FICHA_RADIUS, 301.8666-FICHA_RADIUS, 1));
                fichas.emplace_back(new Ficha(981.0666-FICHA_RADIUS, 226.4-FICHA_RADIUS, 1));
                fichas.emplace_back(new Ficha(905.6-FICHA_RADIUS, 150.9333-FICHA_RADIUS, 1));
                break;
            case 2:
                fichas.emplace_back(new Ficha(905.6-FICHA_RADIUS, 839.1333-FICHA_RADIUS, 2));
                fichas.emplace_back(new Ficha(981.066-FICHA_RADIUS, 905.6-FICHA_RADIUS, 2));
                fichas.emplace_back(new Ficha(905.6-FICHA_RADIUS, 981.0666-FICHA_RADIUS, 2));
                fichas.emplace_back(new Ficha(839.1333-FICHA_RADIUS, 905.6-FICHA_RADIUS, 2));
                break;
            case 3:
                fichas.emplace_back(new Ficha(226.4-FICHA_RADIUS, 301.8666-FICHA_RADIUS, 3));
                fichas.emplace_back(new Ficha(150.9333-FICHA_RADIUS, 226.4-FICHA_RADIUS, 3));
                fichas.emplace_back(new Ficha(226.4-FICHA_RADIUS, 150.9333-FICHA_RADIUS, 3));
                fichas.emplace_back(new Ficha(301.8666-FICHA_RADIUS, 226.4-FICHA_RADIUS, 3));
                break;
            case 4:
                fichas.emplace_back(new Ficha(301.8666-FICHA_RADIUS, 905.6-FICHA_RADIUS, 4));
                fichas.emplace_back(new Ficha(226.4-FICHA_RADIUS, 981.0666-FICHA_RADIUS, 4));
                fichas.emplace_back(new Ficha(150.9333-FICHA_RADIUS, 905.6-FICHA_RADIUS, 4));
                fichas.emplace_back(new Ficha(226.4-FICHA_RADIUS, 839.1333-FICHA_RADIUS, 4));
                break;
            default:
                break;
        }

    };

    void move_ficha_to(Casilla* casilla) {
        fichas[current_ficha]->move_to(casilla);
    }

    void move_ficha_from_casa() {
        switch (color) {
            case 1:
                if (ficha_a_sacar_de_casa_roja != 4 && fichas[ficha_a_sacar_de_casa_roja]->get_estado() == 'C') {
                    fichas[ficha_a_sacar_de_casa_roja]->move_to(tablero.get_casilla_at(27));
                    ++ficha_a_sacar_de_casa_roja;
                }
                break;
            case 2:
                if (ficha_a_sacar_de_casa_azul != 4 && fichas[ficha_a_sacar_de_casa_azul]->get_estado() == 'C') {
                    fichas[ficha_a_sacar_de_casa_azul]->move_to(tablero.get_casilla_at(41));
                    ++ficha_a_sacar_de_casa_azul;
                }
                break;
            case 3:
                if (ficha_a_sacar_de_casa_verde != 4 && fichas[ficha_a_sacar_de_casa_verde]->get_estado() == 'C') {
                    fichas[ficha_a_sacar_de_casa_verde]->move_to(tablero.get_casilla_at(14));
                    ++ficha_a_sacar_de_casa_verde;
                }
                break;
            case 4:
                if (ficha_a_sacar_de_casa_amarilla != 4 && fichas[ficha_a_sacar_de_casa_amarilla]->get_estado() == 'C') {
                    fichas[ficha_a_sacar_de_casa_amarilla]->move_to(tablero.get_casilla_at(1));
                    ++ficha_a_sacar_de_casa_amarilla;
                }
                break;
        }
    }

    void set_current_ficha(int i) { current_ficha = i; }

    Ficha get_ficha_at(int i) { return *(fichas[i]); }
    sf::CircleShape get_ficha_sprite_at(int i) { return fichas[i]->get_ficha_sprite(); }

    int get_num_fichas() { return num_fichas; }
    void set_num_fichas(int _num_fichas) { num_fichas = _num_fichas; }

    double get_corner_x() {
        switch (color) {
            case 1:
                return 1060.0;
            case 2:
                return 1060.0;
            case 3:
                return 60.0;
            case 4:
                return 60.0;
        }
    }

    double get_corner_y() {
        switch (color) {
            case 1:
                return 40.0;
            case 2:
                return 1070.0;
            case 3:
                return 40.0;
            case 4:
                return 1070.0;
        }
    }

    double get_turno_text_x() {
        switch (color) {
            case 1:
                return 690.0;
            case 2:
                return 690.0;
            case 3:
                return 300.0;
            case 4:
                return 300.0;
        }
    }

    double get_turno_text_y() {
        switch (color) {
            case 1:
                return 40.0;
            case 2:
                return 1070.0;
            case 3:
                return 40.0;
            case 4:
                return 1070.0;
        }
    }

    ~Jugador() {
        for (auto& ficha: fichas)
            delete ficha;
    }

};


#endif
