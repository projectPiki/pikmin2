#ifndef _PSSYSTEM_SEQDATA_H
#define _PSSYSTEM_SEQDATA_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PSSystem/PSCommon.h"

struct Stream;

namespace PSSystem {

/**
 * @size = 0x1C
 */
struct TextDataBase : public JKRDisposer {
	TextDataBase();

	virtual ~TextDataBase();              // _08
	virtual bool read(Stream& input) = 0; // _0C

	bool load(const char* path, JKRDvdRipper::EAllocDirection direction);
	bool onlyLoad(const char* path, JKRDvdRipper::EAllocDirection direction);

	// _00      = VTABLE
	// _04-_1C  = JKRDisposer
	void* mFile; // _18
};

/**
 * @size = 0x20
 */
struct SeqDataList : public TextDataBase, public SingletonBase<SeqDataList> {
	SeqDataList();

	virtual ~SeqDataList();                            // _08 (weak)
	virtual bool read(Stream& input) { return false; } // _0C
	// virtual void _10() = 0;      // _10 - possibly
	// virtual void _14() = 0;      // _14 - possibly

	int getSeqVolume(char const*);

	// _00      = VTABLE
	// _04-_1C  = TextDataBase
};

} // namespace PSSystem

#endif
