#ifndef _GAME_CPLATE_H
#define _GAME_CPLATE_H

#include "Container.h"
#include "Game/Creature.h"
#include "Game/Piki.h"
#include "Game/SlotChangeListener.h"
#include "SysShape/KeyEvent.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "types.h"

namespace Game {
// @size{0x114}
struct CPlate : public Container<Creature> {
	// @size{0x20}
	struct Slot {
		Slot()
		{
			mCreature         = nullptr;
			mListener         = nullptr;
			mRelativePosition = Vector3f(0.0f);
			mPosition         = Vector3f(0.0f);
		}

		Vector3f mRelativePosition;    // _00
		Vector3f mPosition;            // _0C
		Creature* mCreature;           // _18
		SlotChangeListener* mListener; // _1C
	};

	// @fabricatedName
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "Navi::Parms")
		    , mStartingOffset(this, 'p000', "先頭オフセット", 17.5f, 0.0f, 100.0f)          // 'starting offset'
		    , mLengthLimit(this, 'p001', "長さリミット", 130.0f, 10.0f, 1000.0f)            // 'length limit'
		    , mMaxPositionSize(this, 'p002', "ポジションの大きさ(最大)", 6.0f, 1.0f, 50.0f) // 'position size (max)'
		{
		}
		Parm<f32> mStartingOffset;  // _0C
		Parm<f32> mLengthLimit;     // _34
		Parm<f32> mMaxPositionSize; // _5C
	};

	CPlate(int);

	virtual ~CPlate() { }         // _08 (weak)
	virtual void* getNext(void*); // _14
	virtual void* getStart();     // _18
	virtual void* getEnd();       // _1C
	virtual Creature* get(void*); // _20

	void changeFlower(Creature*);
	void directDraw(Graphics&);
	int getSlot(Creature*, SlotChangeListener*, bool);
	void getSlotPosition(int, Vector3f&);
	void rearrangeSlot(Vector3f&, f32, Vector3f&);
	void refresh(int, f32);
	void refreshSlot(f32);
	void releaseSlot(Creature*, int);
	void setPos(Vector3f&, f32, Vector3f&, f32);
	void setPosGray(Vector3f&, f32, Vector3f&, f32);
	void setPosNeutral(Vector3f&, f32, Vector3f&, f32);
	void shrink();
	void sortByColor(Creature*, int);
	void swapSlot(int, int);
	void update();
	void updateShrink();
	bool validSlot(int);

	// _00     = VTBL
	// _00-_1C = Container
	Parms mParms;                                // _1C
	Vector3f mMaxPositionOffset;                 // _A4
	f32 mBaseRadius;                             // _B0
	f32 mMoveStickRadius;                        // _B4
	f32 mMaxRadius;                              // _B8
	int mActiveGroupSize;                        // _BC
	Slot* mSlots;                                // _C0
	int mSlotLimit;                              // _C4
	int mSlotCount;                              // _C8
	Vector3f mPosition;                          // _CC
	Vector3f mBasePositionOffset;                // _D8
	Vector3f mVelocity;                          // _E4
	f32 mAngle;                                  // _F0
	Vector3f mUnused;                            // _F4
	u8 mShrinkTimer;                             // _100
	int mHappaStageCounts[PikiGrowthStageCount]; // _104, indexed by happakind?
	u8 _110;                                     // _110
	u8 mIsPositionUnset;                         // _111
};
} // namespace Game

#endif
