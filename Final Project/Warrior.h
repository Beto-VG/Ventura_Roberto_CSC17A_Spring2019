/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Warrior.h
 * Author: beto-
 *
 * Created on May 21, 2019, 5:10 PM
 */

#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>

using namespace std;

class Warrior 
{
protected:
    int health;
    int damage;
    int speed;
    int stamina;
    string weapon;
    string name;
public:
    Warrior();
    int getHealth();
    void setHealth(int);
    int getDamage();
    void setDamage(int);
    int getSpeed();
    void setSpeed(int);
    int getStamina();
    void setStamina(int);
    string getWeapon();
    void setWeapon(string);
    string getname();
    void setName(string);
    virtual void takeHit(int);
};



#endif /* WARRIOR_H */

