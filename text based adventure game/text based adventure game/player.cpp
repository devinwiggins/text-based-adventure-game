#include "player.h"

player::player(MyString name, int hp)
{
	m_name = name;
	m_hp = hp;
}

void player::setWeapon(Weapons * weapon)
{
	delete this->m_weapon;
	this->m_weapon = weapon;
}