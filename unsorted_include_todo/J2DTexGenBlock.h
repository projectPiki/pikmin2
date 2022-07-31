#ifndef _J2DTEXGENBLOCK_H
#define _J2DTEXGENBLOCK_H

/*
    __vt__14J2DTexGenBlock:
    .4byte 0
    .4byte 0
    .4byte __dt__14J2DTexGenBlockFv
*/

struct J2DTexGenBlock {
	virtual ~J2DTexGenBlock(); // _08

	void initialize();
	void setGX();
	void setTexMtx(unsigned long, J2DTexMtx&);
	void getTexMtx(unsigned long, J2DTexMtx&);
};

#endif
