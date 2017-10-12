/*
 * File:    MagicWand.h
 * Author:  Vita Tran <vt14c@my.fsu.edu>
 *
 * Created on October 11, 2017, 10:34 PM
 */

#include <string>
#include "Weapon.h"

#ifndef MAGICWAND_H
#define MAGICWAND_H

/**
 * Defines the behavior of a new weapon: the magic wand (hitpoint = 25, if armor is between 0-10 then it hits double)
 */
class MagicWand : public Weapon {
public:

	MagicWand() : Weapon("Magic wand", 25.0) {
	}
	virtual ~MagicWand() {};
	virtual double hit(double armor);

};

#endif /* MAGICWAND_H */
