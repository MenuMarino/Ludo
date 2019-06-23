#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"

const int NUM_FICHAS = 4;

class Jugador {
    string nombre;
    int color;
    vector<Ficha*> fichas;
    int num_fichas = 4;
public:
    Jugador() = default;
    Jugador(const string& nombre, int color): nombre{nombre}, color{color} {
        // de acuerdo al color, las 4 fichas se ponen en la casa correspondiente
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

    ~Jugador() {
        for (auto& ficha: fichas)
            delete ficha;
    }

};


#endif
