#ifndef _J2DPERSPGRAPH_H
#define _J2DPERSPGRAPH_H

/*
    __vt__13J2DPerspGraph:
    .4byte 0
    .4byte 0
    .4byte __dt__13J2DPerspGraphFv
    .4byte "place__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
    .4byte place__14J2DGrafContextFffff
    .4byte setPort__13J2DPerspGraphFv
    .4byte setup2D__14J2DGrafContextFv
    .4byte setScissor__14J2DGrafContextFv
    .4byte getGrafType__13J2DPerspGraphCFv
    .4byte setLookat__13J2DPerspGraphFv
*/

struct J2DGrafContext {
	virtual ~J2DGrafContext();                          // _08
	virtual void place(const JGeometry::TBox2<float>&); // _0C
	virtual void place(float, float, float, float);     // _10
	virtual void setPort();                             // _14
	virtual void setup2D();                             // _18
	virtual void setScissor();                          // _1C

	// _00 VTBL
};

struct J2DPerspGraph : public J2DGrafContext {
	virtual ~J2DPerspGraph();         // _08
	virtual void setPort();           // _14
	virtual void getGrafType() const; // _20
	virtual void setLookat();         // _24

	// _00 VTBL
};

#endif
