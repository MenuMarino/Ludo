//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include <iostream>

#include "Window.h"

using namespace std;

int main() {



    Window *Ludo;

    Ludo = new Window("Ludo");

    Ludo->openWindow();

    delete Ludo;
    Ludo = nullptr;

    return 0;

}