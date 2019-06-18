//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include <iostream>
#include <string>
#include <unistd.h>

#include "Window.h"

using namespace std;

const double YELLOW_INITIAL_X_POS = 490.5332-20;
const double YELLOW_INITIAL_Y_POS = 1018.7991-20;

const double GREEN_INITIAL_X_POS = 113.1999-20;
const double GREEN_INITIAL_Y_POS = 490.5332-20;

const double RED_INITIAL_X_POS = 641.4665-20;
const double RED_INITIAL_Y_POS = 113.1999-20;

const double BLUE_INITIAL_X_POS = 1018.7991-20;
const double BLUE_INITIAL_Y_POS = 641.4665-20;

int preguntar_jugadores(int& num_jugadores) {
    cout << "¡BIENVENIDO A LUDO!" << endl;

    do {
        cout << "Cuántos jugadores desea?" << endl;
        cin >> num_jugadores;
    } while (num_jugadores < 2 || num_jugadores > 4);

    return num_jugadores;
}

int main() {

    int num_jugadores = preguntar_jugadores(num_jugadores);

    Window* ludo;
    ludo = new Window("Ludo");

    if (num_jugadores == 2) {

        Jugador j1("Jugador 1", 4, nullptr, YELLOW_INITIAL_X_POS, YELLOW_INITIAL_Y_POS);
        Jugador j2("Jugador 2", 3, nullptr, GREEN_INITIAL_X_POS, GREEN_INITIAL_Y_POS);

        ludo->openWindow(j1, j2);


    } else if (num_jugadores == 3) {

        Jugador j1("Jugador 1", 4, nullptr, YELLOW_INITIAL_X_POS, YELLOW_INITIAL_Y_POS);
        Jugador j2("Jugador 2", 3, nullptr, GREEN_INITIAL_X_POS, GREEN_INITIAL_Y_POS);
        Jugador j3("Jugador 3", 1, nullptr, RED_INITIAL_X_POS, RED_INITIAL_Y_POS);

        ludo->openWindow(j1, j2, j3);

    } else if (num_jugadores == 4) {

        Jugador j1("Jugador 1", 4, nullptr, YELLOW_INITIAL_X_POS, YELLOW_INITIAL_Y_POS);
        Jugador j2("Jugador 2", 3, nullptr, GREEN_INITIAL_X_POS, GREEN_INITIAL_Y_POS);
        Jugador j3("Jugador 3", 1, nullptr, RED_INITIAL_X_POS, RED_INITIAL_Y_POS);
        Jugador j4("Jugador 4", 2, nullptr, BLUE_INITIAL_X_POS, BLUE_INITIAL_Y_POS);

        ludo->openWindow(j1, j2, j3, j4);

    }

    delete ludo;

    return 0;

}