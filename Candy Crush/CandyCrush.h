#pragma once
#include <SFML/Graphics.hpp>
const int columns = 9;
const int rows = 9;

 void RandomizeArr(int arr2[][columns], int upperbound, int lowerbound);
 void DrawSprites(int arr2[][columns],sf::Sprite Red,sf::Sprite blue , sf::Sprite green,sf::Sprite yellow,sf::Sprite orange,sf::RenderWindow &window,float &xpos, float &ypos);