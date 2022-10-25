#ifndef _JSYSTEM_JAS_JASBANK_H
#define _JSYSTEM_JAS_JASBANK_H

#include "JSystem/JKR/JKRHeap.h"
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

	u32 _04; // _04

	// Unsure of type
	static JKRHeap* sCurrentHeap;
};

struct JASBasicBank : public JASBank {
	virtual ~JASBasicBank();             // _08
	virtual JASInst* getInst(int) const; // _0C
	/**
	 * @reifiedAddress{8009987C}
	 * @reifiedFile{JSystem/JAS/JASBasicBank.cpp}
	 */
	virtual u32 getType() const { return 'BSIC'; } // _10 (weak)

	JASBasicBank();
	void setInstCount(unsigned long);
	void setInst(int, JASInst*);

	JASInst** m_insts; // _08
	u32 m_instCount;   // _0C
};

struct JASWaveBank {
	void* getCurrentHeap();

	// Unsure of type
	static void* sCurrentHeap;
};

#endif
