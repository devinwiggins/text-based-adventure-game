#pragma once
#include "weapons.h"
class player
{
	Weapons* m_weapon;
	int m_hp;
public:
	player(void) : m_weapon() { }
	player(int hp); 
	void setWeapon(Weapons* weapon) { delete this->m_weapon; this->m_weapon = weapon; }
	Weapons* getWeapon(void) const { return this->m_weapon; }
	~player(void) { delete this->m_weapon; }
};