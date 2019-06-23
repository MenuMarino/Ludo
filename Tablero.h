#ifndef LUDO_TABLERO_H
#define LUDO_TABLERO_H

#include <vector>
#include "Casilla.h"
#include "CasillaNormal.h"

class Tablero {
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

    ~Tablero();
};


#endif