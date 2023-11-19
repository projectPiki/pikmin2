#ifndef _JSYSTEM_JAD_JADUTILITY_H
#define _JSYSTEM_JAD_JADUTILITY_H

#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

namespace JADUtility {
struct PrmSetBase;
struct PrmBase;
struct DataMgrBase;

/**
 * @size = 0x38
 */
template <typename T>
struct NodeTree : public JSUTree<T> {
	typedef void (*RemoveCallback)(u8, void*);

	inline NodeTree(T* owner)
	    : JSUTree<T>(owner)
	    , _20(0)
	    , _24(0)
	    , _28(0)
	    , _2C(0)
	    , mRemoveCallback(nullptr)
	    , _34(nullptr)
	{
	}

	virtual void beforeRemovingChild(T*) { }         // _08 (weak)
	virtual void beforeRemovingThis(T*) { }          // _0C (weak)
	virtual void afterRemovingChildButton(T*) { }    // _10 (weak)
	virtual void afterRemovingThisButton(T*, T*) { } // _14 (weak)

	// unused/inlined:
	inline ~NodeTree() { }

	// _00-_1C  = JSUTree
	// _1C      = VTABLE
	u32 _20;                        // _20 - unknown
	u32 _24;                        // _24 - unknown
	u32 _28;                        // _28 - unknown
	u32 _2C;                        // _2C - unknown
	RemoveCallback mRemoveCallback; // _30 - function pointer for removeCallback()
	void* _34;                      // _34 - unknown
};

// TODO: this
enum AccessMode { MODE_0 };

/**
 * @size = 0x3C
 */
struct PrmSetTree : public NodeTree<PrmSetBase> {
	inline PrmSetTree(PrmSetBase* owner)
	    : NodeTree(owner)
	{
	}

	inline ~PrmSetTree() { }
};

/**
 * @size = 0x64
 */
struct PrmSetBase : public JKRDisposer {
	PrmSetBase(bool);

	virtual ~PrmSetBase()
	{
		JSULink<PrmBase>* link;
		while ((link = _1C.getFirst()) != nullptr) {
			_1C.remove(link);
		}
	} // _08 (weak)

	virtual void appendAfter() { }                         // _0C (weak)
	virtual void load(JSUMemoryInputStream&);              // _10
	virtual void afterRemovingChildButton(PrmSetBase*) { } // _14 (weak)
	virtual void afterRemovingThisButton(PrmSetBase*) { }  // _18 (weak)
	virtual void* getEraseLink() { return nullptr; }       // _1C (weak)
	virtual void afterGetFromFree() { }                    // _20 (weak)

	// unused/inlined:
	// void appendDummy(u8);

	u8 _18;               // _18
	u8 _19;               // _19
	bool _1A;             // _1A
	u8 _1B;               // _1B - possibly padding
	JSUList<PrmBase> _1C; // _1C
	u8 _28[0x4];          // _28 - unknown
	PrmSetTree _2C;       // _2C
};

/**
 * @size = 0x2C
 */
struct PrmBase : public JKRDisposer {
	PrmBase()
	    : _18(0)
	    , _1C(this)
	{
	}
	virtual ~PrmBase() { } // _08 (weak)
	virtual void save(JSUMemoryOutputStream& output)
	{
		for (u8 i = 0; i < _18; i++) {
			u8 padding = 0;
			output.write(&padding, 1);
		}

	} // _0C (weak)
	virtual void load(JSUMemoryInputStream& input)
	{
		if (_18 != 0) {
			input.skip(_18);
		}
	} // _10 (weak)

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	u8 _18;               // _18
	JSULink<PrmBase> _1C; // _1C
};

/**
 * @size = 0x30
 */
template <typename T>
struct Prm : public PrmBase {
	Prm()
	    : PrmBase()
	{
	}

	virtual ~Prm() { } // _08 (weak)
	virtual void save(JSUMemoryOutputStream& output)
	{
		output.write((void*)mValue, sizeof(T));
		PrmBase::save(output);
	} // _0C (weak)
	virtual void load(JSUMemoryInputStream& input)
	{
		input.read((void*)mValue, sizeof(T));
		PrmBase::load(input);
	} // _10 (weak)

	// _00      = VTABLE
	// _04-_2C  = PrmBase
	T mValue; // _2C

	// T* mValue;   // _2C
};

template <>
inline void Prm<char*>::save(JSUMemoryOutputStream& output)
{
	output.write(mValue);
	PrmBase::save(output);
}

template <>
inline void Prm<char*>::load(JSUMemoryInputStream& input)
{
	input.read(mValue);
	PrmBase::load(input);
}

/**
 * @size = 0x98
 */
template <typename T>
struct PrmSetRc : public PrmSetBase {
	PrmSetRc()
	    : PrmSetBase(true)
	    , _64(0)
	    , _68()
	{
	}

	u8 getChildNum() { return _68.mValue; }

	virtual ~PrmSetRc() { } // _08 (weak)
	virtual void load(JSUMemoryInputStream& input)
	{
		PrmSetBase::load(input);
		JKRHeap* currentHeap = JKRHeap::sCurrentHeap;
		if (getChildNum() != 0) {
			if (getPrmObjHeap() != nullptr) {
				getPrmObjHeap()->becomeCurrentHeap();
			}
			T* childObjects = new T[getChildNum()];
			for (int i = 0; i < getChildNum(); i++) {
				PrmSetBase* object = static_cast<PrmSetBase*>(childObjects + i);
				_2C.append(&object->_2C);
				object->appendAfter();
				object->load(input);
			}
		}
		currentHeap->becomeCurrentHeap();
	}                                                    // _10 (weak)
	virtual JKRHeap* getPrmObjHeap() { return nullptr; } // _24 (weak)

	T* getChild(u8 n)
	{
		JSUPtrLink* link = _2C.getNthLink(n);
		return (link != nullptr ? static_cast<T*>(link->getObjectPtr()) : nullptr);
	}

	// _00      = VTABLE
	// _04-_64  = PrmBase
	T* _64;      // _64 - unknown
	Prm<u8> _68; // _68 - should this be T? it's u8 in ghidra
};

/**
 * @size = 0x30
 * Likely an abstract base class for binding parameters to UI elements.
 */
template <typename T>
struct PrmHio : public Prm<T> {
	PrmHio()
	    : Prm<T>()
	{
	}

	virtual ~PrmHio() { } // _08 (weak)

	// _00      = VTABLE
	// _04-_30  = Prm
};

/**
 * @size = 0x30
 * Likely had code for binding parameters to radio buttons.
 */
template <typename T>
struct PrmRadioButton : public PrmHio<T> {
	// _00      = VTABLE
	// _04-_30  = Prm
};

/**
 * @size = 0x30
 * Likely had code for binding parameters to sliders.
 */
template <typename T>
struct PrmSlider : public PrmHio<T> {
	// _00      = VTABLE
	// _04-_30  = Prm
};

} // namespace JADUtility

#endif
