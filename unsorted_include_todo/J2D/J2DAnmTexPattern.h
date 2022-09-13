#ifndef _J2DANMTEXPATTERN_H
#define _J2DANMTEXPATTERN_H

/*
    __vt__16J2DAnmTexPattern:
    .4byte 0
    .4byte 0
    .4byte __dt__16J2DAnmTexPatternFv
    .4byte searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen
*/

struct J2DAnmTexPattern {
	virtual ~J2DAnmTexPattern();                     // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	void getTexNo(unsigned short, unsigned short*) const;
	void getResTIMG(unsigned short) const;
	void getPalette(unsigned short) const;
};

#endif
