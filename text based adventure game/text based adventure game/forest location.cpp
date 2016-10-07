#include <iostream>
#include <Windows.h>
#include "forest location.h"

Map::Map(bool nPath, bool ePath, bool sPath, bool wPath, bool enemy, bool hint, bool cabin, bool gameWin, bool weapon, bool ambush, bool gl, bool tree, const char* text)
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
void Map::map_struct()
{
	//north door, east door, south door, west door, enemy, gamewin, hint, cabin, weapon, ambush, special weapon, white birch tree, text
	Map location01 = Map{ 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, "" };
	Map location02 = Map{ 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, "" };
	Map location03 = Map{ 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location04 = Map{ 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, "" };
	Map location05 = Map{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, "" };
	Map location06 = Map{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, "" };
	Map location07 = Map{ 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, "" };
	Map location08 = Map{ 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, "" };
	Map location09 = Map{ 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, "" };
	Map location10 = Map{ 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, "" };
	Map location11 = Map{ 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, "" };
	Map location12 = Map{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, "" };
	Map location13 = Map{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location14 = Map{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location15 = Map{ 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, "" };
	Map location16 = Map{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location17 = Map{ 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location18 = Map{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location19 = Map{ 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location20 = Map{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, "" };
	Map location21 = Map{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, "" };
	Map location22 = Map{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location23 = Map{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location24 = Map{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "" };
	Map location25 = Map{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, "" };
	Map location[5][5] =
	{
		{ location01, location02, location03, location04, location05 },
		{ location06, location07, location08, location09, location10 },
		{ location11, location12, location13, location14, location15 },
		{ location16, location17, location18, location19, location20 }
	};
}
void Map::LocationText()
{

}