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
	    , mOwnerConductor(nullptr)
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
	void* mOwnerConductor;          // _34
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

	// _1C     = VTBL
	// _00-_38 = NodeTree
};

/**
 * @size = 0x64
 */
struct PrmSetBase : public JKRDisposer {
	PrmSetBase(bool);

	virtual ~PrmSetBase()
	{
		JSULink<PrmBase>* link;
		while ((link = mList.getFirst()) != nullptr) {
			mList.remove(link);
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

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	u8 mPreDataByteSize;    // _18, bytes to skip prior to start of data (in PrmSetBase::load())
	u8 mPostDataByteSize;   // _19, bytes to skip after reading data
	bool _1A;               // _1A
	JSUList<PrmBase> mList; // _1C
	u8 _28[0x4];            // _28 - unknown
	PrmSetTree mTree;       // _2C
};

/**
 * @size = 0x2C
 */
struct PrmBase : public JKRDisposer {
	PrmBase()
	    : _18(0)
	    , mLink(this)
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

	inline JSULink<PrmBase>* getLink() { return &mLink; }

	// _00      = VTBL
	// _00-_18  = JKRDisposer
	u8 _18;                 // _18
	JSULink<PrmBase> mLink; // _1C
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

	Prm(T value)
	    : PrmBase()
	    , mValue(value)
	{
	}

	virtual ~Prm() { }                               // _08 (weak)
	virtual void save(JSUMemoryOutputStream& output) // _0C (weak)
	{
		output.write(mValue);
		PrmBase::save(output);
	}
	virtual void load(JSUMemoryInputStream& input) // _10 (weak)
	{
		input.read(mValue);
		PrmBase::load(input);
	}

	// _00      = VTABLE
	// _04-_2C  = PrmBase
	T mValue; // _2C
};

/**
 * @size = 0x98
 */
template <typename T>
struct PrmSetRc : public PrmSetBase {
	PrmSetRc();

	virtual ~PrmSetRc() // _08 (weak)
	{
		while (mTree.getFirstChild()) {
			mTree.remove(mTree.getFirstChild());
		}
		delete[] _64;
	}
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
				mTree.append(&object->mTree);
				object->appendAfter();
				object->load(input);
			}
		}
		currentHeap->becomeCurrentHeap();
	}                                                    // _10 (weak)
	virtual JKRHeap* getPrmObjHeap() { return nullptr; } // _24 (weak)

	T* getChild(u8 n);

	u8 getChildNum();

	// _00      = VTABLE
	// _04-_64  = PrmSetBase
	T* _64;      // _64 - unknown
	Prm<u8> _68; // _68 - should this be T? it's u8 in ghidra
};

template <typename T>
PrmSetRc<T>::PrmSetRc()
    : PrmSetBase(true)
    , _64(nullptr)
    , _68(0)
{
}

template <typename T>
u8 PrmSetRc<T>::getChildNum()
{
	return _68.mValue;
}

template <typename T>
T* PrmSetRc<T>::getChild(u8 n)
{
	JSUPtrLink* link = mTree.getNthLink(n);
	return (link != nullptr ? static_cast<T*>(link->getObjectPtr()) : nullptr);
}

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
