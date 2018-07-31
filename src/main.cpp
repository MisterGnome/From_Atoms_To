//
// Created by MG66 on 01.08.2018.
//

#include <SFML/Graphics.hpp>

using namespace sf;


int main()
{
	RenderWindow window(VideoMode(200, 200), "From_Atoms_To");
	CircleShape shape(100.f);
	shape.setFillColor(Color::Red);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}