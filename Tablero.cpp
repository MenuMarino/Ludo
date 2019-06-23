#include "Tablero.h"

Tablero::Tablero() {
    // TODO: Hacer esto con hilos
    /// Casillas Normales
    casillas.emplace_back(new Casilla(490.5332, 1094.2657, 0)); // casilla 0
    casillas.emplace_back(new Casilla(490.5332, 1018.7991, 4)); // comienzo amarillo
    casillas.emplace_back(new Casilla(490.5332, 943.3325, 0));
    casillas.emplace_back(new Casilla(490.5332, 867.8659, 0));
    casillas.emplace_back(new Casilla(490.5332, 792.3993, 0));
    casillas.emplace_back(new Casilla(490.5332, 716.9327, 0)); // diagonal

    casillas.emplace_back(new Casilla(415.0666, 641.4665, 0));
    casillas.emplace_back(new Casilla(339.5999, 641.4665, 0));
    casillas.emplace_back(new Casilla(264.1333, 641.4665, 0));
    casillas.emplace_back(new Casilla(188.6666, 641.4665, 0));
    casillas.emplace_back(new Casilla(113.1999, 641.4665, 0));
    casillas.emplace_back(new Casilla(37.73333, 641.4665, 0)); // esquina

    casillas.emplace_back(new Casilla(37.73333, 565.9998, 0)); // ultima casilla normal verde
    casillas.emplace_back(new Casilla(37.73333, 490.5332, 0)); // esquina

    casillas.emplace_back(new Casilla(113.1999, 490.5332, 3)); // comienzo verde
    casillas.emplace_back(new Casilla(188.6666, 490.5332, 0));
    casillas.emplace_back(new Casilla(264.1333, 490.5332, 0));
    casillas.emplace_back(new Casilla(339.5999, 490.5332, 0));
    casillas.emplace_back(new Casilla(415.0666, 490.5332, 0)); // esquina

    casillas.emplace_back(new Casilla(490.5332, 415.0666, 0));
    casillas.emplace_back(new Casilla(490.5332, 339.5999, 0));
    casillas.emplace_back(new Casilla(490.5332, 264.1333, 0));
    casillas.emplace_back(new Casilla(490.5332, 188.6666, 0));
    casillas.emplace_back(new Casilla(490.5332, 113.1999, 0));
    casillas.emplace_back(new Casilla(490.5332, 37.7333, 0)); // esquina

    casillas.emplace_back(new Casilla(565.9998, 37.7333, 0));
    casillas.emplace_back(new Casilla(641.4665, 37.7333, 0)); // esquina

    casillas.emplace_back(new Casilla(641.4665, 113.1999, 1)); // comienzo rojo
    casillas.emplace_back(new Casilla(641.4665, 188.6666, 0));
    casillas.emplace_back(new Casilla(641.4665, 264.1333, 0));
    casillas.emplace_back(new Casilla(641.4665, 339.5999, 0));
    casillas.emplace_back(new Casilla(641.4665, 339.5999, 0));
    casillas.emplace_back(new Casilla(641.4665, 415.0666, 0)); // esquina

    casillas.emplace_back(new Casilla(716.9327, 490.5332, 0));
    casillas.emplace_back(new Casilla(792.3993, 490.5332, 0));
    casillas.emplace_back(new Casilla(867.8659, 490.5332, 0));
    casillas.emplace_back(new Casilla(943.3325, 490.5332, 0));
    casillas.emplace_back(new Casilla(1018.7991, 490.5332, 0));
    casillas.emplace_back(new Casilla(1094.2657, 490.5332, 0)); // esquina

    casillas.emplace_back(new Casilla(1094.2657, 565.9998, 0));
    casillas.emplace_back(new Casilla(1094.2657, 641.4665, 0)); // esquina

    casillas.emplace_back(new Casilla(1018.7991, 641.4665, 2)); // comienzo azul
    casillas.emplace_back(new Casilla(943.3325, 641.4665, 0));
    casillas.emplace_back(new Casilla(867.8659, 641.4665, 0));
    casillas.emplace_back(new Casilla(792.3993, 641.4665, 0));
    casillas.emplace_back(new Casilla(716.9327, 641.4665, 0)); // esquina

    casillas.emplace_back(new Casilla(641.4665, 716.9327, 0));
    casillas.emplace_back(new Casilla(641.4665, 792.3993, 0));
    casillas.emplace_back(new Casilla(641.4665, 867.8659, 0));
    casillas.emplace_back(new Casilla(641.4665, 943.3325, 0));
    casillas.emplace_back(new Casilla(641.4665, 1018.7991, 0));
    casillas.emplace_back(new Casilla(641.4665, 1094.2657, 0)); // esquina

    casillas.emplace_back(new Casilla(565.9998, 1094.2657, 0)); // casilla n

    /// Casillas Recta Final Amarillo
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 1018.7991, 4)); // primera casilla segura amarilla
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 943.3325, 4));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 867.8659, 4));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 792.3993, 4));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 716.9327, 4));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 641.4665, 4)); // casilla destino amarilla

    /// Casillas Recta Final Verde
    recta_final_verde.emplace_back(new Casilla(113.1999, 565.9998, 3)); // primera casilla segura verde
    recta_final_verde.emplace_back(new Casilla(188.6666, 565.9998, 3));
    recta_final_verde.emplace_back(new Casilla(264.1333, 565.9998, 3));
    recta_final_verde.emplace_back(new Casilla(339.5999, 565.9998, 3));
    recta_final_verde.emplace_back(new Casilla(415.0666, 565.9998, 3));
    recta_final_verde.emplace_back(new Casilla(490.5332, 565.9998, 3)); // casilla destino verde

    /// Casillas Recta Final Rojo
    recta_final_rojo.emplace_back(new Casilla(565.9998, 113.1999, 1)); // primera casilla segura rojo
    recta_final_rojo.emplace_back(new Casilla(565.9998, 188.6666, 1));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 264.1333, 1));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 339.5999, 1));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 415.0666, 1));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 490.5332, 1)); // casilla destino rojo

    /// Casillas Recta Final Azul
    recta_final_azul.emplace_back(new Casilla(1018.7991, 565.9998, 2)); // primera casilla segura azul
    recta_final_azul.emplace_back(new Casilla(943.3325, 565.9998, 2));
    recta_final_azul.emplace_back(new Casilla(867.8659, 565.9998, 2));
    recta_final_azul.emplace_back(new Casilla(792.3993, 565.9998, 2));
    recta_final_azul.emplace_back(new Casilla(716.9327, 565.9998, 2));
    recta_final_azul.emplace_back(new Casilla(641.4665, 565.9998, 2)); // casilla destino azul

    /// Casillas Casa Amarillo
    casas_amarillas.emplace_back(new Casilla(150.9333, 905.6, 4)); // izquierdo
    casas_amarillas.emplace_back(new Casilla(226.4, 839.1333, 4)); // arriba
    casas_amarillas.emplace_back(new Casilla(226.4, 981.0666, 4)); // abajo
    casas_amarillas.emplace_back(new Casilla(301.8666, 905.6, 4)); // derecha

    /// Casillas Casa Verde
    casas_verdes.emplace_back(new Casilla(150.9333, 226.4, 3)); // izquierdo
    casas_verdes.emplace_back(new Casilla(226.4, 150.9333, 3)); // arriba
    casas_verdes.emplace_back(new Casilla(226.4, 301.8666, 3)); // abajo
    casas_verdes.emplace_back(new Casilla(301.8666, 226.4, 3)); // derecha

    /// Casillas Casa Rojo
    casas_rojos.emplace_back(new Casilla(839.1333, 226.4, 1)); // izquierdo
    casas_rojos.emplace_back(new Casilla(905.6, 150.9333, 1)); // arriba
    casas_rojos.emplace_back(new Casilla(905.6, 301.8666, 1)); // abajo
    casas_rojos.emplace_back(new Casilla(981.0666, 226.4, 1)); // derecha

    /// Casillas Casa Azules
    casas_azules.emplace_back(new Casilla(839.1333, 905.6, 2)); // izquierdo
    casas_azules.emplace_back(new Casilla(905.6, 839.1333, 2)); // arriba
    casas_azules.emplace_back(new Casilla(905.6, 981.0666, 2)); // abajo
    casas_azules.emplace_back(new Casilla(981.0666, 905.6, 2)); // derecha

    casillas_size = casillas.size();
    recta_final_amarillo_size = recta_final_amarillo.size();
    recta_final_verde_size = recta_final_verde.size();
    recta_final_rojo_size = recta_final_rojo.size();
    recta_final_azul_size = recta_final_azul.size();
}

Tablero::~Tablero() {
    /// Liberar el heap
    for (auto& item: casillas)
        delete item;
    for (auto& item: recta_final_amarillo)
        delete item;
    for (auto& item: recta_final_verde)
        delete item;
    for (auto& item: recta_final_rojo)
        delete item;
    for (auto& item: recta_final_azul)
        delete item;
    for (auto& item: casas_amarillas)
        delete item;
    for (auto& item: casas_verdes)
        delete item;
    for (auto& item: casas_rojos)
        delete item;
    for (auto& item: casas_azules)
        delete item;
}


