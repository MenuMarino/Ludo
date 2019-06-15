//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include <iostream>
#include <string>
#include <unistd.h>

#include "Window.h"
#include "Dado.h"

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
        sf::CircleShape j1(20);
        j1.setFillColor(sf::Color::Yellow);
        j1.setPosition(sf::Vector2f(YELLOW_INITIAL_X_POS, YELLOW_INITIAL_Y_POS));
        j1.setOutlineThickness(4);
        j1.setOutlineColor(sf::Color::Black);

        sf::CircleShape j2(20);
        j2.setFillColor(sf::Color::Green);
        j2.setPosition(sf::Vector2f(GREEN_INITIAL_X_POS, GREEN_INITIAL_Y_POS));
        j2.setOutlineThickness(4);
        j2.setOutlineColor(sf::Color::Black);

        ludo->openWindow(j1, j2);

        Dado dado;

        for (int i = 0; i < 5; ++i) {
            if (i % 2 == 0) {
                ludo->dado.setPosition(1100, 100);
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                    sf::Vector2f clickCoordinate = ludo->window.mapPixelToCoords(sf::Mouse::getPosition(ludo->window));

                    sf::FloatRect bounds = ludo->dado.getGlobalBounds();

                    if (bounds.contains(clickCoordinate)) {
                        sf::Font dadoFont;
                        dadoFont.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/films.icedeart copy.ttf");

                        sf::Text dadoResult;
                        dadoResult.setCharacterSize(30); // in pixels, not points!
                        dadoResult.setFillColor(sf::Color::Black);
                        dadoResult.setStyle(sf::Text::Bold);
                        dadoResult.setString(to_string(dado.lanzar()));
                        dadoResult.setPosition(1100, 200);
                        ludo->window.draw(dadoResult);
                        usleep(2000000);
                        dadoResult.setColor(sf::Color::Transparent);
                        ludo->dado.setPosition(-1000, -1000);
                    }
                }
            } else {
                ludo->dado.setPosition(50, 50);
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                    sf::Vector2f clickCoordinate = ludo->window.mapPixelToCoords(sf::Mouse::getPosition(ludo->window));

                    sf::FloatRect bounds = ludo->dado.getGlobalBounds();

                    if (bounds.contains(clickCoordinate)) {
                        sf::Font dadoFont;
                        dadoFont.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/films.icedeart copy.ttf");

                        sf::Text dadoResult;
                        dadoResult.setCharacterSize(30); // in pixels, not points!
                        dadoResult.setFillColor(sf::Color::Black);
                        dadoResult.setStyle(sf::Text::Bold);
                        dadoResult.setString(to_string(dado.lanzar()));
                        dadoResult.setPosition(50, 100);
                        ludo->window.draw(dadoResult);
                        usleep(2000000);
                        dadoResult.setColor(sf::Color::Transparent);
                        ludo->dado.setPosition(-1000, -1000);
                    }
                }
            }
        }


    } else if (num_jugadores == 3) {
        sf::CircleShape j1(20);
        j1.setFillColor(sf::Color::Yellow);
        j1.setPosition(sf::Vector2f(YELLOW_INITIAL_X_POS, YELLOW_INITIAL_Y_POS));
        j1.setOutlineThickness(4);
        j1.setOutlineColor(sf::Color::Black);

        sf::CircleShape j2(20);
        j2.setFillColor(sf::Color::Green);
        j2.setPosition(sf::Vector2f(GREEN_INITIAL_X_POS, GREEN_INITIAL_Y_POS));
        j2.setOutlineThickness(4);
        j2.setOutlineColor(sf::Color::Black);

        sf::CircleShape j3(20);
        j3.setFillColor(sf::Color::Red);
        j3.setPosition(sf::Vector2f(RED_INITIAL_X_POS, RED_INITIAL_Y_POS));
        j3.setOutlineThickness(4);
        j3.setOutlineColor(sf::Color::Black);

        ludo->openWindow(j1, j2, j3);

    } else if (num_jugadores == 4) {
        sf::CircleShape j1(20);
        j1.setFillColor(sf::Color::Yellow);
        j1.setPosition(sf::Vector2f(YELLOW_INITIAL_X_POS, YELLOW_INITIAL_Y_POS));
        j1.setOutlineThickness(4);
        j1.setOutlineColor(sf::Color::Black);

        sf::CircleShape j2(20);
        j2.setFillColor(sf::Color::Green);
        j2.setPosition(sf::Vector2f(GREEN_INITIAL_X_POS, GREEN_INITIAL_Y_POS));
        j2.setOutlineThickness(4);
        j2.setOutlineColor(sf::Color::Black);

        sf::CircleShape j3(20);
        j3.setFillColor(sf::Color::Red);
        j3.setPosition(sf::Vector2f(RED_INITIAL_X_POS, RED_INITIAL_Y_POS));
        j3.setOutlineThickness(4);
        j3.setOutlineColor(sf::Color::Black);

        sf::CircleShape j4(20);
        j4.setFillColor(sf::Color::Blue);
        j4.setPosition(sf::Vector2f(BLUE_INITIAL_X_POS, BLUE_INITIAL_Y_POS));
        j4.setOutlineThickness(4);
        j4.setOutlineColor(sf::Color::Black);

        ludo->openWindow(j1, j2, j3, j4);

        Dado dado;

        for (int i = 0; i < 5; ++i) {
            if (i % 2 == 0) {
                ludo->dado.setPosition(1100, 100);
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                    sf::Vector2f clickCoordinate = ludo->window.mapPixelToCoords(sf::Mouse::getPosition(ludo->window));

                    sf::FloatRect bounds = ludo->dado.getGlobalBounds();

                    if (bounds.contains(clickCoordinate)) {
                        sf::Font dadoFont;
                        dadoFont.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/films.icedeart copy.ttf");

                        sf::Text dadoResult;
                        dadoResult.setCharacterSize(30); // in pixels, not points!
                        dadoResult.setFillColor(sf::Color::Black);
                        dadoResult.setStyle(sf::Text::Bold);
                        dadoResult.setString(to_string(dado.lanzar()));
                        dadoResult.setPosition(500, 500);
                        ludo->window.draw(dadoResult);
                        usleep(2000000);
                        dadoResult.setColor(sf::Color::Transparent);
                        ludo->dado.setPosition(-1000, -1000);
                    }
                }
            } else {
                ludo->dado.setPosition(50, 50);
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                    sf::Vector2f clickCoordinate = ludo->window.mapPixelToCoords(sf::Mouse::getPosition(ludo->window));

                    sf::FloatRect bounds = ludo->dado.getGlobalBounds();

                    if (bounds.contains(clickCoordinate)) {
                        sf::Font dadoFont;
                        dadoFont.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Fonts/films.icedeart copy.ttf");

                        sf::Text dadoResult;
                        dadoResult.setCharacterSize(30); // in pixels, not points!
                        dadoResult.setFillColor(sf::Color::Black);
                        dadoResult.setStyle(sf::Text::Bold);
                        dadoResult.setString(to_string(dado.lanzar()));
                        dadoResult.setPosition(500, 500);
                        ludo->window.draw(dadoResult);
                        usleep(2000000);
                        dadoResult.setColor(sf::Color::Transparent);
                        ludo->dado.setPosition(-1000, -1000);
                    }
                }
            }
        }


    }

    delete ludo;

    return 0;

}