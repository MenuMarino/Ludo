//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include <iostream>
#include <string>
#include <unistd.h>

#include "Window.h"

using namespace std;

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

        ludo->openWindow(j1, j2, num_jugadores);


    } else if (num_jugadores == 3) {

        Jugador* j1 = new Jugador("Jugador 1", 4);
        Jugador* j2 = new Jugador("Jugador 2", 3);
        Jugador* j3 = new Jugador("Jugador 3", 1);

        ludo->openWindow(j1, j2, j3, num_jugadores);

    } else if (num_jugadores == 4) {

        Jugador* j1 = new Jugador("Jugador 1", 4);
        Jugador* j2 = new Jugador("Jugador 2", 3);
        Jugador* j3 = new Jugador("Jugador 3", 1);
        Jugador* j4 = new Jugador("Jugador 4", 2);

        ludo->openWindow(j1, j2, j3, j4, num_jugadores);

    }

    delete ludo;

    return 0;

}