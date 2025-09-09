#ifndef _PSM_ENVSE_PERSPECTIVE_AVOIDY_H
#define _PSM_ENVSE_PERSPECTIVE_AVOIDY_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "PSGame/EnvSe.h"
#include "JSystem/JAudio/JAI/JAISe.h"
#include "PSGame/SoundTable.h"

namespace PSM {
// using an inline makes it stop inlining in initEnvironmentSe, so here's a macro for now
#define APPEND_SE_LINK(builder, id)                                                  \
	{                                                                                \
		PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(id); \
		PSSystem::IdList* list = &builder.mList;                                     \
		if (!list->getFirst()) {                                                     \
			builder.mList.mNextLink = link;                                          \
		}                                                                            \
		list->append(link);                                                          \
	}

/**
 * @size{0x14}
 */
struct PersEnvInfo {
	f32 _00;          // _00
	f32 mMutedVolume; // _04
	f32 _08;          // _08
	f32 _0C;          // _0C
	f32 _10;          // _10

	inline void operator=(PersEnvInfo& other)
	{
		_00          = other._00;
		mMutedVolume = other.mMutedVolume;
		_08          = other._08;
		_0C          = other._0C;
		_10          = other._10;
	}
};

struct EnvSe_Perspective_AvoidY : public PSGame::EnvSe_Perspective {
	EnvSe_Perspective_AvoidY(u32 soundID, f32 volume, Vec pos)
	    : PSGame::EnvSe_Perspective(soundID, volume, pos)
	{
		mYOffset = 400.0f;
	}

	virtual JAISound* play();                    // _0C
	virtual u32 getCastType() { return 'pers'; } // _10 (weak)

	// _10     = VTBL
	// _00-_48 = PSGame::EnvSe_Perspective
	f32 mYOffset;      // _48
	PersEnvInfo mInfo; // _4C
};

struct Env_Pollutin : public PSGame::EnvSe_AutoPan {
	Env_Pollutin(u32 soundID)
	    : EnvSe_AutoPan(soundID, 0.0f, 1.0f, 1.0f, 0.0018554f, 0.0008554f)
	    , mVolumeModifier(1.0f)
	{
	}

	virtual JAISound* play();                    // _0C
	virtual u32 getCastType() { return 'poll'; } // _10 (weak)

	// _10     = VTBL
	// _00-_50 = PSGame::EnvSe_AutoPan
	f32 mVolumeModifier; // _50
};

/**
 * @size{0x14}
 */
struct PersEnvManager {
	PersEnvManager(PSSystem::EnvSeMgr*);

	bool playOk(EnvSe_Perspective_AvoidY*);
	void exec();

	PSSystem::EnvSeMgr* mEnvSeMgr;             // _00
	u8 mSeCount;                               // _04
	EnvSe_Perspective_AvoidY** mPersEnvSounds; // _08, array of mSeCount sound effects
	f32* mSeDistances;                         // _0C
	f32 _10;                                   // _10
};

struct EnvSeObjBuilder : public PSGame::Builder_EvnSe_Perspective {
	EnvSeObjBuilder(JGeometry::TBox3<f32> bounds)
	    : PSGame::Builder_EvnSe_Perspective(bounds)
	{
	}

	virtual ~EnvSeObjBuilder() { }                              // _08
	virtual void onBuild(PSSystem::EnvSeBase*);                 // _0C
	virtual PSGame::EnvSe_Perspective* newSeObj(u32, f32, Vec); // _10

	void setInfo(PersEnvInfo info) { mPersEnvInfo = info; }

	inline void appendNewSELink(u32 id)
	{
		PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(id);
		PSSystem::IdList* list = &mList;
		if (!list->getFirst()) {
			mList.mNextLink = link;
		}
		list->append(link);
	}

	// _00     = VTBL
	// _00-_50 = PSGame::Builder_EvnSe_Perspective
	PersEnvInfo mPersEnvInfo; // _50
};

struct SeSound : public JAISe {
	inline SeSound()
	    : mPerspInfo()
	    , mPlayerNum(0)
	    , mDistanceModifier(1.0f)
	{
	}

	virtual f32 setDistanceVolumeCommon(f32, u8);                                          // _BC
	virtual void initParameter(void*, JAInter::Actor*, u32, u32, u8, JAInter::SoundInfo*); // _C8
	virtual void onGet();                                                                  // _CC
	virtual void onRelease();                                                              // _D0
	virtual void setSeDistancePan(u8);                                                     // _DC
	virtual void setSeDistanceDolby(u8);                                                   // _EC

	static SeSound* makeSeSound();
	void specializePerspCalc(const PSGame::SoundTable::SePerspInfo&);
	f32 calcVolumeSpecialized(f32);
	static f32 calcVolume(f32, u8, u8);
	static f32 calcPan(const Vec&, f32);
	static f32 calcDolby(const Vec&, f32);
	static f32 psACos(f32);

	// _00      = VTABLE
	// _00-_484 = JAISe
	PSGame::SoundTable::SePerspInfo mPerspInfo; // _484
	u8 mPlayerNum;                              // _49C
	f32 mDistanceModifier;                      // _4A0

	static f32 cDol_0Rad;
	static f32 cDol_HalfRad;
	static f32 cDol_FullRad;
	static f32 cPan_MaxAmp;
	static f32 cCenterRad;
	static const f32 smACosPrm[];
};

inline void SetNoYOfset(PSSystem::EnvSeMgr* mgr)
{
	for (JSULink<PSSystem::EnvSeBase>* link = mgr->mEnvList.getFirst(); link; link = link->getNext()) {
		if (((EnvSe_Perspective_AvoidY*)link->getObjectPtr())->getCastType() == 'pers') {
			((EnvSe_Perspective_AvoidY*)link->getObjectPtr())->mYOffset = 0.0f;
		}
	}
}
inline void SetBossBgmMuteVol(PSSystem::EnvSeMgr* mgr, u32 id, f32 vol)
{
	EnvSe_Perspective_AvoidY* se;
	for (JSULink<PSSystem::EnvSeBase>* link = mgr->mEnvList.getFirst(); link; link = link->getNext()) {
		se = (EnvSe_Perspective_AvoidY*)link->getObjectPtr();
		if (se->getCastType() == 'poll' && id == se->mSoundID) {
			se->mInfo.mMutedVolume = vol;
		}
	}
}
} // namespace PSM

#endif
