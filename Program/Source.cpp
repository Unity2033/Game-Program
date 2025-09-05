#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "League of Legend", sf::State::Fullscreen);

	// isOpen() : window�� ���� �ִ� �� Ȯ���ϴ� �Լ�
	while (window.isOpen())
	{
		// pollEvent() : �̺�Ʈ ť���� �̺�Ʈ�� �ϳ��� ������ ��ȯ�մϴ�.
		while (const std::optional event = window.pollEvent())
		{
			// std::optional : �̺�Ʈ�� ������ ��쿡�� ó���մϴ�.

			// is<sf::Event::Closed>() : �̺�Ʈ�� ���°� Closed���� Ȯ���մϴ�. 
			if (event->is<sf::Event::Closed>())
			{
				// close() : window�� �����մϴ�.
				window.close();
			}  
			else if (const auto * key = event->getIf<sf::Event::KeyPressed>())
			{
				// getIf<sf::Event::KeyPressed>() : �̺�Ʈ�� Ű������ Ű�� �ԷµǾ��� �� Ȯ���մϴ�.
				if (key->scancode == sf::Keyboard::Scancode::Escape)
				{
					window.close();
				}

			}
		}

		window.clear(sf::Color::Black);

		window.display();
	}

	return 0;
}