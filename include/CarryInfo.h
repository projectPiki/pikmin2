#ifndef _CARRYINFO_H
#define _CARRYINFO_H

#include "CNode.h"
#include "InfoList.h"
#include "JSystem/JUT/JUTTexture.h"
#include "types.h"
#include "Vector3.h"

#define MAX_POKOINFO 5

struct CarryInfoList;

enum cCarryInfoState {
	CINFO_Appear = 0,
	CINFO_1      = 1,
	CINFO_Hidden = 2,
};

struct CarryInfo {
	void disappear();
	void draw(struct Graphics&, struct CarryInfoParam&);
	void drawNumber(Graphics&, float, float, int, struct Color4&, float);
	void drawNumberPrim(Graphics&, float, float, int, Color4&, float);
	void update(const CarryInfoParam&);

	float m_growRate; // _00
	float m_Yoffset;  // _04
	float m_scale;    // _08
	u8 m_hidden;      // _0C
	u8 m_alpha;       // _0D
	u8 m_counter;     // _0E
};

struct CarryInfoParam {
	u32 m_useType;         // _00, 1 means color by scale, 0 means color by coded table
	Vector3f m_position;   // _04
	float m_yOffsetMax;    // _10
	u8 _14;                // _14
	u8 m_color;            // _15
	short m_value1;        // _16
	short m_value2;        // _18
	u32 m_isTopFirst;      // _1C, 0 means value1 on bottom, 1 means value2 on bottom
	CarryInfoList* m_list; // _20
	CarryInfo m_carryInfo; // _24
};

struct CarryInfoOwner {
	virtual void getCarryInfoParam(CarryInfoParam&) = 0; // _08

	// _00 VTBL
};

/**
 * @size{0x34}
 */
struct PokoInfoOwner : public CarryInfoOwner, public CNode {
	PokoInfoOwner();

	// vtable 1 (CarryInfoOwner)
	virtual void getCarryInfoParam(CarryInfoParam&); // _08
	// vtable 2 (CNode)
	virtual ~PokoInfoOwner(); // _1C (thunked at _14) (weak)

	float m_timer;         // _1C
	CarryInfoList* m_list; // _20
	Vector3f m_position;   // _24
	u32 m_value;           // _30
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

	CarryInfoList* appear(CarryInfoOwner*);
	void appearPoko(const Vector3f&, int);
	void updatePokoInfoOwners();

	JUTTexture* m_texture; // _B8
	CNode m_node1;         // _BC
	CNode m_poko_node;     // _D4
};

extern CarryInfoMgr* carryInfoMgr;

#endif
