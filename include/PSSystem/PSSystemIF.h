#ifndef _PSSYSTEM_SYSIF_H
#define _PSSYSTEM_SYSIF_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "PSSystem/FxMgr.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "P2Macros.h"
#include "PSGame/BASARC.h"
#include "JSystem/JMath.h"

namespace PSSystem {

u32 getObject(JASTrack* track, u8 p2);
void setObject(JASTrack* track, void* p2, u8 p3);

extern u8 sDistanceParameterMoveTime;
// static JMath::TRandom_fast_ oRandom(0);

struct SetupArg {
	JKRSolidHeap* mHeap; // _00
	u32 mHeapSize;       // _04
	int _08;             // _08
	void* _0C;           // _0C
	void* mAafFile;      // _10
	char* mPath;         // _14
};

// Size: 0x4C
struct SysIF : public JAIBasic {
	SysIF(const SetupArg&);

	virtual JAISequence* makeSequence();  // _08 (weak)
	virtual JAISe* makeSe();              // _0C
	virtual JAIStream* makeStream();      // _10 (weak)
	virtual void initIF(const SetupArg&); // _28

	void stopSoundSystem();
	JAISe* playSystemSe(u32, u32);
	void playSystemSe(u32 soundID, JAISound** handles, u32 p3);
	void mainLoop();
	void setConfigVol_Se(f32);
	void setConfigVol_Bgm(f32);
	void start1stSeq();

	f32 mSfxVolume; // _20
	f32 mBgmVolume; // _24
	OSMutex mMutex; // _28
	int _40;        // _40
	FxMgr mFxMgr;   // _44
	u32 _48;        // _48

	static void* sMakeJAISeCallback;
};

template <typename T>
struct ArcMgr : public JKRDisposer {
	ArcMgr()
	{
		mArchive = nullptr;
		mArchive = JKRArchive::mount("/AudioRes/Key.arc", JKRArchive::EMM_Mem, JKRGetCurrentHeap(), JKRArchive::EMD_Head);
		P2ASSERTLINE(92, mArchive);
	}

	virtual ~ArcMgr(); // _08

	static void createInstance()
	{
		P2ASSERTLINE(71, !sInstance);
		// sInstance = new ArcMgr<T>;
		P2ASSERTLINE(92, sInstance);
	}

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
} // namespace PSSystem

inline PSSystem::SysIF* PSGetSystemIFA()
{
	P2ASSERTLINE(395, PSSystem::spSysIF);
	return PSSystem::spSysIF;
}

inline u32 isValidSeType(u32 soundID)
{
	// this is wrong, but its stupid either way
	u32 mode = soundID >> 30;
	u8 ret   = (soundID >> 12) & 0xF;
	if (mode == 0) {
		return ret;
	}

	if (mode == 2) {
		JUT_PANICLINE(31, "P2Assert");
	} else if (mode == 3) {
		JUT_PANICLINE(35, "P2Assert");
	}

	JUT_PANICLINE(37, "P2Assert");
	return 0;
}

inline PSSystem::SysIF* PSGetSystemIF() { return PSSystem::spSysIF; }

#endif
