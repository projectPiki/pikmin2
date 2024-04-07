#ifndef _P2DSCREEN_H
#define _P2DSCREEN_H

#include "JSystem/J2D/J2DPicture.h"
#include "types.h"
#include "CNode.h"
#include "Vector2.h"

struct Graphics;

namespace P2DScreen {
struct Node : public CNode {
	Node()
	    : mPane(nullptr)
	{
	}

	virtual ~Node() { }                                           // _08 (weak)
	virtual void update() { }                                     // _10 (weak)
	virtual void draw(Graphics& gfx, J2DGrafContext& context) { } // _14 (weak)
	virtual void doInit() { }                                     // _18 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	J2DPane* mPane; // _18
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

	virtual ~Mgr() { }                                         // _08 (weak)
	virtual void update();                                     // _30
	virtual void draw(Graphics& gfx, J2DGrafContext& context); // _9C

	J2DPane* addCallBack(u64 tag, Node* node);
	void addCallBackPane(J2DPane* pane, Node* node);

	// _00      = VTBL
	// _00-_118 = J2DScreen
	Node mScreenNode; // _118
	u8 _134[4];       // _134
};

// Size: 0x148
struct Mgr_tuning : public Mgr {
	Mgr_tuning();

	virtual ~Mgr_tuning() { }                                  // _08 (weak)
	virtual void draw(Graphics& gfx, J2DGrafContext& context); // _9C

	static const f32 mstTuningScaleX;
	static const f32 mstTuningScaleY;
	static const f32 mstTuningTransX;
	static const f32 mstTuningTransY;

	inline void setXY(f32 x, f32 y)
	{
		mTranslationX = x + mstTuningTransX;
		mTranslationY = y + mstTuningTransY;
	}

	inline void scaleScreen(f32 scale)
	{
		mScreenScaleX = scale * mstTuningScaleX;
		mScreenScaleY = scale * mstTuningScaleY;
	}

	inline void setBlendInfo(J2DBlendInfo info, u64* tags)
	{
		J2DBlend blend(info);
		while (true) {
			if (!*tags) {
				return;
			}
			J2DPictureEx* pane = static_cast<J2DPictureEx*>(search(*(tags++)));
			if (pane) {
				pane->getMaterial()->mPeBlock.setBlend(blend);
			}
		}
	}

	// _00      = VTBL
	// _00-_138 = Mgr
	f32 mScreenScaleX; // _138
	f32 mScreenScaleY; // _13C
	f32 mTranslationX; // _140
	f32 mTranslationY; // _144
};
} // namespace P2DScreen

#endif
