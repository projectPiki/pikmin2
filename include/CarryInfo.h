#ifndef _CARRYINFO_H
#define _CARRYINFO_H

#include "types.h"
#include "Vector3.h"
struct CarryInfo {
	void disappear();
	void draw(struct Graphics&, struct CarryInfoParam&);
	void drawNumber(Graphics&, float, float, int, struct Color4&, float);
	void drawNumberPrim(Graphics&, float, float, int, Color4&, float);
	void update(const CarryInfoParam&);

	float _00;   // _00
	float _04;   // _04
	float _08;   // _08
	u8 m_hidden; // _0C
	u8 m_alpha;  // _0D
	u8 _0E;      // _0E
};

struct CarryInfoParam {
	u32 _00;               // _00
	Vector3f m_position;   // _04
	float _10;             // _10
	u8 _14;                // _14
	u8 _15;                // _15
	short _16;             // _16
	short _18;             // _18
	u32 _1C;               // _1C
	CarryInfo m_carryInfo; // _20
};

struct CarryInfoOwner {
	virtual void getCarryInfoParam(CarryInfoParam&) = 0; // _00

	// _00 VTBL
};

#endif
