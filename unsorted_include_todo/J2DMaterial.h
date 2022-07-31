#ifndef _J2DMATERIAL_H
#define _J2DMATERIAL_H

/*
    __vt__11J2DMaterial:
    .4byte 0
    .4byte 0
    .4byte __dt__11J2DMaterialFv
*/

struct J2DMaterial {
	virtual ~J2DMaterial(); // _08

	J2DMaterial();
	J2DMaterial(unsigned long);
	void setGX();
	void createTevBlock(int, bool);
	void createIndBlock(int, bool);
	void makeAnmPointer();
	void setAnimation(J2DAnmColor*);
	void setAnimation(J2DAnmTextureSRTKey*);
	void setAnimation(J2DAnmTexPattern*);
	void setAnimation(J2DAnmTevRegKey*);
	void animation();
};

#endif
