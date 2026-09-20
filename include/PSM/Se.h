#ifndef _PSM_ENVSE_PERSPECTIVE_AVOIDY_H
#define _PSM_ENVSE_PERSPECTIVE_AVOIDY_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAISe.h"
#include "PSSystem/PSGame.h"
#include "PSGame/EnvSe.h"

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

struct EnvSe_Perspective_AvoidY;

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

} // namespace PSM

#endif
