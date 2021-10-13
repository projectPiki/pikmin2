#ifndef _CARRYINFOMGR_H
#define _CARRYINFOMGR_H

#include "Vector3.h"

struct CarryInfoMgr {
	CarryInfoMgr(int);
	~CarryInfoMgr();

	void appear(struct CarryInfoOwner*);
	void appearPoko(const Vector3f&, int);
	void draw(struct Graphics&);
	void loadResource();
	void regist(CarryInfoOwner*);
	void scratch(CarryInfoOwner*);
	void update();
	void updatePokoInfoOwners();
};

#endif
