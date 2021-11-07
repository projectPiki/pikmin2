#ifndef _J2DGRAFCONTEXT_H
#define _J2DGRAFCONTEXT_H

struct J2DGrafContext {
	virtual ~J2DGrafContext();                          // _00
	virtual void place(const JGeometry::TBox2<float>&); // _04
	virtual void place(float, float, float, float);     // _08
	virtual void setPort();                             // _0C
	virtual void setup2D();                             // _10
	virtual void setScissor();                          // _14
	virtual void getGrafType() const;                   // _18
	virtual void setLookat();                           // _1C

	// _00 VTBL
};

#endif
