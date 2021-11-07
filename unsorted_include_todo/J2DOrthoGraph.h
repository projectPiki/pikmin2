#ifndef _J2DORTHOGRAPH_H
#define _J2DORTHOGRAPH_H

struct J2DGrafContext {
	virtual void _00() = 0;                             // _00
	virtual void place(const JGeometry::TBox2<float>&); // _04
	virtual void place(float, float, float, float);     // _08
	virtual void _0C() = 0;                             // _0C
	virtual void setup2D();                             // _10
	virtual void setScissor();                          // _14

	// _00 VTBL
};

struct J2DOrthoGraph : public J2DGrafContext {
	virtual ~J2DOrthoGraph();                           // _00
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
