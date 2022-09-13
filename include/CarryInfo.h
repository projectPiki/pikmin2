#ifndef _CARRYINFO_H
#define _CARRYINFO_H

#include "CNode.h"
#include "InfoList.h"
#include "JSystem/JUT/JUTTexture.h"
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
	virtual void getCarryInfoParam(CarryInfoParam&) = 0; // _08

	// _00 VTBL
};

/**
 * @size{0x34}
 */
struct PokoInfoOwner : public CarryInfoOwner, public CNode {
	// vtable 1 (CarryInfoOwner)
	virtual void getCarryInfoParam(CarryInfoParam&); // _08
	// vtable 2 (CNode)
	virtual ~PokoInfoOwner(); // _1C (thunked at _14) (weak)

	float _1C;           // _1C
	u32 _20;             // _20
	Vector3f m_position; // _24
	u32 _30;             // _30
};

/**
 * @size(0x58)
 */
struct CarryInfoList : public InfoListBase<CarryInfoOwner, CarryInfoList> {
	virtual ~CarryInfoList();     // _08 (weak)
	virtual void init();          // _0C
	virtual void update();        // _10
	virtual void draw(Graphics&); // _14
	virtual bool isFinish();      // _18 (weak)

	CarryInfoParam m_param; // _24
};

/**
 * @size(0xEC)
 */
struct CarryInfoMgr : public InfoMgr<CarryInfoOwner, CarryInfoList> {
	CarryInfoMgr(int);

	virtual ~CarryInfoMgr();                         // _08
	virtual void loadResource();                     // _0C
	virtual void update();                           // _10
	virtual void draw(Graphics&);                    // _14
	virtual CarryInfoList* regist(CarryInfoOwner*);  // _18 (weak)
	virtual CarryInfoList* scratch(CarryInfoOwner*); // _1C (weak)

	CarryInfoMgr* appear(CarryInfoOwner*);
	void appearPoko(const Vector3f&, int);
	void updatePokoInfoOwners();

	JUTTexture* m_texture; // _B8
	CNode _BC;             // _BC
	CNode _D4;             // _D4
};

extern CarryInfoMgr* carryInfoMgr;

#endif
