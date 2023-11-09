#ifndef _JSYSTEM_JAD_JADDATAMGR_H
#define _JSYSTEM_JAD_JADDATAMGR_H

#include "stl/string.h"
#include "JSystem/JSupport/JSUStream.h"
#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JAudio/JAD/JADStr.h"

namespace JADUtility {

/**
 * @size = 0x20
 */
struct DataMgrBase : public JKRDisposer {
	DataMgrBase();

	virtual ~DataMgrBase(); // _08
	virtual void init()
	{
		JKRHeap::free(_18, nullptr);
		_18 = nullptr;
	} // _0C (weak)

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	void* _18; // _18
};

/**
 * @size = 0x234 - could be wrong, inheritance is confusing
 */
struct DataLoadMgrNode : virtual public DataMgrBase {
	enum ObjStatus {};

	DataLoadMgrNode();

	virtual ~DataLoadMgrNode() { }  // _08 (weak)
	virtual bool isTempBuffaMode(); // _0C (weak)
	virtual void init()
	{
		_08 = 0;
		DataMgrBase::init();
	} // _10 (weak)

	virtual JKRHeap* getObjHeap()          = 0; // _14
	virtual JKRHeap* getDataHeap()         = 0; // _18
	virtual bool initInstance(void*, long) = 0; // _1C
	virtual bool initInstance()            = 0; // _20

	bool initInstanceExt(void*, long);
	void setFlagsAsExternal(void*);

	// unused/inlined:
	void setLoadPath(char const* path)
	{
		if (strlen(path) <= 0xFF) {
			strcpy(mLoadPath, path);
		}
	}
	// void load(JADUtility::DataLoadMgrNode::ObjStatus, bool);
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
	int _08;               // _08
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

	virtual ~DataMgrNode() { }                                           // _08 (weak)
	virtual void init() { DataLoadMgrNode::init(); }                     // _10 (weak)
	virtual JKRHeap* getObjHeap()          = 0;                          // _14
	virtual JKRHeap* getDataHeap()         = 0;                          // _18
	virtual bool initInstance(void*, long) = 0;                          // _1C
	virtual bool initInstance()            = 0;                          // _20
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
	virtual ~PrmDataMgrNode<A, B>(); // _08 (weak)
	virtual JKRHeap* getObjHeap();   // _14 (weak)
	virtual JKRHeap* getDataHeap();  // _18 (weak)
	virtual bool initInstance(void* buffer, long bufferLength)
	{
		bool success = initInstance();
		if (success != false) {
			JSUMemoryInputStream input;
			input.setBuffer(buffer, bufferLength);
			// TODO: vt _250 + 0x10
		}
		return success;
	}                               // _1C (weak)
	virtual bool initInstance() { } // _20 (weak)
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
