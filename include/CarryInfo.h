#ifndef _CARRYINFO_H
#define _CARRYINFO_H

struct CarryInfo {
	void disappear();
	void draw(struct Graphics&, struct CarryInfoParam&);
	void drawNumber(Graphics&, float, float, int, struct Color4&, float);
	void drawNumberPrim(Graphics&, float, float, int, Color4&, float);
	void update(const CarryInfoParam&);
};

#endif
