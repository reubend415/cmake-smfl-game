#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>


class Player {
    const int PLAYER_SPEED = 3;
    const sf::Color DEFAULT_COLOR = sf::Color(80, 0, 0);
    sf::CircleShape sprite;
    bool w_pressed = false;
    bool a_pressed = false;
    bool s_pressed = false;
    bool d_pressed = false;

public:
    Player(sf::RenderWindow& window) : sprite(sf::CircleShape(100)) {
        sprite.setPosition(((window.getSize().x / 2) - 100), ((window.getSize().y / 2) - 100));
        sprite.setFillColor(DEFAULT_COLOR);
    }

    void handleKeyPress(sf::Keyboard::Scancode scancode);
    void handleKeyRelease(sf::Keyboard::Scancode scancode);
    void handlePlayerMove();
    void draw(sf::RenderWindow& window);

};

#endif