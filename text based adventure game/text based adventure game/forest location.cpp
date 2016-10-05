#include <iostream>
#include <Windows.h>
#include "forest location.h"

area::area(bool nPath, bool ePath, bool sPath, bool wPath, bool enemy, bool hint, bool cabin, bool gameWin, bool weapon, bool ambush, bool gl, const char* text)
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
}
void area::areaText()
{

}
