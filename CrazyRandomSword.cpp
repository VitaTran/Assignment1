/*
 * File:   CrazyRandomSword.cpp
 * Author: Vita Tran <vt14c@my.fsu.edu>
 *
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
	srand( time( NULL ));
	int half = armor/2;
	int ignored = rand() % (half + 1);
	int effectivearmor = armor - ignored;
	double damage = hitPoints - effectivearmor;
	if (damage < 0){
		return 0;
	}
	return damage;
}	
