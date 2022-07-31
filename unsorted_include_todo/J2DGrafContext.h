#ifndef _J2DGRAFCONTEXT_H
#define _J2DGRAFCONTEXT_H

/*
    __vt__14J2DGrafContext:
    .4byte 0
    .4byte 0
    .4byte __dt__14J2DGrafContextFv
    .4byte "place__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
    .4byte place__14J2DGrafContextFffff
    .4byte setPort__14J2DGrafContextFv
    .4byte setup2D__14J2DGrafContextFv
    .4byte setScissor__14J2DGrafContextFv
    .4byte getGrafType__14J2DGrafContextCFv
    .4byte setLookat__14J2DGrafContextFv
*/

struct J2DGrafContext {
	virtual ~J2DGrafContext();                          // _08 (weak)
	virtual void place(const JGeometry::TBox2<float>&); // _0C
	virtual void place(float, float, float, float);     // _10 (weak)
	virtual void setPort();                             // _14
	virtual void setup2D();                             // _18
	virtual void setScissor();                          // _1C
	virtual void getGrafType() const;                   // _20 (weak)
	virtual void setLookat();                           // _24 (weak)

	J2DGrafContext(float, float, float, float);
	void scissor(const JGeometry::TBox2<float>&);
	void setColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void setLineWidth(unsigned char);
	void fillBox(const JGeometry::TBox2<float>&);
	void drawFrame(const JGeometry::TBox2<float>&);
	void lineTo(JGeometry::TVec2<float>);
};

#endif
