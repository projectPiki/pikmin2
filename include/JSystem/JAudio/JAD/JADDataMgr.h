#ifndef _JSYSTEM_JAD_JADDATAMGR_H
#define _JSYSTEM_JAD_JADDATAMGR_H

#include "stl/string.h"
#include "JSystem/JSupport/JSUStream.h"
#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JAudio/JAD/JADStr.h"

namespace PSAutoBgm {
struct Track;
};

namespace JADUtility {

/**
 * @size = 0x20
 */
struct DataMgrBase : public JKRDisposer {
	DataMgrBase();

	virtual ~DataMgrBase(); // _08
	virtual void init()
	{
		JKRHeap::free(mExternalFlags, nullptr);
		mExternalFlags = nullptr;
	} // _0C (weak)

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	void* mExternalFlags; // _18
};

/**
 * @size = 0x234 - could be wrong, inheritance is confusing
 */
struct DataLoadMgrNode : virtual public DataMgrBase {
	enum ObjStatus {};

	DataLoadMgrNode();

	virtual ~DataLoadMgrNode();                      // _08 (weak)
	virtual bool isTempBuffaMode() { return false; } // _0C (weak)
	virtual void init()
	{
		mFlagState = 0;
		DataMgrBase::init();
	} // _10 (weak)

	virtual JKRHeap* getObjHeap()         = 0; // _14
	virtual JKRHeap* getDataHeap()        = 0; // _18
	virtual bool initInstance(void*, s32) = 0; // _1C
	virtual bool initInstance()           = 0; // _20

	bool initInstanceExt(void*, s32);
	void setFlagsAsExternal(void*);

	// unused/inlined:
	void setLoadPath(char const* path)
	{
		if (strlen(path) <= 0xFF) {
			strcpy(mLoadPath, path);
		}
	}

	void load(JADUtility::DataLoadMgrNode::ObjStatus, bool);
	// bool initInstanceExt();
	// void loadDvd(u32*);

	/** @fabricated */
	inline void setPath(char const* path)
	{
		if (strlen(path) <= 0xFF) {
			strcpy(mPath, path);
		}
	}

	// _00 = DataMgrBase*
	// _04 = VTABLE
	int mFlagState;        // _08
	char mPath[0x100];     // _0C
	char mLoadPath[0x100]; // _10C, best guess as to name
	u32 _20C;              // _20C
	u32 _210;              // _210

	// _214 - _234 = DataMgrBase (virtual)
};

/**
 * @size = 0x270
 */
struct DataMgrNode : public DataLoadMgrNode {
	DataMgrNode();

	// virtual ~DataMgrNode() { }                                           // _08 (weak)
	virtual void init() { DataLoadMgrNode::init(); }                     // _10 (weak)
	virtual JKRHeap* getObjHeap()         = 0;                           // _14
	virtual JKRHeap* getDataHeap()        = 0;                           // _18
	virtual bool initInstance(void*, s32) = 0;                           // _1C
	virtual bool initInstance()           = 0;                           // _20
	virtual char* getPath() { return mPath; }                            // _24 (weak)
	virtual void setPath(char* path) { DataLoadMgrNode::setPath(path); } // _28 (weak)

	// _00      = DataMgrBase*
	// _04      = VTABLE
	// _08-_214 = DataLoadMgrNode
	StrPrm _214; // _214

	// _250 - _270 = DataMgrBase (virtual)
};

template <typename A, typename B>
struct PrmDataMgrNode : public DataMgrNode {
	inline PrmDataMgrNode(B* data)
	    : mPrmSetRc(nullptr)
	    , _254(data)
	{
	}

	virtual ~PrmDataMgrNode<A, B>() { } // _08 (weak)
	virtual JKRHeap* getObjHeap();      // _14 (weak)
	virtual JKRHeap* getDataHeap();     // _18 (weak)
	virtual bool initInstance(void* buffer, s32 bufferLength)
	{
		if (initInstance()) {
			JSUMemoryInputStream input(buffer, bufferLength);
			// input.setBuffer(buffer, bufferLength);
			mPrmSetRc->load(input);
			return true;
		}
		return false;
	}                           // _1C (weak)
	virtual bool initInstance() // _20 (weak)
	{
		if (!mPrmSetRc) {
			mPrmSetRc = new (getObjHeap(), 0) A(_254, 0);
			return true;
		}

		return false;
	}

	// _00      = DataMgrBase*
	// _04      = VTBL
	// _08-_250 = DataMgrNode
	A* mPrmSetRc; // _250
	B* _254;      // _254, unknown
	              // _258-_278 = DataMgrBase (virtual)
};

struct DataLoadMgrVirNode {
	DataLoadMgrVirNode(u32);
	~DataLoadMgrVirNode();
	void init();
	const char* getPath();
};

struct DataMgrVirNode {
	DataMgrVirNode(u32);
	~DataMgrVirNode();
	void init();
	const char* getPath();
};

} // namespace JADUtility
#endif
