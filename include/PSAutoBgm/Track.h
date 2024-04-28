#ifndef _PSAUTOBGM_TRACK_H
#define _PSAUTOBGM_TRACK_H

#include "types.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JAudio/JAD/JADStr.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/BankMgr.h"

namespace PSAutoBgm {
struct CycleBase;

/**
 * @size = 2C4
 */
struct Module : public JADUtility::PrmSetBase {
	Module();

	virtual ~Module();               // _08
	virtual void afterGetFromFree(); // _20

	static void removeCallback(u8 idx, void* module);
	u32 seqCpuSync_AutoBgm_Module(JASTrack*, u16, u32, JASTrack*);
	void setTableAddress(JASTrack*);
	u16 cycleLoop(JASTrack*);

	// _00      = VTABLE
	// _04-_64  = PrmSetBase
	JADUtility::PrmSlider<s16> _64;         // _64
	JADUtility::PrmSlider<s16> _94;         // _94
	JADUtility::PrmSlider<u8> _C4;          // _C4
	JADUtility::PrmRadioButton<u8> _F4;     // _F4
	JADUtility::PrmSlider<u8> _124;         // _124
	JADUtility::PrmSlider<u8> _154;         // _154
	JADUtility::PrmSlider<s16> _184;        // _184
	JADUtility::PrmSlider<s16> _1B4;        // _1B4
	JADUtility::PrmSlider<s16> _1E4;        // _1E4
	JADUtility::PrmSlider<u8> mVolumeParam; // _214
	JADUtility::PrmSlider<u8> mPanParam;    // _244
	JADUtility::PrmRadioButton<u8> _274;    // _274
	u16 _2A4;                               // _2A4
	PSBankData* mBankData;                  // _2A8, array with
	u8 mBankDataNum;                        // _2AC
	PSWsData* mWsData;                      // _2B0, array of some size
	u8 mWsDataNum;                          // _2B4
	u16 _2B6;                               // _2B6
	CycleBase* mCycles[2];                  // _2B8 - 0 = OnCycle, 1 = OffCycle
	u8 mCycleIndex;                         // _2C0 - cycle index?
	u8 mIsTableAddrSet;                     // _2C1
	u16 _2C2;                               // _2C2
};

/**
 * @size = 1A0
 */
struct Track : public JADUtility::PrmSetRc<PSAutoBgm::Module> {
	Track();

	virtual ~Track();                // _08
	virtual void afterGetFromFree(); // _20

	static void removeCallback(u8 idx, void* track);
	u32 seqCpuSync_AutoBgm_Track(JASTrack*, u16, u32, JASTrack*);
	void incCurModule();

	// _00      = VTABLE
	// _04-_98  = PrmSetRc
	u8 mIndex;                          // _98
	u8 mCurrModule;                     // _99
	u32 _9C;                            // _9C - unknown
	JADUtility::PrmSlider<s16> _A0;     // _A0
	JADUtility::PrmRadioButton<u8> _D0; // _D0
	JADUtility::StrEditBox mStrEdit;    // _100
	JADUtility::PrmSlider<u8> _13C;     // _13C
	JADUtility::PrmSlider<u8> _16C;     // _16C
	Track* mUnisonTrack;                // _19C
};

} // namespace PSAutoBgm

#endif
