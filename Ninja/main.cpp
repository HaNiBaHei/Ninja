#include <SFML/Graphics.hpp>
#include <iostream>
#include "mainMenu.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Bloody Sword", sf::Style::Close | sf::Style::Default);
   
    mainMenu text(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {
        sf::Event evnt;
        while (window.pollEvent(evnt))
        {
            switch (evnt.type)
            {
            case sf::Event::KeyReleased:
                switch (evnt.key.code)
                {
                case sf::Keyboard::Up:
                    text.MoveUp();
                    break;

                case sf::Keyboard::Down:
                    text.MoveDown();
                    break;
                }
                
                break;
            }
            if (evnt.type == evnt.Closed)
            {
                window.close();
            }
        }

        window.clear();

        text.draw(window);

        window.display();
    }

	return 0;
}