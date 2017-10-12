/*
 * File:    SimpleAxe.h
 * Author: Vita <vt14c@my.fsu.edu>
 * 
 * Created on October 11, 2017, 4:09 PM
 */
#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

#include <string>
#include "Weapon.h"


/**
 * Defines the behavior of a simple axe (hitpoint = 60, if armor is > 0 and < 20 the axe will ignore all armor points)
 *
 */
class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple axe", 60.0) {
	}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);
};

#endif /* SIMPLEAXE_H */
