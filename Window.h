//
// Created by Gabriel Spranger Rojas on 2019-06-13.
//

#ifndef LUDO_WINDOW_H
#define LUDO_WINDOW_H

#include <SFML/Graphics.hpp>

class Window {
    const int WINDOW_WIDTH = 1132;
    const int WINDOW_HEIGHT = 1132;
    sf::Texture texture;
    sf::Sprite sprite;
    sf::RenderWindow window;

public:
    Window(){};
    Window(const std::string& WindowName);
    ~Window();
    void openWindow();
};


#endif //LUDO_WINDOW_H
