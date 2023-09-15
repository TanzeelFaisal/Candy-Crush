#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(650, 650), "MyWindow", Style::Close | Style::Resize);
	Sprite sessumeshiyo;
	sessumeshiyo.setPosition(206.0f, 206.0f);
	Texture sessumeshiyoTexture;
	sessumeshiyoTexture.loadFromFile("Wrapped_yellow.png");
	sessumeshiyo.setTexture(sessumeshiyoTexture);

	/*Animation animation(&sessumeshiyoTexture, Vector2u(3, 9), 0.3f);

	float deltaTime = 0.0f;
	Clock clock;*/

	/*Vector2u TuxSize = sessumeshiyoTexture.getSize();
	TuxSize.x /= 3;
	TuxSize.y /= 9;*/

	/*sessumeshiyo.setTextureRect(IntRect(TuxSize.x * 2, TuxSize.y * 8, TuxSize.x, TuxSize.y));*/

	/*sessumeshiyo.setFillColor(Color::Cyan);
	sessumeshiyo.setOrigin(50.0f, 50.0f);*/

	while (window.isOpen())
	{
		/*deltaTime = clock.restart().asSeconds();*/

		Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window.close();
				break;
				/*case Event::Resized:
					cout << "New height : " << evnt.size.height << " New width : " << evnt.size.width << endl;
					break;
				case Event::TextEntered:
					if (evnt.text.unicode < 128)
					{
						printf("%c", evnt.text.unicode);
					}*/
			}
		}

		/*if (Keyboard::isKeyPressed(Keyboard::Key::A))
		{
			sessumeshiyo.move(-0.5f, 0.0f);
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::W))
		{
			sessumeshiyo.move(0.0f, -0.5f);
		}if (Keyboard::isKeyPressed(Keyboard::Key::S))
		{
			sessumeshiyo.move(0.0f, 0.5f);
		}if (Keyboard::isKeyPressed(Keyboard::Key::D))
		{
			sessumeshiyo.move(0.5f, 0.0f);
		}

		if (Mouse::isButtonPressed(Mouse::Button::Left))
		{
			Vector2i mousePos = Mouse::getPosition(window);
			sessumeshiyo.setPosition(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
		}*/

		/*animation.Update(0,deltaTime);
		sessumeshiyo.setTextureRect(animation.uvRect);*/

		window.clear(Color(150, 150, 150));
		window.draw(sessumeshiyo);
		window.display();
	}
}