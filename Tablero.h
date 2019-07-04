#ifndef LUDO_TABLERO_H
#define LUDO_TABLERO_H

#include "Casilla.h"

class Tablero {
    Casilla* casilla_olimpo;
    vector<Casilla*> casillas;

    vector<Casilla*> recta_final_amarillo;
    vector<Casilla*> recta_final_verde;
    vector<Casilla*> recta_final_rojo;
    vector<Casilla*> recta_final_azul;

    vector<Casilla*> casas_amarillas;
    vector<Casilla*> casas_verdes;
    vector<Casilla*> casas_rojos;
    vector<Casilla*> casas_azules;

    int casillas_size;
    int recta_final_amarillo_size;
    int recta_final_verde_size;
    int recta_final_rojo_size;
    int recta_final_azul_size;
public:
    Tablero();
    /// Casillas Normales
    vector<Casilla*> get_casillas() { return casillas; }
    Casilla* get_casilla_at(int i, int color, int& num_movimientos, int& fichas_metidas) {
        if (color == 4) {
            if (i > 51) { // se quiere llegar a recta final amarilla
                int posicion_actual = i - num_movimientos;
                int diff = 57 - posicion_actual;
                if (diff < num_movimientos) {
                    return nullptr;
                } else if (diff == num_movimientos) {
                    ++fichas_metidas;
                    return casilla_olimpo;
                } else {
                    i -= 52;
                    return recta_final_amarillo[i];
                }
            } else {
                return casillas[i];
            }
        } else if (color == 3) {
            if (i > 51) {
                if (i > 64) { // se quiere llegar a recta final verde
                    int posicion_actual = i - num_movimientos;
                    int diff = 70 - posicion_actual;
                    if (diff < num_movimientos) {
                        return nullptr;
                    } else if (diff == num_movimientos) {
                        ++fichas_metidas;
                        return casilla_olimpo;
                    } else {
                        i -= 65;
                        return recta_final_verde[i];
                    }
                } else {
                    return casillas[i-52];
                }
            } else {
                return casillas[i];
            }
        } else if (color == 2) {
            if (i > 51) {
                if (i > 90) {
                    int posicion_actual = i - num_movimientos;
                    int diff = 96 - posicion_actual;
                    if (diff < num_movimientos) {
                        return nullptr;
                    } else if (diff == num_movimientos) {
                        ++fichas_metidas;
                        return casilla_olimpo;
                    } else {
                        i -= 91;
                        return recta_final_azul[i];
                    }
                } else {
                    return casillas[i-52];
                }
            } else {
                return casillas[i];
            }
        } else if (color == 1) {
            if (i > 51) {
                if (i > 77) {
                    int posicion_actual = i - num_movimientos;
                    int diff = 83 - posicion_actual;
                    if (diff < num_movimientos) {
                        return nullptr;
                    } else if (diff == num_movimientos) {
                        ++fichas_metidas;
                        return casilla_olimpo;
                    } else {
                        i -= 78;
                        return recta_final_rojo[i];
                    }
                } else {
                    return casillas[i-52];
                }
            } else {
                return casillas[i];
            }
        }
    }

    Casilla* get_casilla_at(int i, int color) {
        return casillas[i];
    }

    double get_casilla_x_at(int i) { return casillas[i]->get_x(); }
    double get_casilla_y_at(int i) { return casillas[i]->get_y(); }
    int get_casilla_size() { return casillas_size; }

    /// Recta Final Amarilla
    vector<Casilla*> get_recta_final_amarillo() { return recta_final_amarillo; }
    double get_recta_final_amarillo_x_at(int i) { return recta_final_amarillo[i]->get_x(); }
    double get_recta_final_amarillo_y_at(int i) { return recta_final_amarillo[i]->get_y(); }
    int get_recta_final_amarillo_size() { return recta_final_amarillo_size; }

    /// Recta Final Verde
    vector<Casilla*> get_recta_final_verde() { return recta_final_verde; }
    double get_recta_final_verde_x_at(int i) { return recta_final_verde[i]->get_x(); }
    double get_recta_final_verde_y_at(int i) { return recta_final_verde[i]->get_y(); }
    int get_recta_final_verde_size() { return recta_final_verde_size; }

    /// Recta Final Rojo
    vector<Casilla*> get_recta_final_rojo() { return recta_final_rojo; }
    double get_recta_final_rojo_x_at(int i) { return recta_final_rojo[i]->get_x(); }
    double get_recta_final_rojo_y_at(int i) { return recta_final_rojo[i]->get_y(); }
    int get_recta_final_rojo_size() { return recta_final_rojo_size; }

    /// Recta Final Azul
    vector<Casilla*> get_recta_final_azul() { return recta_final_azul; }
    double get_recta_final_azul_x_at(int i) { return recta_final_azul[i]->get_x(); }
    double get_recta_final_azul_y_at(int i) { return recta_final_azul[i]->get_y(); }
    int get_recta_final_azul_size() { return recta_final_azul_size; }

    /// Creacion de Casillas Normales
    void crear_primera_mitad();
    void crear_segunda_mitad();

    /// Creacion casillas recta final
    void crear_recta_final_verde_amarilla();
    void crear_recta_final_rojo_azul();

    /// Creacion casillas casa
    void crear_casas();

    ~Tablero();
};


#endif