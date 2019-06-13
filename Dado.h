#ifndef LUDO_DADO_H
#define LUDO_DADO_H

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Dado {
    Dado() = default;

    int lanzar() {
        return  (rand() % 6)+1;
    }
};

#endif

