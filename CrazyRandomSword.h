/*
 * File:   CrazyRandomSword.h
 * Author: Vita Tran <vt14c@my.fsu.edu>
 *
 * Created on October 11, 2017, 4:36 PM
 */
#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

#include <string> 
#include <time.h>
#include <cstdlib>
#include "Weapon.h"


/**
 * Defines the behavior of a crazy random sword (random hitpoints from 10-100, ignores random number of armor points from 0-half of armor the weapon hits)
 */

class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy random sword", 1) {
		srand( time( NULL ) );
        	hitPoints = rand() % 91 + 10;
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */ 
