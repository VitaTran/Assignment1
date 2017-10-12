/*
 * File:    MagicWand.cpp
 * Author:  Vita Tran <vt14c@my.fsu.edu>
 *
 */

#include "MagicWand.h"


double MagicWand::hit(double armor){
	double damage = hitPoints - armor;
	if (armor < 10){
		damage *= 2;
	}
	if(damage < 0){
		return 0;
	}
	return damage;
}
