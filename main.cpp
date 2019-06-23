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

        Jugador* j1 = new Jugador("Jugador 1", 4);
        Jugador* j2 = new Jugador("Jugador 2", 3);

        vector<Jugador*> jugadores = {j1, j2};

        ludo->openWindow(jugadores, num_jugadores);


    } else if (num_jugadores == 3) {

        Jugador* j1 = new Jugador("Jugador 1", 4);
        Jugador* j2 = new Jugador("Jugador 2", 3);
        Jugador* j3 = new Jugador("Jugador 3", 1);

        vector<Jugador*> jugadores = {j1, j2, j3};

        ludo->openWindow(jugadores, num_jugadores);

    } else if (num_jugadores == 4) {

        Jugador* j1 = new Jugador("Jugador 1", 4);
        Jugador* j2 = new Jugador("Jugador 2", 3);
        Jugador* j3 = new Jugador("Jugador 3", 1);
        Jugador* j4 = new Jugador("Jugador 4", 2);

        vector<Jugador*> jugadores = {j1, j2, j3, j4};

        ludo->openWindow(jugadores, num_jugadores);

    }

    delete ludo;

    return 0;

}