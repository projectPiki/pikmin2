#include "JSystem/JAudio/JAD/JADDataMgr.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JSupport/JSUStream.h"
#include "types.h"

/**
 * @note Address: 0x800BA7F8
 * @note Size: 0x44
 */
JADUtility::DataMgrBase::DataMgrBase()
    : JKRDisposer()
    , _18(nullptr)
{
}

/**
 * @note Address: 0x800BA83C
 * @note Size: 0x78
 */
JADUtility::DataMgrBase::~DataMgrBase()
{
	if (_18 != nullptr) {
		JKRHeap::free(_18, nullptr);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
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

/**
 * @note Address: 0x800BA8B4
 * @note Size: 0xC8
 */
JADUtility::DataLoadMgrNode::~DataLoadMgrNode() { }

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
// void JADUtility::DataLoadMgrNode::setLoadPath(char const*)
// {
// }

/**
 * @note Address: N/A
 * @note Size: 0x230
 */
// void JADUtility::DataLoadMgrNode::load(JADUtility::DataLoadMgrNode::ObjStatus, bool)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800BA97C
 * @note Size: 0x8
 */
bool JADUtility::DataLoadMgrNode::isTempBuffaMode() { return false; }

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
// bool JADUtility::DataLoadMgrNode::initInstanceExt()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800BA984
 * @note Size: 0xF0
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

/**
 * @note Address: 0x800BAA74
 * @note Size: 0x14
 */
void JADUtility::DataLoadMgrNode::setFlagsAsExternal(void* p1)
{
	_18 = p1;
	_08 = 3;
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
// void JADUtility::DataLoadMgrNode::loadDvd(u32*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800BAA88
 * @note Size: 0x15C
 */
JADUtility::DataMgrNode::DataMgrNode()
    : DataLoadMgrNode()
    , _214(0)
{
}

/**
 * @note Address: 0x800BABE4
 * @note Size: 0xA8
 */
// JADUtility::StrPrm::~StrPrm()
// {
// }

/**
 * @note Address: 0x800BAC8C
 * @note Size: 0x98
 */
// JADUtility::PrmHio<char*>::~PrmHio()
// {
// }

/**
 * @note Address: 0x800BAD24
 * @note Size: 0x88
 */
// JADUtility::Prm<char*>::~Prm()
// {
// }

/**
 * @note Address: 0x800BADAC
 * @note Size: 0x78
 */
// JADUtility::PrmBase::~PrmBase()
// {
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JADUtility::PrmBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
// JADUtility::DataLoadMgrVirNode::DataLoadMgrVirNode(u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
// JADUtility::DataMgrVirNode::DataMgrVirNode(u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
// JADUtility::DataMgrVirNode::~DataMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// const char* JADUtility::DataMgrVirNode::getPath()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
// void JADUtility::DataMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// const char* JADUtility::DataLoadMgrVirNode::getPath()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
// void JADUtility::DataLoadMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
// JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800BAE24
 * @note Size: 0xA0
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

/**
 * @note Address: 0x800BAEC4
 * @note Size: 0xA0
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

/**
 * @note Address: 0x800BAF64
 * @note Size: 0x78
 */
// void JADUtility::PrmBase::save(JSUMemoryOutputStream&)
// {
// }

/**
 * @note Address: 0x800BAFDC
 * @note Size: 0x164
 */
// JADUtility::DataMgrNode::~DataMgrNode() { }

/**
 * @note Address: 0x800BB140
 * @note Size: 0x8
 */
// char* JADUtility::DataMgrNode::getPath() { return mPath; }

/**
 * @note Address: 0x800BB148
 * @note Size: 0x50
 */
// void JADUtility::DataMgrNode::setPath(char* path) { DataLoadMgrNode::setPath(path); }

/**
 * @note Address: 0x800BB198
 * @note Size: 0x44
 */
// void JADUtility::DataMgrNode::init() { DataLoadMgrNode::init(); }

/**
 * @note Address: 0x800BB1DC
 * @note Size: 0x44
 */
// void JADUtility::DataLoadMgrNode::init()
// {
// }

/**
 * @note Address: 0x800BB220
 * @note Size: 0x3C
 */
// void JADUtility::DataMgrBase::init()
// {
// }

/**
 * @note Address: 0x800BB25C
 * @note Size: 0x84
 */
// void JADUtility::Prm<char*>::save(JSUMemoryOutputStream& output)
// {
// }

/**
 * @note Address: 0x800BB2E0
 * @note Size: 0x60
 */
// void JADUtility::Prm<char*>::load(JSUMemoryInputStream& input)
// {
// }

/**
 * @note Address: 0x800BB340
 * @note Size: 0x14
 */
// void @532 @28 @JADUtility::DataLoadMgrNode::init()
// {
// }

/**
 * @note Address: 0x800BB354
 * @note Size: 0x14
 */
// @532 @28 @JADUtility::DataLoadMgrNode::~DataLoadMgrNode()
// {
// }

/**
 * @note Address: 0x800BB368
 * @note Size: 0x14
 */
// void @592 @28 @JADUtility::DataMgrNode::init()
// {
// }

/**
 * @note Address: 0x800BB37C
 * @note Size: 0x14
 */
// @592 @28 @JADUtility::DataMgrNode::~DataMgrNode()
// {
// }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// void @532 @28 @JADUtility::DataLoadMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// @532 @28 @JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// void @532 @28 @JADUtility::DataMgrVirNode::init()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// @532 @28 @JADUtility::DataMgrVirNode::~DataMgrVirNode()
// {
// 	// UNUSED FUNCTION
// }
