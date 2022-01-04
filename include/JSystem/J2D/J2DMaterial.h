#ifndef _JSYSTEM_J2D_J2DMATERIAL_H
#define _JSYSTEM_J2D_J2DMATERIAL_H

#include "types.h"

struct J2DAnmColor;
struct J2DAnmTevRegKey;
struct J2DAnmTextureSRTKey;
struct J2DAnmTexPattern;
struct J2DIndBlock;
struct J2DTevBlock;

struct J2DTexCoord {
	J2DTexCoord();
};

struct J2DColorChan {
	J2DColorChan();
};

struct J2DMaterial {
	J2DMaterial();
	J2DMaterial(u32);

	void animation();
	J2DTevBlock* createTevBlock(int, bool);
	J2DIndBlock* createIndBlock(int, bool);
	void makeAnmPointer();
	void setAnimation(J2DAnmColor*);
	void setAnimation(J2DAnmTevRegKey*);
	void setAnimation(J2DAnmTextureSRTKey*);
	void setAnimation(J2DAnmTexPattern*);
	void setGX();

	virtual ~J2DMaterial(); // _00

	// _00 VTBL
};

#endif
