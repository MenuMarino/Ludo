#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"

class Jugador {
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

    void move_ficha_at(int i, double destX, double destY) { fichas[i]->move_to(destX, destY); }
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
