#ifndef _JSYSTEM_JAD_JADUTILITY_H
#define _JSYSTEM_JAD_JADUTILITY_H

#include "types.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

namespace JADUtility {
struct PrmSetBase;

/**
 * @size = 0x1C
 */
template <typename T>
struct NodeTree {
	virtual void beforeRemovingChild(T*);      // _08 (weak)
	virtual void beforeRemovingThis(T*);       // _0C (weak)
	virtual void afterRemovingChildButton(T*); // _10 (weak)
	virtual void afterRemovingThisButton(T*);  // _14 (weak)

	u32 _04;   // _04 - unknown
	u32 _08;   // _08 - unknown
	u32 _0C;   // _0C - unknown
	u32 _10;   // _10 - unknown
	void* _14; // _04 - function pointer for removeCallback()
	u32 _18;   // _08 - unknown
};

// TODO: this
struct AccessMode;

/**
 * @size = 0x1C
 */
struct PrmSetTree : public NodeTree<PrmSetBase> {
	inline ~PrmSetTree();
};

/**
 * @size = 0x64
 */
struct PrmSetBase {
	PrmSetBase(bool);

	virtual ~PrmSetBase();                              // _08 (weak)
	virtual void appendAfter();                         // _0C (weak)
	virtual void load(JSUMemoryInputStream&);           // _10
	virtual void afterRemovingChildButton(PrmSetBase*); // _14 (weak)
	virtual void afterRemovingThisButton(PrmSetBase*);  // _18 (weak)
	virtual void getEraseLink();                        // _1C (weak)
	virtual void afterGetFromFree();                    // _20 (weak)

	u8 _04[0x14];   // _04 - unknown
	u8 _18;         // _18
	u8 _19;         // _19
	bool _1A;       // _1A
	u8 _1B;         // _1B - possibly padding
	JSUPtrList _1C; // _1C
	u8 _28[0x4];    // _28 - unknown
	JSUPtrList _2C; // _2C
	JSUPtrLink _38; // _38
	PrmSetTree _48; // _48
};

/**
 * @size = 0x2C
 */
struct PrmBase : public JKRDisposer {
	virtual ~PrmBase();                        // _08 (weak)
	virtual void save(JSUMemoryOutputStream&); // _0C (weak)
	virtual void load(JSUMemoryInputStream&);  // _10 (weak)

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	u8 _18;         // _18
	u8 _19[0x3];    // _19 - unknown, could be padding
	JSUPtrLink _1C; // _1C
};

/**
 * @size = 0x30
 */
template <typename T>
struct Prm : public PrmBase {
	// _00      = VTABLE
	// _04-_2C  = PrmBase
	T* m_value; // _2C
};

/**
 * @size = 0x98
 */
template <typename T>
struct PrmSetRc : public PrmSetBase {
	// _00      = VTABLE
	// _04-_64  = PrmBase
	u8 _64[0x4]; // _64 - unknown
	Prm<u8> _68; // _68 - should this be T? it's u8 in ghidra
};

/**
 * @size = 0x30
 */
template <typename T>
struct PrmHio : public Prm<T> {
	// _00      = VTABLE
	// _04-_30  = Prm
	// idk why this seems to just be a copy of Prm but w/e
};

/**
 * @size = 0x30
 */
template <typename T>
struct PrmRadioButton : public PrmHio<T> {
	// _00      = VTABLE
	// _04-_30  = Prm
	// idk why this seems to just be a copy of Prm but w/e
};

/**
 * @size = 0x30
 */
template <typename T>
struct PrmSlider : public PrmHio<T> {
	// _00      = VTABLE
	// _04-_30  = Prm
	// idk why this seems to just be a copy of Prm but w/e
};

} // namespace JADUtility

#endif
