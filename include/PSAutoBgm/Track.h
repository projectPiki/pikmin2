#ifndef _PSAUTOBGM_TRACK_H
#define _PSAUTOBGM_TRACK_H

#include "types.h"
#include "JSystem/JAD/JADUtility.h"
#include "PSAutoBgm/Cycle.h"
#include "JSystem/JAD/JADStr.h"
#include "JSystem/JAS/JASTrack.h"

namespace PSAutoBgm {
/**
 * @size = 2C4
 */
struct Module : public JADUtility::PrmSetBase {
	Module();

	virtual ~Module();               // _08
	virtual void afterGetFromFree(); // _20

	void removeCallback(u8, void*);
	void seqCpuSync_AutoBgm_Module(JASTrack*, u16, u32, JASTrack*);
	void setTableAddress(JASTrack*);
	void cycleLoop(JASTrack*);

	// _00      = VTABLE
	// _04-_64  = PrmSetBase
	JADUtility::PrmSlider<short> _64;    // _64
	JADUtility::PrmSlider<short> _94;    // _94
	JADUtility::PrmSlider<u8> _C4;       // _C4
	JADUtility::PrmRadioButton<u8> _F4;  // _F4
	JADUtility::PrmSlider<u8> _124;      // _124
	JADUtility::PrmSlider<u8> _154;      // _154
	JADUtility::PrmSlider<short> _184;   // _184
	JADUtility::PrmSlider<short> _1B4;   // _1B4
	JADUtility::PrmSlider<short> _1E4;   // _1E4
	JADUtility::PrmSlider<u8> _214;      // _214
	JADUtility::PrmSlider<u8> _244;      // _244
	JADUtility::PrmRadioButton<u8> _274; // _274
	short _2A4;                          // _2A4
	u8 _2A6[0x2];                        // _2A6 - possibly just padding
	uint _2A8;                           // _2A8
	u8 _2AC[0x4];                        // _2AC - unknown
	uint _2B0;                           // _2B0
	u8 _2B4;                             // _2B4
	u8 _2B5[0x3];                        // _2B5 - possibly just padding
	CycleBase* _2B8[2];                  // _2B8 - 0 = OnCycle, 1 = OffCycle
	u8 _2C0;                             // _2C0 - cycle index?
	u8 _2C1;                             // _2C1 - unknown/just padding?
	short _2C2;                          // _2C2
};

/**
 * @size = 1A0
 */
struct Track : public JADUtility::PrmSetRc<PSAutoBgm::Module> {
	Track();

	virtual ~Track();                // _08
	virtual void afterGetFromFree(); // _20

	void removeCallback(u8, void*);
	void seqCpuSync_AutoBgm_Track(JASTrack*, u16, u32, JASTrack*);
	void incCurModule();

	// _00      = VTABLE
	// _04-_98  = PrmSetRc
	u8 _98;                             // _98
	u8 _99;                             // _99
	u8 _9A[0x2];                        // _9A - possibly padding?
	u32 _9C;                            // _9C - unknown
	JADUtility::PrmSlider<short> _A0;   // _A0
	JADUtility::PrmRadioButton<u8> _D0; // _D0
	JADUtility::StrEditBox _100;        // _100
	u8 _130[0xC];                       // _130 - unknown
	JADUtility::PrmSlider<u8> _13C;     // _13C
	JADUtility::PrmSlider<u8> _16C;     // _16C
	u8 _19C[0x4];                       // _19C - unknown
};

} // namespace PSAutoBgm

#endif
