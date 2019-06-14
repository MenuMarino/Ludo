//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#include "Window.h"

Window::Window(const std::string& WindowName){
    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WindowName);
    texture.loadFromFile("/Users/gabrielspranger/Desktop/ludo-board.png");
    texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
    sprite.setTexture(texture);
}

void Window::openWindow() {
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
        // Update the window
        window.display();
    }
}
