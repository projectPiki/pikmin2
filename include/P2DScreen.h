#ifndef _P2DSCREEN_H
#define _P2DSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "types.h"
#include "CNode.h"
#include "Vector2.h"

struct Graphics;

namespace P2DScreen {
struct Node : public CNode {
	Node()
	    : _18(nullptr)
	{
	}

	virtual ~Node() { }                               // _08 (weak)
	virtual void update() { }                         // _10 (weak)
	virtual void draw(Graphics&, J2DGrafContext&) { } // _14 (weak)
	virtual void doInit() { }                         // _18 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	J2DPane* _18; // _18
};

struct CallBackNode : public Node {
	CallBackNode() { }

	virtual ~CallBackNode() { } // _08 (weak)
	virtual void update() { }   // _10 (weak)

	// _00     = VTBL
	// _00-_1C = Node
};

// Size: 0x138
struct Mgr : public J2DScreen {
	Mgr();

	virtual ~Mgr() { }                             // _08 (weak)
	virtual void update();                         // _30
	virtual void draw(Graphics&, J2DGrafContext&); // _9C

	J2DPane* addCallBack(u64, Node*);
	void addCallBackPane(J2DPane*, Node*);

	// _00      = VTBL
	// _00-_118 = J2DScreen
	Node _118;  // _118
	u8 _134[4]; // _134
};

// Size: 0x148
struct Mgr_tuning : public Mgr {
	Mgr_tuning();

	virtual ~Mgr_tuning() { }                      // _08 (weak)
	virtual void draw(Graphics&, J2DGrafContext&); // _9C

	static const f32 mstTuningTransX;
	static const f32 mstTuningTransY;

	inline void setXY(f32 x, f32 y)
	{
		m_someX = x + mstTuningTransX;
		m_someY = y + mstTuningTransY;
	}

	// _00      = VTBL
	// _00-_138 = Mgr
	f32 m_widthMaybe;  // _138
	f32 m_heightMaybe; // _13C
	f32 m_someX;       // _140
	f32 m_someY;       // _144
};
} // namespace P2DScreen

#endif
