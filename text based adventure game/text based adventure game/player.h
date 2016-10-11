#pragma once
#include "weapons.h"
class enemy
{
	int m_damage;

public:
	enemy() {};
	enemy(int hp, int damage)
		: m_hp(hp), m_damage(damage) {}
	void attack(enemy& Player);
	int m_hp;
};
class player : enemy
{
	Weapons* m_weapon;
	
	int m_y_shift;
	int m_x_shift;
	char* m_name;
public:
	player(void) : m_weapon() { }
	void setWeapon(Weapons* weapon) { delete this->m_weapon; this->m_weapon = weapon; }
	Weapons* getWeapon(void) const { return this->m_weapon; }
	~player(void) { delete this->m_weapon; }

	player(char* name, int x, int y)
		: m_name(name), m_x_shift(x), m_y_shift(y) {}
	int player_game(MyString Path, Map Locations[][5]);
};