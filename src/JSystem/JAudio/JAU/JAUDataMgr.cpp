#include "JSystem/JAudio/JAD/JADDataMgr.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JSupport/JSUStream.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800BA7F8
 * Size:	000044
 */
JADUtility::DataMgrBase::DataMgrBase()
    : JKRDisposer()
    , _18(nullptr)
{
}

/*
 * --INFO--
 * Address:	800BA83C
 * Size:	000078
 */
JADUtility::DataMgrBase::~DataMgrBase()
{
	if (_18 != nullptr) {
		JKRHeap::free(_18, nullptr);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
JADUtility::DataLoadMgrNode::DataLoadMgrNode()
    : DataMgrBase()
    , _08(0)
    , _20C(0)
    , _210(0)
{
	setPath("\0");
	setLoadPath("\0");
}

/*
 * --INFO--
 * Address:	800BA8B4
 * Size:	0000C8
 */
JADUtility::DataLoadMgrNode::~DataLoadMgrNode() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
// void JADUtility::DataLoadMgrNode::setLoadPath(char const*)
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000230
 */
// void JADUtility::DataLoadMgrNode::load(JADUtility::DataLoadMgrNode::ObjStatus, bool)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800BA97C
 * Size:	000008
 */
bool JADUtility::DataLoadMgrNode::isTempBuffaMode() { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
// bool JADUtility::DataLoadMgrNode::initInstanceExt()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800BA984
 * Size:	0000F0
 */
bool JADUtility::DataLoadMgrNode::initInstanceExt(void* p1, long p2)
{
	JKRHeap* existingHeap = JKRHeap::sCurrentHeap;
	if (getObjHeap() != nullptr) {
		getObjHeap()->becomeCurrentHeap();
	}
	bool success = initInstance(p1, p2);
	if (getObjHeap() != nullptr) {
		existingHeap->becomeCurrentHeap();
	}
	if (success == false) {
		_08 = 0;
		_18 = nullptr;
		return false;
	}
	setFlagsAsExternal(p1);
	return true;
}

/*
 * --INFO--
 * Address:	800BAA74
 * Size:	000014
 */
void JADUtility::DataLoadMgrNode::setFlagsAsExternal(void* p1)
{
	_18 = p1;
	_08 = 3;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
// void JADUtility::DataLoadMgrNode::loadDvd(u32*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800BAA88
 * Size:	00015C
 */
JADUtility::DataMgrNode::DataMgrNode()
    : DataLoadMgrNode()
    , _214(0)
{
}

/*
 * --INFO--
 * Address:	800BABE4
 * Size:	0000A8
 */
// JADUtility::StrPrm::~StrPrm()
// {
// }

/*
 * --INFO--
 * Address:	800BAC8C
 * Size:	000098
 */
// JADUtility::PrmHio<char*>::~PrmHio()
// {
// }

/*
 * --INFO--
 * Address:	800BAD24
 * Size:	000088
 */
// JADUtility::Prm<char*>::~Prm()
// {
// }

/*
 * --INFO--
 * Address:	800BADAC
 * Size:	000078
 */
// JADUtility::PrmBase::~PrmBase()
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JADUtility::PrmBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
// JADUtility::DataLoadMgrVirNode::DataLoadMgrVirNode(u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
// JADUtility::DataMgrVirNode::DataMgrVirNode(u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
// JADUtility::DataMgrVirNode::~DataMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// const char* JADUtility::DataMgrVirNode::getPath()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
// void JADUtility::DataMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// const char* JADUtility::DataLoadMgrVirNode::getPath()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
// void JADUtility::DataLoadMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
// JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800BAE24
 * Size:	0000A0
 */
// void JADUtility::StrPrm::save(JSUMemoryOutputStream& output)
// {
// 	if (_30 > 0) {
// 		output.write(mValue, _30);
// 	} else {
// 		output.write(mValue);
// 	}
// 	PrmBase::save(output);
// }

/*
 * --INFO--
 * Address:	800BAEC4
 * Size:	0000A0
 */
// void JADUtility::StrPrm::load(JSUMemoryInputStream& input)
// {
// 	if (_30 > 0) {
// 		input.read(mValue, _30);
// 	} else {
// 		input.read(mValue);
// 	}
// 	PrmBase::load(input);
// 	if (_34 != nullptr && _38) {
// 		_34(this, _38);
// 	}
// }

/*
 * --INFO--
 * Address:	800BAF64
 * Size:	000078
 */
// void JADUtility::PrmBase::save(JSUMemoryOutputStream&)
// {
// }

/*
 * --INFO--
 * Address:	800BAFDC
 * Size:	000164
 */
// JADUtility::DataMgrNode::~DataMgrNode() { }

/*
 * --INFO--
 * Address:	800BB140
 * Size:	000008
 */
// char* JADUtility::DataMgrNode::getPath() { return mPath; }

/*
 * --INFO--
 * Address:	800BB148
 * Size:	000050
 */
// void JADUtility::DataMgrNode::setPath(char* path) { DataLoadMgrNode::setPath(path); }

/*
 * --INFO--
 * Address:	800BB198
 * Size:	000044
 */
// void JADUtility::DataMgrNode::init() { DataLoadMgrNode::init(); }

/*
 * --INFO--
 * Address:	800BB1DC
 * Size:	000044
 */
// void JADUtility::DataLoadMgrNode::init()
// {
// }

/*
 * --INFO--
 * Address:	800BB220
 * Size:	00003C
 */
// void JADUtility::DataMgrBase::init()
// {
// }

/*
 * --INFO--
 * Address:	800BB25C
 * Size:	000084
 */
// void JADUtility::Prm<char*>::save(JSUMemoryOutputStream& output)
// {
// }

/*
 * --INFO--
 * Address:	800BB2E0
 * Size:	000060
 */
// void JADUtility::Prm<char*>::load(JSUMemoryInputStream& input)
// {
// }

/*
 * --INFO--
 * Address:	800BB340
 * Size:	000014
 */
// void @532 @28 @JADUtility::DataLoadMgrNode::init()
// {
// }

/*
 * --INFO--
 * Address:	800BB354
 * Size:	000014
 */
// @532 @28 @JADUtility::DataLoadMgrNode::~DataLoadMgrNode()
// {
// }

/*
 * --INFO--
 * Address:	800BB368
 * Size:	000014
 */
// void @592 @28 @JADUtility::DataMgrNode::init()
// {
// }

/*
 * --INFO--
 * Address:	800BB37C
 * Size:	000014
 */
// @592 @28 @JADUtility::DataMgrNode::~DataMgrNode()
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// void @532 @28 @JADUtility::DataLoadMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// @532 @28 @JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// void @532 @28 @JADUtility::DataMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// @532 @28 @JADUtility::DataMgrVirNode::~DataMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }
