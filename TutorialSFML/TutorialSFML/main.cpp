#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			case sf::Event::JoystickConnected:
				std::cout << "Joystick is connected yay" << std::endl;

				break;

			case sf::Event::JoystickDisconnected:
				std::cout << "Joystick is disconnected :(" << std::endl;

				break;

			case sf::Event::JoystickButtonPressed:
				std::cout << "Joystick button has been pressed" << std::endl;

				break;

			case sf::Event::JoystickButtonReleased:
				std::cout << "Joystick button has been released" << std::endl;

				break;

			case sf::Event::JoystickMoved:
				std::cout << event.joystickMove.position << std::endl;

			}
		}

		window.clear( );

		window.display( );
	}
}