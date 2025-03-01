#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
	int windowWidth = 400;
	int windowHeight = 800;
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Apocalypse");

	float rectWidth = 20.0f;
	float rectHeight = 10.0f;
	float rectPositionX = 10.0f;
	float rectPositionY = 50.0f;

	sf::RectangleShape shape({ rectWidth, rectHeight });
	shape.setFillColor(sf::Color::Red);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}
		rectPositionX += 0.25f;
		if (rectPositionX > windowWidth)
		{
			rectPositionX = 0;
		}
		shape.setPosition({ rectPositionX, rectPositionY });

		window.clear();
		window.draw(shape); 
		window.display();
	}
}