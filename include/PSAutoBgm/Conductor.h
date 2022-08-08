#ifndef _PSAUTOBGM_CONDUCTOR_H
#define _PSAUTOBGM_CONDUCTOR_H

#include "types.h"
#include "JSystem/JAD/JADUtility.h"
#include "PSAutoBgm/Track.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JAS/JASTrack.h"

namespace PSAutoBgm {

/**
 * @size = 0x11C
 */
struct Conductor : JADUtility::PrmSetRC<PSAutoBgm::Track> {
	virtual ~Conductor();        // _08
	virtual void getEraseLink(); // _1C (weak)

	void removeCallback(u8, void*);
	void seqCpuSync_AutoBgm(JASTrack*, u16, u32, JASTrack*);
	void createTables(JASTrack*);

	// _00      = VTABLE
	// _04-_98  = PrmSetRc
	JSUPtrLink _98;                     // _98
	u8 _A8[0x10];                       // _A8 - unknown
	JADUtility::PrmSlider<u8> _B8;      // _B8
	JADUtility::PrmRadioButton<u8> _E8; // _E8
	u8 _118[0x4];                       // _118 - unknown
};

/**
 * @size = 0x8
 */
struct ConductorArcMgr {
	virtual ~ConductorArcMgr(); // _08 (weak)

	JKRArchive* m_archive; // _04
};

/**
 * @size = 0x270
 */
struct ConductorMgr : JADUtility::PrmDataMgrNode<PSAutoBgm::Conductor, PSAutoBgm::AutoBgm> {
	virtual ~ConductorMgr();        // _08 (weak)
	virtual void getObjHeap();      // _14 (weak)
	virtual void getDataHeap();     // _18 (weak)
	virtual void getSaveTempHeap(); // _2C (weak)
	                                // virtual void _30() = 0;         // _30 - possibly
	                                // virtual void _34() = 0;         // _34 - possibly
};

} // namespace PSAutoBgm

#endif
