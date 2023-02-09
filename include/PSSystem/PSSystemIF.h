#ifndef _PSSYSTEM_SYSIF_H
#define _PSSYSTEM_SYSIF_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio2/JAI/JAIBasic.h"
#include "PSSystem/FxMgr.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JUtility/JUTException.h"
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
	JAISe* playSystemSe(u32, u32);
	void playSystemSe(u32, JAISound**, u32);
	void mainLoop();
	void setConfigVol_Se(f32);
	void setConfigVol_Bgm(f32);
	void start1stSeq();

	f32 _20;        // _20
	f32 _24;        // _24
	OSMutex mMutex; // _28
	int _40;        // _40
	FxMgr mFxMgr;   // _44
	u32 _48;        // _48
};

template <typename T>
struct ArcMgr : public JKRDisposer {
	virtual ~ArcMgr(); // _08

	static T* sInstance;

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	JKRArchive* mArchive; // _18
};

inline JKRFileLoader* getLoaderInstance()
{
	P2ASSERTLINE(80, PSSystem::ArcMgr<PSGame::BASARC>::sInstance != nullptr);
	return (JKRFileLoader*)PSSystem::ArcMgr<PSGame::BASARC>::sInstance->mFileLoaderLink.mValue;
}

extern SysIF* spSysIF;

inline SysIF* getSysIF()
{
	P2ASSERTLINE(395, spSysIF);
	return spSysIF;
}
} // namespace PSSystem

#endif
