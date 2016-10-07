#pragma once
#include "string.h"
#include "forest location.h"
#include "MyString.h"
#include "weapons.h"
class player
{
	Weapons* m_weapon;
	int m_hp;
	MyString m_name;

public:

	player(void) : m_weapon() {}
	player(MyString name, int hp);
	void setWeapon(Weapons* m_weapon);4
};