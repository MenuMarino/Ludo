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

public:
    sf::RenderWindow window;
    sf::Sprite dado;
    sf::Texture dadoTexture;

    Window() = default;
    explicit Window(const std::string& WindowName);
    ~Window() = default;
    void openWindow(const sf::CircleShape& j1, const sf::CircleShape& j2);
    void openWindow(const sf::CircleShape& j1, const sf::CircleShape& j2, const sf::CircleShape& j3);
    void openWindow(const sf::CircleShape& j1, const sf::CircleShape& j2, const sf::CircleShape& j3, const sf::CircleShape& j4);
};


#endif //LUDO_WINDOW_H
