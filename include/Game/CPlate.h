#ifndef _GAME_CPLATE_H
#define _GAME_CPLATE_H

#include "Container.h"
#include "Game/Creature.h"
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
		Slot();

		Vector3f _00;         // _00
		Vector3f _0C;         // _0C
		Creature* m_creature; // _18
		u32 _1C;              // _1C
	};

	// @fabricatedName
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "Navi::Parms")
		    , p000(this, 'p000', "先�?�オフセ�?�?", 17.5f, 0.0f, 100.0f)
		    , p001(this, 'p001', "長さリミッ�?", 130.0f, 10.0f, 1000.0f)
		    , p002(this, 'p002', "ポジションの大きさ(最大)", 6.0f, 1.0f, 50.0f)
		{
		}
		Parm<float> p000; // _0C
		Parm<float> p001; // _34
		Parm<float> p002; // _5C
	};

	CPlate(int);

	virtual ~CPlate();            // _08 (weak)
	virtual void* getNext(void*); // _14
	virtual void* getStart();     // _18
	virtual void* getEnd();       // _1C
	virtual Creature* get(void*); // _20

	void changeFlower(Creature*);
	void directDraw(Graphics&);
	int getSlot(Creature*, SlotChangeListener*, bool);
	void getSlotPosition(int, Vector3f&);
	void rearrangeSlot(Vector3f&, float, Vector3f&);
	void refresh(int, float);
	void refreshSlot(float);
	void releaseSlot(Creature*, int);
	void setPos(Vector3f&, float, Vector3f&, float);
	void setPosGray(Vector3f&, float, Vector3f&, float);
	void setPosNeutral(Vector3f&, float, Vector3f&, float);
	void shrink();
	void sortByColor(Creature*, int);
	void swapSlot(int, int);
	void update();
	void updateShrink();
	bool validSlot(int);

	Parms m_parms;       // _1C
	Vector3f _A4;        // _A4
	float _B0;           // _B0
	float _B4;           // _B4
	float _B8;           // _B8
	int _BC;             // _BC
	Slot* m_slots;       // _C0
	int m_slotLimit;     // _C4
	int m_slotCount;     // _C8
	Vector3f m_position; // _CC
	Vector3f _D8;        // _D8
	Vector3f m_velocity; // _E4
	float _F0;           // _F0
	float _F4;           // _F4
	float _F8;           // _F8
	float _FC;           // _FC
	u8 _100;             // _100
	u32* _104;           // _104
	u32 _108;            // _108
	u32 _10C;            // _10C
	u8 _110;             // _110
	u8 _111;             // _111
};
} // namespace Game

#endif
