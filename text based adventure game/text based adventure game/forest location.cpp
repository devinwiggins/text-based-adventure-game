#include <iostream>
#include <Windows.h>
#include "forest location.h"

area::area(bool nPath, bool ePath, bool sPath, bool wPath, bool enemy, bool hint, bool cabin, bool gameWin, bool weapon, bool ambush, bool gl, bool tree, const char* text)
{
	m_north_door = nPath;
	m_east_door = ePath;
	m_south_door = sPath;
	m_west_door = wPath;
	m_mob = enemy;
	m_on_screan_text = text;
	m_cabin = cabin;
	m_hint = hint;
	m_exit = gameWin;
	m_weapon = weapon;
	m_ambush = ambush;
	m_special_weapon = gl;
	m_white_birch = tree;
}
void area::map_struct()
{
	//north door, east door, south door, west door, enemy, gamewin, hint, cabin, weapon, ambush, special weapon, white birch tree, text
	area location01 = area{ 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, "" };
	area location02 = area{ 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, "" };
	area location03 = area{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	area location04 = area{ 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, "" };
	area location05 = area{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, "" };
	area location06 = area{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, "" };
	area location07 = area{ 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, "" };
	area location08 = area{ 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, "" };
	area location09 = area{ 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, "" };
	area location10 = area{ 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, "" };
	area location11 = area{ 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, "" };
	area location12 = area{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, "" };
	area location13 = area{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	area location14 = area{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	area location15 = area{ 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	area location16 = area{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	area location17 = area{ 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	area location18 = area{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	area location19 = area{ 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	area location20 = area{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, "" };
	area location21 = area{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, "" };
	area location22 = area{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	area location23 = area{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	area location24 = area{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	area location25 = area{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, "" };
	area location[5][5] =
	{
		{ location01, location02, location03, location04, location05 },
		{ location06, location07, location08, location09, location10 },
		{ location11, location12, location13, location14, location15 },
		{ location16, location17, location18, location19, location20 }
	};
}
void area::areaText()
{

}