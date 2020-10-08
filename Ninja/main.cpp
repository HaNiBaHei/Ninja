#include <SFML/Graphics.hpp>
#include <iostream>

#include "Animation.h"
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Bloody Sword", sf::Style::Close | sf::Style::Default);
   
    

   
    sf::Texture playerTexture;
    playerTexture.loadFromFile("player/move.png");
   

    Player player(&playerTexture, sf::Vector2u(4, 2), 0.1f, 250.0f);

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
            
                
                break;
            }
            if (evnt.type == evnt.Closed)
            {
                window.close();
            }
        }
        
        
        player.Update(deltaTime);
        

        window.clear();

        
        player.Draw(window);
        window.display();
    }

	return 0;
}