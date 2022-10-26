#ifndef _JSYSTEM_JAD_JADDATAMGR_H
#define _JSYSTEM_JAD_JADDATAMGR_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JAD/JADUtility.h"
#include "JSystem/JAD/JADStr.h"

namespace JADUtility {

/**
 * @size = 0x20
 */
struct DataMgrBase : public JKRDisposer {
	DataMgrBase();

	virtual ~DataMgrBase(); // _08
	virtual void init();    // _0C (weak)

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	JKRHeap* _18; // _18
	u32 _1C;      // _1C - unknown
};

// idk if this should exist, but _00 in DataLoadMgrNode needs to be a DataMgrBase*
// rather than a vtable so...
struct _DataLoadMgrBase {
	DataMgrBase* _00; // _00
};

/**
 * @size = 0x234 - could be wrong, inheritance is confusing
 */
struct DataLoadMgrNode : public _DataLoadMgrBase {
	virtual ~DataLoadMgrNode();                 // _08 (weak)
	virtual void isTempBuffaMode();             // _0C (weak)
	virtual void init();                        // _10 (weak)
	virtual void getObjHeap()              = 0; // _14
	virtual void getDataHeap()             = 0; // _18
	virtual void initInstance(void*, long) = 0; // _1C
	virtual void initInstance()            = 0; // _20
	virtual void getPath()                 = 0; // _24
	virtual void setPath(char*)            = 0; // _28

	void initInstanceExt(void*, long);
	void setFlagsAsExternal(void*);

	// _00      = DataMgrBase*
	// _04      = VTABLE
	int _08;          // _08
	char _0C[0x100];  // _0C - path buffer?
	char _10C[0x100]; // _10C - string buffer?

private:
	u8 _20C[0x8];     // _20C - unknown
	DataMgrBase _214; // _214
};

/**
 * @size = 0x270
 */
struct DataMgrNode : public DataLoadMgrNode {
	DataMgrNode();

	virtual ~DataMgrNode();                     // _08 (weak)
	virtual void init();                        // _10 (weak)
	virtual void getObjHeap()              = 0; // _14
	virtual void getDataHeap()             = 0; // _18
	virtual void initInstance(void*, long) = 0; // _1C
	virtual void initInstance()            = 0; // _20
	virtual void getPath();                     // _24 (weak)
	virtual void setPath(char*);                // _28 (weak)
	                                            // virtual void _2C() = 0;                     // _2C - maybe
	                                            // virtual void _30() = 0;                     // _30 - maybe

	// _00      = DataMgrBase*
	// _04      = VTABLE
	// _08-_20C = DataLoadMgrNode
	u32 _20C;         // _20C
	int _210;         // _210
	StrPrm _214;      // _214
	u32 _244;         // _244
	u32 _248;         // _248
	int _24C;         // _24C
	DataMgrBase _250; // _250
};

template <typename A, typename B>
struct PrmDataMgrNode : public DataMgrNode {
	virtual ~PrmDataMgrNode<A, B>();        // _08 (weak)
	virtual void isTempBuffaMode() = 0;     // _0C
	virtual void init()            = 0;     // _10
	virtual void getObjHeap();              // _14 (weak)
	virtual void getDataHeap();             // _18 (weak)
	virtual void initInstance(void*, long); // _1C (weak)
	virtual void initInstance();            // _20 (weak)
};

} // namespace JADUtility
#endif
