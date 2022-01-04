#ifndef _PSSYSTEM_SYSIF_H
#define _PSSYSTEM_SYSIF_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JAI/JAIBasic.h"
#include "PSSystem/FxMgr.h"

namespace PSSystem {
struct SetupArg;
}

namespace PSSystem {
// Size: 0x4C
struct SysIF : public JAIBasic {
	SysIF(const SetupArg&);
	void stopSoundSystem();
	void playSystemSe(u32, u32);
	void playSystemSe(u32, JAISound**, u32);
	void initIF(const SetupArg&);
	void makeSe();
	void mainLoop();
	void setConfigVol_Se(float);
	void setConfigVol_Bgm(float);
	void start1stSeq();
	void makeSequence();
	void makeStream();

	float _20;             // _20
	float _24;             // _24
	OSMutexObject m_mutex; // _28
	int _40;               // _40
	FxMgr m_fxMgr;         // _44
	u32 _48;               // _48
};

extern SysIF* spSysIF;
} // namespace PSSystem

#endif
