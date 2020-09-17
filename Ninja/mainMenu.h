#pragma once
#include <SFML/Graphics.hpp>
#define MAX_NUMBER_OF_ITEM 4

class mainMenu
{
public:
	mainMenu(float width, float height);
	~mainMenu();

	void draw(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();

private:
	int selectedItemIndex;
	sf::Font font;
	sf::Text text[MAX_NUMBER_OF_ITEM];
};

