#ifndef _GAME_PELLET_H
#define _GAME_PELLET_H

#include "CarryInfo.h"
#include "Game/DynCreature.h"
#include "SysShape/MotionListener.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
/**
 * @size{0x28}
 */
struct PelletInitArg : CreatureInitArg {
	/**
	 * @reifiedAddress{80107C2C}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "PelletInitArg";
	}

	char* m_textIdentifier; // _08
	int _0C;                // _0C
	int _10;                // _10
	short _14;              // _14
	u8 m_pelletType;        // _16
	u8 _17;                 // _17
	u32 _18;                // _18
	u8 _1C;                 // _1C
	u8 _1D;                 // _1D
	u8 _1E;                 // _1E
	u8 _1F;                 // _1F
	int m_minCarriers;      // _20
	int m_maxCarriers;      // _24
};

struct Pellet : public DynCreature,
                public SysShape::MotionListener,
                public CarryInfoOwner {
	virtual Vector3f getPosition()
	{
		// return _3AC;
	}

	// vtable 3
	/**
	 * @reifiedAddress{80105E68}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual void createKiraEffect(Vector3f&) { } // _3C

	u8 _00[0x458]; // _00
};
} // namespace Game

#endif
