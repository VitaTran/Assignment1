/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "CrazyRandomSword.h"
#include "MagicWand.h"
#include "SimpleAxe.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if (name.compare("Crazy random sword") == 0) {
        return new CrazyRandomSword();
    }

    if (name.compare("Magic wand") == 0) {
        return new MagicWand();
    }

    if (name.compare("Simple axe") == 0) {
        return new SimpleAxe();
    }
    throw "Invalid weapon";
}
