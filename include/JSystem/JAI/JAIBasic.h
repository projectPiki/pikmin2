#ifndef _JSYSTEM_JAI_JAIBASIC_H
#define _JSYSTEM_JAI_JAIBASIC_H

#include "types.h"

struct JKRHeap;
struct JAISound;
namespace JAInter {
struct Camera;
}

struct JAIBasic {
	virtual void makeSequence();               // _08 (weak)
	virtual void makeSe();                     // _0C
	virtual void makeStream();                 // _10 (weak)
	virtual void getMapInfoFxline(u32);        // _14
	virtual void getMapInfoGround(u32);        // _18
	virtual void getMapInfoFxParameter(u32);   // _1C
	virtual void setSeExtParameter(JAISound*); // _20
	virtual void setRegisterTrackCallback();   // _24

	// VT _00
	JAInter::Camera* m_cameras; // _04
	JKRHeap* m_heap;            // _08
	u8 _0C;                     // _0C
	u8 m_paramSoundOutputMode;  // _0D
	u8 _0E;                     // _0E
	u32 _10;                    // _10
	u32 _14;                    // _14
	u32 _18;                    // _18
	u32 _1C;                    // _1C

	static JAIBasic* msBasic;
	static JKRHeap* msCurrentHeap;
	static bool msStopMode;
	static u32 msAudioStopTime;
	static float msDspLevel;
	static float msAutoLevel;
	static float msAutoDif;
};

#endif
