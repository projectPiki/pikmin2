#ifndef _P2DSCREEN_H
#define _P2DSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "types.h"
#include "CNode.h"

struct Graphics;

namespace P2DScreen {
struct Node : public CNode {
	Node()
	    : CNode()
	{
		_18 = nullptr;
	}

	virtual ~Node() { }                               // _08 (weak)
	virtual void update() { }                         // _10 (weak)
	virtual void draw(Graphics&, J2DGrafContext&) { } // _14 (weak)
	virtual void doInit() { }                         // _18 (weak)

	J2DPane* _18; // _18
};

struct CallBackNode : public Node {
	/**
	 * @reifiedAddress{80309DB0}
	 * @reifiedFile{plugProjectOgawaU/ogCallBackMessage.cpp}
	 */
	CallBackNode()
	    : Node()
	{
	}
	virtual ~CallBackNode(); // _00
	virtual void update();   // _08
};

// Size: 0x138
struct Mgr : public J2DScreen {
	Mgr();

	virtual ~Mgr() { }                             // _00
	virtual void update();                         // _28
	virtual void draw(Graphics&, J2DGrafContext&); // _94

	J2DPane* addCallBack(u64, Node*);
	void addCallBackPane(J2DPane*, Node*);

	Node _118;  // _118
	u8 _134[4]; // _134
};

// Size: 0x148
struct Mgr_tuning : public Mgr {
	Mgr_tuning();

	virtual ~Mgr_tuning() { }                      // _00
	virtual void draw(Graphics&, J2DGrafContext&); // _94

	float m_widthMaybe;  // _138
	float m_heightMaybe; // _13C
	float m_someX;       // _140
	float m_someY;       // _144
};
} // namespace P2DScreen

#endif
