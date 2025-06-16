#ifndef _JSYSTEM_JAS_JASBANK_H
#define _JSYSTEM_JAS_JASBANK_H

#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

struct JASInst;

struct JASBank {
	inline JASBank()
	    : _04(0)
	{
	}

	/**
	 * @reifiedAddress{80099728}
	 * @reifiedFile{JSystem/JAS/JASBasicBank.cpp}
	 */
	virtual ~JASBank() {};                   // _08 (weak)
	virtual JASInst* getInst(int) const = 0; // _0C
	virtual u32 getType() const         = 0; // _10

	static JKRHeap* getCurrentHeap();

	JASWaveBank* _04; // _04

	// Unsure of type
	static JKRHeap* sCurrentHeap;
};

struct JASBasicBank : public JASBank {
	JASBasicBank();

	virtual ~JASBasicBank();             // _08
	virtual JASInst* getInst(int) const; // _0C
	/**
	 * @reifiedAddress{8009987C}
	 * @reifiedFile{JSystem/JAS/JASBasicBank.cpp}
	 */
	virtual u32 getType() const { return 'BSIC'; } // _10 (weak)

	void setInstCount(u32);
	void setInst(int, JASInst*);

	JASInst** mInsts; // _08
	u32 mInstCount;   // _0C
};

namespace JASBankMgr {
void init(int tableSize);
bool registBankBNK(int bankIndex, void* data);
u16 getPhysicalNumber(u16 virtualNumber);
void setVir2PhyTable(u32 virtualNumber, int physicalNumber);
bool assignWaveBank(int, int);
JASChannel* noteOn(int, int, u8, u8, u16, void (*)(u32, JASChannel*, JASDsp::TChannel*, void*), void*);
static JASChannel* noteOnOsc(int, u8, u8, u16, void (*)(u32, JASChannel*, JASDsp::TChannel*, void*), void*);
void gateOn(JASChannel*, u8, u8);

// unused/inlined:
bool registBank(int bankIndex, JASBank* bank);
JASBank* getBank(int bankIndex);
size_t getUsedHeapSize();
} // namespace JASBankMgr

#endif
