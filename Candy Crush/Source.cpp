#include <SFML/Graphics.hpp>
#include <iostream>
#include "CandyCrush.h"
using namespace std;
using namespace sf;
#include <time.h>



int main()
{
	float xpos = 0.0f;
	float ypos = 0.0f;

	int arr2[9][9];

	const int upperbound{ 5 };
	const int lowerbound{ 1 };

	RenderWindow window(VideoMode(1920, 1080), "Candy Crush", Style::Close | Style::Resize);

	Sprite background, red, blue, green, yellow, orange;

	Texture texture, back;
	back.loadFromFile("Back2.png");
	texture.loadFromFile("Sprites.png");
	red.setTexture(texture);
	blue.setTexture(texture);
	green.setTexture(texture);
	yellow.setTexture(texture);
	orange.setTexture(texture);

	red.setOrigin(Vector2f(-1150.0f, -170.0f));
	orange.setOrigin(Vector2f(-1150.0f, -170.0f));
	yellow.setOrigin(Vector2f(-1153.0f, -170.0f));
	green.setOrigin(Vector2f(-1150.0f, -170.0f));
	blue.setOrigin(Vector2f(-1150.0f, -170.0f));

	background.setTexture(back);
	red.setTextureRect(IntRect(18.0f, 200.0f, 65.0f, 70.0f));
	orange.setTextureRect(IntRect(113.0f, 200.0f, 65.0f, 70.0f));
	yellow.setTextureRect(IntRect(210.0f, 200.0f, 65.0f, 70.0f));
	green.setTextureRect(IntRect(300.0f, 200.0f, 65.0f, 70.0f));
	blue.setTextureRect(IntRect(395.0f, 200.0f, 65.0f, 70.0f));

	RandomizeArr(arr2, upperbound, lowerbound);

	while (window.isOpen())
	{
		Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::MouseButtonPressed:
				switch (evnt.key.code)
				{
				case Mouse::Left:
						Vector2i mousePos = Mouse::getPosition(window);

						/*cout << static_cast<float>(mousePos.x) << " " << static_cast<float>(mousePos.y) << endl;*/

						mousePos.x = static_cast<float>(mousePos.x) / 80;
						mousePos.y = static_cast<float>(mousePos.y) / 80;

						cout << mousePos.x - 13 << " " << mousePos.y - 1 << endl;
						break;
				}
				break;
			}
		}

		window.draw(background);

		DrawSprites(arr2, red, blue, green, yellow, orange, window, xpos, ypos);		

		/*sleep(seconds(5));*/

		//for (int i = 0; i < rows; i++) {
		//	for (int j = 0; j < columns; j++) {

		//		cout << arr2[i][j] << " ";
		//	}
		//	cout << endl;

		//}
		window.display();
	}
}