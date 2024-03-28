#include "Dolphin/mtx.h"
#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/TCreateObject.h"
#include "JSystem/JStudio/TFactory.h"
#include "JSystem/JStudio/TParse.h"
#include "JSystem/JStudio/stb.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JGadget/enumerator.h"
#include "JSystem/JGeometry.h"
#include "stl/mem.h"
#include "types.h"

namespace JStudio {

/**
 * @note Address: 0x8000CAA4
 * @note Size: 0x90
 */
TControl::TControl()
{
	mTransformOnSet = false;
	mTransformOnGet = false;
	Vec origin      = { 0.0f, 0.0f, 0.0f };
	transformOnSet_setOrigin(origin, 0.0f);
	transformOnGet_setOrigin(origin, 0.0f);
}

/**
 * @note Address: 0x8000CB34
 * @note Size: 0x70
 * __dt
 */
TControl::~TControl() { }

/**
 * @note Address: 0x8000CBA4
 * @note Size: 0x80
 */
void TControl::transformOnSet_setOrigin(const Vec& origin, f32 yRot)
{
	mTransformOnSet_Origin = origin;
	mTransformOnSet_RotY   = yRot;
	Mtx mtx;
	PSMTXRotRad(mtx, 'y', yRot * 0.017453292f);
	PSMTXTransApply(mtx, mTransformOnSet_Mtx, origin.x, origin.y, origin.z);
}

/**
 * @note Address: 0x8000CC24
 * @note Size: 0x94
 */
void TControl::transformOnGet_setOrigin(const Vec& origin, f32 yRot)
{
	mTransformOnGet_Origin = origin;
	mTransformOnGet_RotY   = yRot;
	Mtx transMtx;
	PSMTXTrans(transMtx, -origin.x, -origin.y, -origin.z);
	Mtx rotMtx;
	PSMTXRotRad(rotMtx, 'y', -yRot * 0.017453292f);
	PSMTXConcat(rotMtx, transMtx, mTransformOnGet_Mtx);
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void TControl::forward_value(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000CCB8
 * @note Size: 0x48
 * __dt__Q27JStudio13TCreateObjectFv
 */
TCreateObject::~TCreateObject() { }

/**
 * @note Address: 0x8000CD00
 * @note Size: 0x84
 * __dt__Q27JStudio8TFactoryFv
 */
TFactory::~TFactory() { }

/**
 * @note Address: 0x8000CD84
 * @note Size: 0x50
 */
void TFactory::appendCreateObject(JStudio::TCreateObject* object) { mList.Push_back(object); }

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void TFactory::removeCreateObject(JStudio::TCreateObject*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void TFactory::removeCreateObject_all()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000CDD4
 * @note Size: 0xB4
 */
TObject* TFactory::create(JStudio::stb::data::TParse_TBlock_object const& object)
{
	JGadget::TContainerEnumerator<TCreateObject, -4> container(&mList);

	while (container) {
		TCreateObject& createObj = *container;
		JStudio::TObject* obj;
		if (createObj.create(&obj, object)) {
			return obj;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x8000CE88
 * @note Size: 0x54
 * __ct__Q27JStudio6TParseFPQ27JStudio8TControl
 */
TParse::TParse(JStudio::TControl* control)
    : stb::TParse(control)
    , mFvbParse(&control->mFvbControl)
{
}

/**
 * @note Address: 0x8000CEDC
 * @note Size: 0x70
 * __dt__Q27JStudio6TParseFv
 */
TParse::~TParse() { }

/**
 * @note Address: 0x8000CF4C
 * @note Size: 0x78
 * parseHeader__Q27JStudio6TParseFRCQ47JStudio3stb4data14TParse_THeaderUl
 */
bool TParse::parseHeader(const JStudio::stb::data::TParse_THeader& header, u32 flag)
{
	const JStudio::stb::data::THeader::Target& target = header.getTarget();
	if (memcmp(target.mName, JStudio::data::ga8cSignature, sizeof(JStudio::data::ga8cSignature)) != 0) {
		return false;
	}
	if (target.mTargetVersion < 2) {
		return false;
	}
	if (target.mTargetVersion > 4) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x8000CFC4
 * @note Size: 0x44
 * parseBlock_block__Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl
 */
bool TParse::parseBlock_block(const JStudio::stb::data::TParse_TBlock& block, u32 flag)
{
	switch (block.getType()) {
	case 'JFVB':
		return parseBlock_block_fvb_(block, flag);
	default:
		return stb::TParse::parseBlock_block(block, flag);
	}
}

/**
 * @note Address: 0x8000D008
 * @note Size: 0x60
 * parseBlock_block_fvb___Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl
 */
bool TParse::parseBlock_block_fvb_(const JStudio::stb::data::TParse_TBlock& block, u32 flag)
{
	const void* content = block.getContent();
	u32 parseFlag       = flag & 0xF;
	if ((flag & 0x10) != 0) {
		parseFlag |= 0x10;
	}
	if ((flag & 0x20) != 0) {
		parseFlag |= 0x20;
	}
	if ((flag & 0x40) != 0) {
		parseFlag |= 0x40;
	}
	return mFvbParse.parse(content, parseFlag);
}
} // namespace JStudio
