#ifndef _PSSYSTEM_SYSIF_H
#define _PSSYSTEM_SYSIF_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JAI/JAIBasic.h"
#include "PSSystem/FxMgr.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JUT/JUTException.h"
#include "PSGame/BASARC.H"

namespace PSSystem {
struct SetupArg;
}

namespace PSSystem {
// Size: 0x4C
struct SysIF : public JAIBasic {
	SysIF(const SetupArg&);

	virtual JAISequence* makeSequence();  // _08 (weak)
	virtual JAISe* makeSe();              // _0C
	virtual JAIStream* makeStream();      // _10 (weak)
	virtual void initIF(const SetupArg&); // _28

	void stopSoundSystem();
	void playSystemSe(u32, u32);
	void playSystemSe(u32, JAISound**, u32);
	void mainLoop();
	void setConfigVol_Se(float);
	void setConfigVol_Bgm(float);
	void start1stSeq();

	float _20;             // _20
	float _24;             // _24
	OSMutexObject m_mutex; // _28
	int _40;               // _40
	FxMgr m_fxMgr;         // _44
	u32 _48;               // _48
};

template <typename T>
struct ArcMgr : public JKRDisposer {
	virtual ~ArcMgr(); // _08

	static T* sInstance;

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	JKRArchive* m_archive; // _18
};

inline JKRFileLoader* getLoaderInstance()
{
	P2ASSERTLINE(80, PSSystem::ArcMgr<PSGame::BASARC>::sInstance != nullptr);
	return (JKRFileLoader*)PSSystem::ArcMgr<PSGame::BASARC>::sInstance->_18.m_value;
}

extern SysIF* spSysIF;
} // namespace PSSystem

#endif
