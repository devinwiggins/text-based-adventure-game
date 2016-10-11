#include "player.h"

void enemy::attack(enemy& Player)
{
	this->m_hp -= rand() % Player.m_damage + 5;
	Player.m_hp -= rand() % this->m_damage + 5;
}

int player::player_game(MyString Input, Map Locations[][5])
{
	Input.ToLower();
	if (Input.findSub("north") == true && Locations[m_y_shift][m_x_shift].m_north_door == true)
	{
		m_y_shift--;
	}
	if (Input.findSub("east") == true && Locations[m_y_shift][m_x_shift].m_east_door == true)
	{
		m_x_shift++;
	}
	if (Input.findSub("south") == true && Locations[m_y_shift][m_x_shift].m_south_door == true)
	{
		m_y_shift--;
	}
	if (Input.findSub("west") == true && Locations[m_y_shift][m_x_shift].m_west_door == true)
	{
		m_x_shift--;
	}
	if (Input.findSub("take") == true && Locations[)
}