#include "Warrior.h"

Warrior::Warrior()
{
    
}

int Warrior::getHealth()
{
    return this->health;
}
    
void Warrior::setHealth(int h)
{
    this->health = h;
}

int Warrior::getDamage()
{
    return this->damage;
}

void Warrior::setDamage(int d)
{
    this->damage = d;
}

int Warrior::getSpeed()
{
    return this->speed;
}

void Warrior::setSpeed(int s)
{
    this->speed = s;
}

int Warrior::getStamina()
{
    return this->stamina;
}

void Warrior::setStamina(int s)
{
    this->stamina = s;
}

string Warrior::getWeapon()
{
    return this->weapon;
}

void Warrior::setWeapon(string w)
{
    this->weapon = w; 
}

string Warrior::getname()
{
    return this->name;
}

void Warrior::setName(string n)
{
    this->name = n;
}

void Warrior::takeHit(int h)
{
    this->health -= h;
}