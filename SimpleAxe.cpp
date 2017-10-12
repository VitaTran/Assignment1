/*
 * File:    SimpleAxe.cpp
 * Author: Vita <vt14c@my.fsu.edu>
 *
 * Created on October 11, 2017, 4:22 PM
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
	double damage = hitPoints;
	if ((armor > 0) && (armor < 20)){
		damage = hitPoints - armor;
	}
	if (damage < 0){
		return 0;
	}
	return damage;
}
