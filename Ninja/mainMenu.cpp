#include "mainMenu.h"

mainMenu::mainMenu(float width, float height)
{
	if (!font.loadFromFile("font/arial.ttf"))
	{
		// handle error
	}

	text[0].setFont(font);
	text[0].setFillColor(sf::Color::Red);
	text[0].setString("Play");
	text[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEM +5 ) * 4));

	text[1].setFont(font);
	text[1].setFillColor(sf::Color::White);
	text[1].setString("Leaderboard");
	text[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEM +5 ) * 5));

	text[2].setFont(font);
	text[2].setFillColor(sf::Color::White);
	text[2].setString("Option");
	text[2].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEM +5 ) * 6));

	text[3].setFont(font);
	text[3].setFillColor(sf::Color::White);
	text[3].setString("Exit");
	text[3].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEM +5 ) * 7));
}

mainMenu::~mainMenu()
{

}

void mainMenu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEM; i++)
	{
		window.draw(text[i]);
	}
}

void mainMenu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		text[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		text[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void mainMenu::MoveDown()
{
	if (selectedItemIndex + 1 <  MAX_NUMBER_OF_ITEM)
	{
		text[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		text[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}
