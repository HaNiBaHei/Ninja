#include <SFML/Graphics.hpp>
#include <iostream>
#include "mainMenu.h"
#include "Animation.h"
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Bloody Sword", sf::Style::Close | sf::Style::Default);
   
    mainMenu text(window.getSize().x, window.getSize().y);

   
    sf::Texture playerTexture;
    playerTexture.loadFromFile("player/runright.png");
   

    Player player(&playerTexture, sf::Vector2u(4, 3), 0.2f, 100.0f);

    float deltaTime = 0.0f;
    sf::Clock clock;


    while (window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();

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
        
        
        player.Update(deltaTime);
        

        window.clear();

        text.draw(window);
        player.Draw(window);
        window.display();
    }

	return 0;
}