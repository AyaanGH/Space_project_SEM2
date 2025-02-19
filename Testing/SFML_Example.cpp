#include <SFML/Graphics.hpp>
#include <iostream>


struct Vector3{
	float x;
	float y;
	float z;
};

class Player{
public:
	Player() { health = 100; alive = true; position.x = 0.f; position.y = 0.0; position.z = 0.f;};
	~Player(){};

	int health;
	bool alive;
	Vector3 position;
};

void playerMove(Player* bob){
	bob->position.x += 0.1f;

}


int main(int argc, char **argv)
{

	Player* myPlayer = new Player;

	//Define window size
	sf::RenderWindow gameWindow(sf::VideoMode(800, 600, 32), "Space Game	", sf::Style::Close | sf::Style::Resize);
	sf::RectangleShape player1(sf::Vector2f(100.0f, 100.0f));
	player1.setFillColor(sf::Color::Green);
	//Main game loop
	while (gameWindow.isOpen())
	{
		// Get any events that have happened since last frame E.g mouse
		sf::Event check_events;

		//std::cout << check_events.MouseButtonPressed;

		//Loop runs whilst there are events in the queue
		while (gameWindow.pollEvent(check_events))
		{

			//Close if Event is close button
			if (check_events.type == sf::Event::Closed)
			{
				gameWindow.close();
			}

			// if ( check_events.type == sf::Event::TextEntered )
			// {
			// 	if (check_events.text.unicode < 128)
			// 	{
			// 		printf("%C",check_events.text.unicode);
			// 	}
			// }
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
		{

			player1.move(0.0f, -0.1f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
		{

			player1.move(0.0f, 0.1f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
		{

			player1.move(-0.1f, 0.0f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
		{

			player1.move(0.1f, 0.0f);
		}

		gameWindow.clear();
		gameWindow.draw(player1);
		gameWindow.display();
	}

	// gameWindow.clear();
	// gameWindow.display();

	return 0;
}
