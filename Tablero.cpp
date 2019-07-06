#include "Tablero.h"

void Tablero::crear_primera_mitad() {

    casillas.emplace_back(new Casilla(490.5332, 1094.2657, 0,true,false,false,false,false,false,0)); // casilla 0
    casillas.emplace_back(new Casilla(490.5332, 1018.7991, 4,false,false,true,false, false,true,1)); // comienzo amarillo i = 1
    casillas.emplace_back(new Casilla(490.5332, 943.3325, 0,true,false,false,false,false,false,2));
    casillas.emplace_back(new Casilla(490.5332, 867.8659, 0,true,false,false,false,false,false,3));
    casillas.emplace_back(new Casilla(490.5332, 792.3993, 0,true,false,false,false,false,false,4));
    casillas.emplace_back(new Casilla(490.5332, 716.9327, 0,true,false,false,false,false,false,5)); // diagonal

    casillas.emplace_back(new Casilla(415.0666, 641.4665, 0,true,false,false,false,false,false,6));
    casillas.emplace_back(new Casilla(339.5999, 641.4665, 0,true,false,false,false,false,false,7));
    casillas.emplace_back(new Casilla(264.1333, 641.4665, 0,true,false,false,false,false,false,8));
    casillas.emplace_back(new Casilla(188.6666, 641.4665, 0,true,false,false,false,false,false,9));
    casillas.emplace_back(new Casilla(113.1999, 641.4665, 0,true,false,false,false,false,false,10));
    casillas.emplace_back(new Casilla(37.73333, 641.4665, 0,true,false,false,false,false,false,11)); // esquina

    casillas.emplace_back(new Casilla(37.73333, 565.9998, 0,true,false,false,false,true,false,12)); // ultima casilla normal verde
    casillas.emplace_back(new Casilla(37.73333, 490.5332, 0,true,false,false,false,false,false,13)); // esquina

    casillas.emplace_back(new Casilla(113.1999, 490.5332, 3,false,false,true,false,false,true,14)); // comienzo verde i = 14
    casillas.emplace_back(new Casilla(188.6666, 490.5332, 0,true,false,false,false,false,false,15));
    casillas.emplace_back(new Casilla(264.1333, 490.5332, 0,true,false,false,false,false,false,16));
    casillas.emplace_back(new Casilla(339.5999, 490.5332, 0,true,false,false,false,false,false,17));
    casillas.emplace_back(new Casilla(415.0666, 490.5332, 0,true,false,false,false,false,false,18)); // esquina

    casillas.emplace_back(new Casilla(490.5332, 415.0666, 0,true,false,false,false,false,false,19));
    casillas.emplace_back(new Casilla(490.5332, 339.5999, 0,true,false,false,false,false,false,20));
    casillas.emplace_back(new Casilla(490.5332, 264.1333, 0,true,false,false,false,false,false,21));
    casillas.emplace_back(new Casilla(490.5332, 188.6666, 0,true,false,false,false,false,false,22));
    casillas.emplace_back(new Casilla(490.5332, 113.1999, 0,true,false,false,false,false,false,23));
    casillas.emplace_back(new Casilla(490.5332, 37.7333, 0,true,false,false,false,false,false,24)); // esquina

    casillas.emplace_back(new Casilla(565.9998, 37.7333, 0,true,false,false,false,true,false,25));
    casillas.emplace_back(new Casilla(641.4665, 37.7333, 0,true,false,false,false,false,false,26)); // esquina
}

void Tablero::crear_segunda_mitad() {
    casillas.emplace_back(new Casilla(641.4665, 113.1999, 1,false,false,true,false,false,true,27)); // comienzo rojo i = 27
    casillas.emplace_back(new Casilla(641.4665, 188.6666, 0,true,false,false,false,false,false,28));
    casillas.emplace_back(new Casilla(641.4665, 264.1333, 0,true,false,false,false,false,false,29));
    casillas.emplace_back(new Casilla(641.4665, 339.5999, 0,true,false,false,false,false,false,30));
    casillas.emplace_back(new Casilla(641.4665, 415.0666, 0,true,false,false,false,false,false,31)); // esquina

    casillas.emplace_back(new Casilla(716.9327, 490.5332, 0,true,false,false,false,false,false,32));
    casillas.emplace_back(new Casilla(792.3993, 490.5332, 0,true,false,false,false,false,false,33));
    casillas.emplace_back(new Casilla(867.8659, 490.5332, 0,true,false,false,false,false,false,34));
    casillas.emplace_back(new Casilla(943.3325, 490.5332, 0,true,false,false,false,false,false,35));
    casillas.emplace_back(new Casilla(1018.7991, 490.5332, 0,true,false,false,false,false,false,36));
    casillas.emplace_back(new Casilla(1094.2657, 490.5332, 0,true,false,false,false,false,false,37)); // esquina

    casillas.emplace_back(new Casilla(1094.2657, 565.9998, 0,true,false,false,false,true,false,38));
    casillas.emplace_back(new Casilla(1094.2657, 641.4665, 0,true,false,false,false,false,false,39)); // esquina

    casillas.emplace_back(new Casilla(1018.7991, 641.4665, 2,false,false,true,false,false,true,40)); // comienzo azul i = 40
    casillas.emplace_back(new Casilla(943.3325, 641.4665, 0,true,false,false,false,false,false,41));
    casillas.emplace_back(new Casilla(867.8659, 641.4665, 0,true,false,false,false,false,false,42));
    casillas.emplace_back(new Casilla(792.3993, 641.4665, 0,true,false,false,false,false,false,43));
    casillas.emplace_back(new Casilla(716.9327, 641.4665, 0,true,false,false,false,false,false,44)); // esquina

    casillas.emplace_back(new Casilla(641.4665, 716.9327, 0,true,false,false,false,false,false,45));
    casillas.emplace_back(new Casilla(641.4665, 792.3993, 0,true,false,false,false,false,false,46));
    casillas.emplace_back(new Casilla(641.4665, 867.8659, 0,true,false,false,false,false,false,47));
    casillas.emplace_back(new Casilla(641.4665, 943.3325, 0,true,false,false,false,false,false,48));
    casillas.emplace_back(new Casilla(641.4665, 1018.7991, 0,true,false,false,false,false,false,49));
    casillas.emplace_back(new Casilla(641.4665, 1094.2657, 0,true,false,false,false,false,false,50)); // esquina

    casillas.emplace_back(new Casilla(565.9998, 1094.2657, 0,true,false,false,false,true,false,51));
}

void Tablero::crear_recta_final_verde_amarilla() {
    /// Casillas Recta Final Amarillo
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 1018.7991, 4,false,false,true,false,false,true,0)); // primera casilla segura amarilla
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 943.3325, 4,false,false,true,false,false,false,1));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 867.8659, 4,false,false,true,false,false,false,2));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 792.3993, 4,false,false,true,false,false,false,3));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 716.9327, 4,false,false,true,false,false,false,4));
    recta_final_amarillo.emplace_back(new Casilla(565.9998, 641.4665, 4,false,false,true,true,false,false,5)); // casilla destino amarilla

    /// Casillas Recta Final Verde
    recta_final_verde.emplace_back(new Casilla(113.1999, 565.9998, 3,false,false,true,false,false,true,0)); // primera casilla segura verde
    recta_final_verde.emplace_back(new Casilla(188.6666, 565.9998, 3,false,false,true,false,false,false,1));
    recta_final_verde.emplace_back(new Casilla(264.1333, 565.9998, 3,false,false,true,false,false,false,2));
    recta_final_verde.emplace_back(new Casilla(339.5999, 565.9998, 3,false,false,true,false,false,false,3));
    recta_final_verde.emplace_back(new Casilla(415.0666, 565.9998, 3,false,false,true,false,false,false,4));
    recta_final_verde.emplace_back(new Casilla(490.5332, 565.9998, 3,false,false,true,true,false,false,5)); // casilla destino verde
}

void Tablero::crear_recta_final_rojo_azul() {
    /// Casillas Recta Final Rojo
    recta_final_rojo.emplace_back(new Casilla(565.9998, 113.1999, 1,false,false,true,false,false,true,0)); // primera casilla segura rojo
    recta_final_rojo.emplace_back(new Casilla(565.9998, 188.6666, 1,false,false,true,false,false,false,1));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 264.1333, 1,false,false,true,false,false,false,2));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 339.5999, 1,false,false,true,false,false,false,3));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 415.0666, 1,false,false,true,false,false,false,4));
    recta_final_rojo.emplace_back(new Casilla(565.9998, 490.5332, 1,false,false,true,true,false,false,5)); // casilla destino rojo

    /// Casillas Recta Final Azul
    recta_final_azul.emplace_back(new Casilla(1018.7991, 565.9998, 2,false,false,true,false,false,true,0)); // primera casilla segura azul
    recta_final_azul.emplace_back(new Casilla(943.3325, 565.9998, 2,false,false,true,false,false,false,1));
    recta_final_azul.emplace_back(new Casilla(867.8659, 565.9998, 2,false,false,true,false,false,false,2));
    recta_final_azul.emplace_back(new Casilla(792.3993, 565.9998, 2,false,false,true,false,false,false,3));
    recta_final_azul.emplace_back(new Casilla(716.9327, 565.9998, 2,false,false,true,false,false,false,4));
    recta_final_azul.emplace_back(new Casilla(641.4665, 565.9998, 2,false,false,true,true,false,false,5)); // casilla destino azul
}

void Tablero::crear_casas() {
    /// Casillas Casa Amarillo
    casas_amarillas.emplace_back(new Casilla(150.9333, 905.6, 4,false,true,true,false,false,false,0)); // izquierdo
    casas_amarillas.emplace_back(new Casilla(226.4, 839.1333, 4,false,true,true,false,false,false,1)); // arriba
    casas_amarillas.emplace_back(new Casilla(226.4, 981.0666, 4,false,true,true,false,false,false,2)); // abajo
    casas_amarillas.emplace_back(new Casilla(301.8666, 905.6, 4,false,true,true,false,false,false,3)); // derecha

    /// Casillas Casa Verde
    casas_verdes.emplace_back(new Casilla(150.9333, 226.4, 3,false,true,true,false,false,false,0)); // izquierdo
    casas_verdes.emplace_back(new Casilla(226.4, 150.9333, 3,false,true,true,false,false,false,1)); // arriba
    casas_verdes.emplace_back(new Casilla(226.4, 301.8666, 3,false,true,true,false,false,false,2)); // abajo
    casas_verdes.emplace_back(new Casilla(301.8666, 226.4, 3,false,true,true,false,false,false,3)); // derecha

    /// Casillas Casa Rojo
    casas_rojos.emplace_back(new Casilla(839.1333, 226.4, 1,false,true,true,false,false,false,0)); // izquierdo
    casas_rojos.emplace_back(new Casilla(905.6, 150.9333, 1,false,true,true,false,false,false,1)); // arriba
    casas_rojos.emplace_back(new Casilla(905.6, 301.8666, 1,false,true,true,false,false,false,2)); // abajo
    casas_rojos.emplace_back(new Casilla(981.0666, 226.4, 1,false,true,true,false,false,false,3)); // derecha

    /// Casillas Casa Azules
    casas_azules.emplace_back(new Casilla(839.1333, 905.6, 2,false,true,true,false,false,false,0)); // izquierdo
    casas_azules.emplace_back(new Casilla(905.6, 839.1333, 2,false,true,true,false,false,false,1)); // arriba
    casas_azules.emplace_back(new Casilla(905.6, 981.0666, 2,false,true,true,false,false,false,2)); // abajo
    casas_azules.emplace_back(new Casilla(981.0666, 905.6, 2,false,true,true,false,false,false,3)); // derecha
}

Tablero::Tablero() {

    /// Esto da error de malloc
//    thread t1(&Tablero::crear_primera_mitad, this);
//    thread t2(&Tablero::crear_segunda_mitad, this);
//    thread t3(&Tablero::crear_recta_final_verde_amarilla, this);
//    thread t4(&Tablero::crear_recta_final_rojo_azul, this);
//    thread t5(&Tablero::crear_casas, this);
//
//    t1.join();
//    t2.join();
//    t3.join();
//    t4.join();
//    t5.join();

    casilla_olimpo = new Casilla(-1000.0, -1000.0, 0, false, false, false, false, false, false, -1); /// aqui se van las fichas que llegaron a la casilla destino

    crear_primera_mitad();
    crear_segunda_mitad();
    crear_recta_final_verde_amarilla();
    crear_recta_final_rojo_azul();
    crear_casas();

    casillas_size = casillas.size();
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









