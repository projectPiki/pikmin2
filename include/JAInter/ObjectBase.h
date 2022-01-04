#ifndef _JAINTER_OBJECTBASE_H
#define _JAINTER_OBJECTBASE_H

#include "JSystem/JKR/JKRDisposer.h"
#include "Vector3.h"
#include "types.h"

struct JAISound;

namespace JAInter {
struct ObjectBase : public JKRDisposer {
	virtual ~ObjectBase();                             // _00
	virtual void startSound(ulong, ulong);             // _04
	virtual void startSound(u8, ulong, ulong);      // _08
	virtual void startSound(JAISound**, ulong, ulong); // _0C
	virtual void stopAllSound();                       // _10
	virtual void stopSound(ulong, ulong);              // _14
	virtual void enable();                             // _18
	virtual void disable();                            // _1C
	virtual void dispose();                            // _20
	virtual void getFreeSoundHandlePointer();          // _24
	virtual void getUseSoundHandlePointer(ulong);      // _28
	virtual void handleStop(u8, ulong);             // _2C
	virtual void loop() = 0;                           // _30

	u8 _18;
	u8 m_handleCount;
	JAISound** m_sounds;
	i32 _20;
	Vector3f* _24;
};
} // namespace JAInter

#endif
