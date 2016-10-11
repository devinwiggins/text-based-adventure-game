#pragma once
#include <iostream>
#include "player.h"
class Map
{
public:
	Map() {};
	Map(bool nPath, bool ePath, bool sPath, bool wPath, bool enemy, bool exit, bool hint, bool cabin, bool weapon, bool ambush, bool gl, bool tree, const char*);
	void map_struct();
	void LocationText();
	bool m_north_door;
	bool m_east_door;
	bool m_south_door;
	bool m_west_door;
	bool m_mob;
	const char* m_on_screan_text;
	bool m_cabin;
	bool m_hint;
	bool m_exit;
	bool m_weapon;
	bool m_ambush;
	bool m_special_weapon;
	bool m_white_birch;
};