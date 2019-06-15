//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include "Window.h"

Window::Window(const std::string& WindowName){
    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WindowName);
    texture.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Images/ludo-board.png");
    texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
    sprite.setTexture(texture);
}

void Window::openWindow(const sf::CircleShape &j1, const sf::CircleShape &j2) {
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        dadoTexture.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Images/dado.png");
        dadoTexture.create(256, 256);
        dado.setTexture(dadoTexture);
        dado.setPosition(-1000, -1000);

        window.clear();
        window.draw(sprite);
        window.draw(dado);
        window.draw(j1);
        window.draw(j2);
        // Update the window
        window.display();
    }
}

void Window::openWindow(const sf::CircleShape &j1, const sf::CircleShape &j2, const sf::CircleShape &j3) {
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        dadoTexture.loadFromFile("/Users/gabrielspranger/Desktop/POO II/Ludo/Images/dado.png");
        dadoTexture.create(256, 256 );
        dado.setTexture(dadoTexture);
        dado.setPosition(400, 400);

        window.clear();
        window.draw(sprite);
        window.draw(dado);
        window.draw(j1);
        window.draw(j2);
        window.draw(j3);
        // Update the window
        window.display();
    }
}

void Window::openWindow(const sf::CircleShape &j1, const sf::CircleShape &j2, const sf::CircleShape &j3,
                        const sf::CircleShape &j4) {
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.draw(j1);
        window.draw(j2);
        window.draw(j3);
        window.draw(j4);
        // Update the window
        window.display();
    }
}



