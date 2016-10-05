#include <iostream>
#include <Windows.h>
#include "player.h"
#include "mob.h"
#include "string.h"
#include "forest location.h"


int main()
{	
	char name[255];
	std::cin.getline();
//north door, east door, south door, west door, enemy, gamewin, hint, cabin, weapon, ambush, text
	area location01 = area{ 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, ""};
	area location02 = area{ 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, ""};
	area location03 = area{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, ""};
	area location04 = area{ 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, ""};
	area location05 = area{ 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, ""};
	area location06 = area{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, };
	area location07;
	area location08;
	area location09;
	area location10;
	area location11;
	area location12;
	area location13;
	area location14;
	area location15;
	area location16;
	area location17;
	area location18;
	area location19;
	area location20;
	area location[5][4] =
	{
	{location01, location02, location03, location04, location05,}
	{location06, location07, location08, location09, location10,}
	{location11, location12, location13, location14, location15,}
	{location16, location17, location18, location19, location20}
	};
}