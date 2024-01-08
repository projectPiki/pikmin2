#ifndef _PSAUTOBGM_CONDUCTOR_H
#define _PSAUTOBGM_CONDUCTOR_H

#include "JSystem/JAudio/JAD/JADDataMgr.h"
#include "types.h"
#include "P2Macros.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "PSAutoBgm/Track.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JAudio/JAS/JASTrack.h"

namespace PSAutoBgm {
struct AutoBgm;

/**
 * @size = 0x11C
 */
struct Conductor : public JADUtility::PrmSetRc<PSAutoBgm::Track> {
	Conductor(AutoBgm*, int);

	virtual ~Conductor();                         // _08
	virtual void* getEraseLink() { return &_98; } // _1C (weak)

	void removeCallback(u8, void*);
	u16 seqCpuSync_AutoBgm(JASTrack*, u16, u32, JASTrack*);
	void createTables(JASTrack*);

	// _00      = VTABLE
	// _04-_98  = PrmSetRc
	JSULink<Conductor> _98;             // _98
	u32 _A8;                            // _A8
	u32 _AC;                            // _AC
	u32 _B0;                            // _B0 - unknown
	u32 _B4;                            // _B4
	JADUtility::PrmSlider<u8> _B8;      // _B8
	JADUtility::PrmRadioButton<u8> _E8; // _E8
	u8 _118[0x4];                       // _118 - unknown
};

/**
 * @size = 0x270
 */
struct ConductorMgr : public JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm> {
	inline ConductorMgr(PSAutoBgm::AutoBgm* bgm)
	    : JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm>(bgm)
	{
	}

	virtual ~ConductorMgr() { }                          // _08 (weak)
	virtual JKRHeap* getObjHeap() { return sHeap; }      // _14 (weak)
	virtual JKRHeap* getDataHeap() { return sHeap; }     // _18 (weak)
	virtual JKRHeap* getSaveTempHeap() { return sHeap; } // _2C (weak)

	static JKRHeap* sHeap;

	// _00       = DataMgrBase*
	// _04       = VTBL
	// _08-_258  = PrmDataMgrNode
	// _258-_278 = DataMgrBase (virtual)
};

} // namespace PSAutoBgm

#endif
