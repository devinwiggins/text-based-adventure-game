#pragma once
#include "MyString.h"
#include "forest location.h"
#include <iostream>

class Weapons
{
	int WeaponID;
	MyString m_name;
public:
	Weapons() {}
	Weapons(MyString name, int id);
	virtual float Damage(void) const = 0;
	virtual int ammo(void) const = 0;
	
};
class subMachineGun : public Weapons
{
public:
	subMachineGun()
		: Weapons("SMG", 1) {}
	virtual float damage(void) const { return 9.5; }
	virtual int ammo(void) const { return 100; }
};
class handgun : public Weapons
{
	handgun()
		: Weapons("HandGun", 2) {}
	virtual float damage(void) const { return 14.5; }
	virtual int ammo(void) const { return 60; }
};
class bareHands : public Weapons
{
	bareHands()
		: Weapons ("Hands", 0) {}
	virtual float damage(void) const { return 7.0; }
	virtual int ammo(void) const { return -1; }

};
class rifle : public Weapons
{
	rifle()
		:Weapons ("Semi-Rifle", 3) {}
	virtual float damage(void) const { return 35.0; }
	virtual int ammo(void) const { return 20; }
};
class shotgun : public Weapons
{
	shotgun()
		: Weapons("Shotgun", 4) {}
	virtual float damage(void) const { return 25.0; }
	virtual int ammo(void) const { return 25; }
};
class GrenadeLauncher : public Weapons
{
	GrenadeLauncher()
		: Weapons("GrenadeLaucher", 5) {}
	virtual float damage(void) const { return 80; }
	virtual int ammo(void) const { return 90; }
};