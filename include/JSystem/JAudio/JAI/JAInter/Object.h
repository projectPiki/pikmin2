#ifndef _JSYSTEM_JAI_JAINTER_OBJECT_H
#define _JSYSTEM_JAI_JAINTER_OBJECT_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "Vector3.h"
#include "types.h"

#define JAI_NULL_HANDLE_ID  (0xFF)
#define IsJAIHandleInUse(i) (mUseHandleFlag & (1 << i))

struct Vec;
struct JKRHeap;

namespace JAInter {
struct ObjectBase : public JKRDisposer {
	ObjectBase(Vec*, JKRHeap*, u8); // unused/inlined

	virtual ~ObjectBase();                            // _08
	virtual JAISound* startSound(u32, u32);           // _0C
	virtual void startSound(u8, u32, u32);            // _10
	virtual void startSound(JAISound**, u32, u32);    // _14
	virtual void stopAllSound();                      // _18
	virtual void stopSound(u32, u32);                 // _1C
	virtual void enable() { mIsEnabled = true; }      // _20 (weak)
	virtual void disable();                           // _24
	virtual void dispose();                           // _28
	virtual JAISound** getFreeSoundHandlePointer();   // _2C
	virtual JAISound** getUseSoundHandlePointer(u32); // _30
	virtual void handleStop(u8, u32);                 // _34

	u8 getUseSoundHandleNo(u32);

	// unused/inlined:
	u8 getFreeSoundHandleNo();
	void reserveSoundHandle(u8);
	void cancelSoundHandle(u8);

	// _00		= VTABLE
	// _04-_18	= JKRDisposer
	bool mIsEnabled;    // _18
	u8 mHandleCount;    // _19
	JAISound** mSounds; // _1C
	u32 mUseHandleFlag; // _20, bit i set when mSounds[i] is used
	Vec* _24;           // _24
};

struct Object : public ObjectBase {
	Object(Vec*, JKRHeap*, u8);

	virtual ~Object();                      // _08
	virtual JAISound* startSound(u32, u32); // _0C
	virtual void disable();                 // _24
	virtual void loop();                    // _38

	// _00		= VTABLE
	// _04-_18	= JKRDisposer
	// _18-_28	= ObjectBase
	Vec _28;       // _28
	f32 mDistance; // _34
	f32 mPan;      // _38
	f32 mDolby;    // _3C
};
} // namespace JAInter

#endif
