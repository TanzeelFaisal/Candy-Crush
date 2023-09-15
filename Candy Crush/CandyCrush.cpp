#include "CandyCrush.h"
#include "SFML/Graphics.hpp"
#include <iostream>
using namespace std;
#include <time.h>



void RandomizeArr(int arr2[][columns], int upperbound, int lowerbound) {
	int randomnumber{ 0 };

	srand(time(NULL));

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {


			randomnumber = lowerbound + rand() % ((upperbound + 1) - lowerbound);
			arr2[i][j] = randomnumber;
			while ((j >= 2 && arr2[i][j] == arr2[i][j - 1] && arr2[i][j] == arr2[i][j - 2]) || (i >= 2 && arr2[i][j] == arr2[i - 1][j] && arr2[i][j] == arr2[i - 2][j])) {
				randomnumber = lowerbound + rand() % ((upperbound + 1) - lowerbound);
				arr2[i][j] = randomnumber;
			}
		}
	}
}
void DrawSprites(int arr2[][columns], sf::Sprite Red, sf::Sprite blue, sf::Sprite green, sf::Sprite yellow, sf::Sprite orange, sf::RenderWindow &window,float &xpos ,float &ypos) {
	int z = 0;
	while (z <= 2) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				if (arr2[i][j] == 1)
				{
					window.draw(Red);
					Red.setPosition(xpos, ypos);
					xpos += 80;
				}

				else if (arr2[i][j] == 2)
				{
					window.draw(blue);
					blue.setPosition(xpos, ypos);
					xpos += 80;
				}

				else if (arr2[i][j] == 3)
				{
					window.draw(green);
					green.setPosition(xpos, ypos);
					xpos += 80;
				}

				else if (arr2[i][j] == 4)
				{
					window.draw(yellow);
					yellow.setPosition(xpos, ypos);
					xpos += 80;
				}

				else if (arr2[i][j] == 5)
				{
					window.draw(orange);
					orange.setPosition(xpos, ypos);
					xpos += 80;
				}
			}
			xpos = 0;
			ypos += 80;
		}

		ypos = 0;
		z = z + 1;
	}
}