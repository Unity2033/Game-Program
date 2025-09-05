#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "League of Legend", sf::State::Fullscreen);

	// isOpen() : window가 열려 있는 지 확인하는 함수
	while (window.isOpen())
	{
		// pollEvent() : 이벤트 큐에서 이벤트를 하나씩 꺼내서 반환합니다.
		while (const std::optional event = window.pollEvent())
		{
			// std::optional : 이벤트가 존재할 경우에만 처리합니다.

			// is<sf::Event::Closed>() : 이벤트의 형태가 Closed인지 확인합니다. 
			if (event->is<sf::Event::Closed>())
			{
				// close() : window를 종료합니다.
				window.close();
			}  
			else if (const auto * key = event->getIf<sf::Event::KeyPressed>())
			{
				// getIf<sf::Event::KeyPressed>() : 이벤트의 키보드의 키가 입력되었는 지 확인합니다.
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