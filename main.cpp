//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include <iostream>

#include "Window.h"

using namespace std;

int preguntar_jugadores(int& num_jugadores) {
    cerr << "¡BIENVENIDO A LUDO!" << endl;

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

    ludo->openWindow();

    delete ludo;

    return 0;

}