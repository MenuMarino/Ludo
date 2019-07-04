#ifndef LUDO_JUGADOR_H
#define LUDO_JUGADOR_H

#include "Ficha.h"
#include "Tablero.h"

class Jugador {
    Tablero tablero;
    int current_ficha = 0;
    int ficha_a_sacar_de_casa_roja = 0;
    int ficha_a_sacar_de_casa_azul = 0;
    int ficha_a_sacar_de_casa_verde = 0;
    int ficha_a_sacar_de_casa_amarilla = 0;
    string nombre;
    int color;
    vector<Ficha*> fichas;
    int num_fichas = 4;
    bool all_in_casa = true;
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

    sf::FloatRect get_f1_bounds() { return fichas[0]->get_ficha_sprite().getGlobalBounds(); }
    sf::FloatRect get_f2_bounds() { return fichas[1]->get_ficha_sprite().getGlobalBounds(); }
    sf::FloatRect get_f3_bounds() { return fichas[2]->get_ficha_sprite().getGlobalBounds(); }
    sf::FloatRect get_f4_bounds() { return fichas[3]->get_ficha_sprite().getGlobalBounds(); }

    void set_all_in_casa(bool _all_in_casa) { all_in_casa = _all_in_casa; }
    bool get_all_in_casa() { return all_in_casa; }

    void move_ficha_to(Casilla* casilla, int ficha, int movimientos) {
        fichas[ficha]->move_to(casilla, movimientos);
    }

    void check_all_in_casa() {
        int checker = 0;
        for (int i = 0; i < num_fichas; ++i) {
            if (fichas[i]->get_x() == fichas[i]->get_initial_x() && fichas[i]->get_y() == fichas[i]->get_initial_y())
                ++checker;
        }
        if (checker == 4) {
            all_in_casa = true;
        }
    }

    void move_ficha_from_casa(int pos) {
        switch (color) {
            case 4:
                fichas[pos]->set_estado('J');
                fichas[pos]->move_to(tablero.get_casilla_at(1, 4), 0);
                all_in_casa = false;
                break;
            case 3:
                fichas[pos]->set_estado('J');
                fichas[pos]->move_to(tablero.get_casilla_at(14, 3), 0);
                all_in_casa = false;
                break;
            case 1:
                fichas[pos]->set_estado('J');
                fichas[pos]->move_to(tablero.get_casilla_at(27, 1), 0);
                all_in_casa = false;
                break;
            case 2:
                fichas[pos]->set_estado('J');
                fichas[pos]->move_to(tablero.get_casilla_at(40, 2), 0);
                all_in_casa = false;
                break;
            default:
                break;
        }
    }

    void set_current_ficha(int i) { current_ficha = i; }

    Ficha* get_ficha_at(int i) { return fichas[i]; }
    sf::CircleShape get_ficha_sprite_at(int i) { return fichas[i]->get_ficha_sprite(); }

    int get_num_fichas() { return num_fichas; }
    void delete_ficha_at(int i) { fichas.erase(fichas.begin()+i); } /// llamar cuando ficha llegue a zona segura

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
            default:
                break;
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
            default:
                break;
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
            default:
                break;
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
            default:
                break;
        }
    }

    ~Jugador() {
        for (auto& ficha: fichas)
            delete ficha;
    }

};


#endif
