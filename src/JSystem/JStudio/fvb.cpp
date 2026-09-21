#include "JSystem/JStudio/fvb.h"
#include "JSystem/JStudio/functionvalue.h"
#include "JSystem/JStudio/object.h"
#include "stl/mem.h"

typedef const void* (*CompositeOperation)(JStudio::TFunctionValue_composite::TData);

namespace JStudio {
namespace fvb {

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
TObject::~TObject()
{
}

/**
 * @note Address: 0x8000BB48
 * @note Size: 0x21C
 */
void TObject::prepare(const JStudio::fvb::data::TParse_TBlock& block, JStudio::fvb::TControl* control)
{
	TFunctionValueAttributeSet set = mBaseFV->getAttributeSet();
	const void* pNext              = (const void*)block.getNext();
	const void* pData              = (const void*)block.getContent();

	while (pData < pNext) {
		data::TParse_TParagraph para(pData);
		data::TParse_TParagraph::TData dat;
		para.getData(&dat);
		u32 u32Type          = dat.mType;
		u32 u32Size          = dat.mSize;
		const void* pContent = dat.mContent;

		switch (u32Type) {
		case 0:
			goto end;
		case 1: {
			prepare_data_(dat, control);
		} break;
		case 0x10: {
			TFunctionValueAttribute_refer* referGet = set.refer_get();

			if (!referGet) {
				break;
			}

			JGadget::TVector_pointer<TFunctionValue*>& rCnt = referGet->refer_referContainer();

			u8* content = (u8*)pContent;
			u32 i       = *(u32*)content;
			u8* ptr     = content + 4;
			for (; i != 0; i--) {
				u32 size         = *(u32*)ptr;
				TObject* pObject = control->getObject(ptr + 4, size);
				if (pObject) {
					TFunctionValue& rfv = *pObject->referFunctionValue();
					rCnt.push_back(&rfv);
				}
				ptr += align_roundUp(size, 4) + 4;
			}

		} break;
		case 0x11: {
			TFunctionValueAttribute_refer* pfvaRefer = set.refer_get();

			if (!pfvaRefer) {
				break;
			}

			JGadget::TVector_pointer<TFunctionValue*>& rCnt = pfvaRefer->refer_referContainer();
			u32* content                                    = (u32*)pContent;
			u32* ptr                                        = content;
			u32 i                                           = content[0];
			for (; ptr++, i != 0; i--) {
				u32 index        = *ptr;
				TObject* pObject = control->getObject_index(index);
				if (pObject) {
					TFunctionValue& rfv = *pObject->referFunctionValue();
					rCnt.push_back(&rfv);
				}
			}

		} break;
		case 0x12: {
			TFunctionValueAttribute_range* pfvaRange = set.range_get();

			if (!pfvaRange) {
				break;
			}
			const f32* arr = static_cast<const f32*>(pContent);

			pfvaRange->range_set(arr[0], arr[1]);
		} break;
		case 0x13: {
			TFunctionValueAttribute_range* pfvaRange = set.range_get();

			if (!pfvaRange) {
				break;
			}

			TFunctionValue::TEProgress prog = *static_cast<const TFunctionValue::TEProgress*>(pContent);
			pfvaRange->range_setProgress(prog);

		} break;
		case 0x14: {
			TFunctionValueAttribute_range* pfvaRange = set.range_get();

			if (!pfvaRange) {
				break;
			}

			TFunctionValue::TEAdjust adjust = *static_cast<const TFunctionValue::TEAdjust*>(pContent);
			pfvaRange->range_setAdjust(adjust);

		} break;
		case 0x15: {
			TFunctionValueAttribute_range* pfvaRange = set.range_get();

			if (!pfvaRange) {
				break;
			}

			TFunctionValue::TEOutside a = (TFunctionValue::TEOutside)(static_cast<const u16*>(pContent))[0];
			TFunctionValue::TEOutside b = (TFunctionValue::TEOutside)(static_cast<const u16*>(pContent))[1];

			pfvaRange->range_setOutside(a, b);

		} break;
		case 0x16: {
			TFunctionValueAttribute_interpolate* pfvaInterpolate = set.interpolate_get();

			if (!pfvaInterpolate) {
				break;
			}

			TFunctionValue::TEInterpolate interp = *static_cast<const TFunctionValue::TEInterpolate*>(pContent);
			pfvaInterpolate->interpolate_set(interp);

		} break;
		}
		pData = dat.mNext;
	}

end:
	mBaseFV->prepare();
}

namespace {

/**
 * @note Address: 0x8000BD64
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_raw_(const void* data)
{
	return TFunctionValue_composite::TData(*(const void**)data);
}

/**
 * @note Address: 0x8000BD70
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_index_(const void* data)
{
	return TFunctionValue_composite::TData(*(u32*)data);
}

/**
 * @note Address: 0x8000BD7C
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_parameter_(const void* data)
{
	return TFunctionValue_composite::TData(*(f32*)data);
}

/**
 * @note Address: 0x8000BD88
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_add_(const void* data)
{
	return TFunctionValue_composite::TData(*(f32*)data);
}

/**
 * @note Address: 0x8000BD94
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_subtract_(const void* data)
{
	return TFunctionValue_composite::TData(*(f32*)data);
}

/**
 * @note Address: 0x8000BDA0
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_multiply_(const void* data)
{
	return TFunctionValue_composite::TData(*(f32*)data);
}

/**
 * @note Address: 0x8000BDAC
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_divide_(const void* data)
{
	return TFunctionValue_composite::TData(*(f32*)data);
}

static const CompositeOperation saCompositeOperation_[data::COMPOSITE_ENUM_SIZE] = {
	{ nullptr, nullptr },                                                             // COMPOSITE_NONE
	{ &TFunctionValue_composite::composite_raw, &getCompositeData_raw_ },             // COMPOSITE_RAW
	{ &TFunctionValue_composite::composite_index, &getCompositeData_index_ },         // COMPOSITE_IDX
	{ &TFunctionValue_composite::composite_parameter, &getCompositeData_parameter_ }, // COMPOSITE_PARAM
	{ &TFunctionValue_composite::composite_add, &getCompositeData_add_ },             // COMPOSITE_ADD
	{ &TFunctionValue_composite::composite_subtract, &getCompositeData_subtract_ },   // COMPOSITE_SUB
	{ &TFunctionValue_composite::composite_multiply, &getCompositeData_multiply_ },   // COMPOSITE_MUL
	{ &TFunctionValue_composite::composite_divide, &getCompositeData_divide_ },       // COMPOSITE_DIV
};

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
const CompositeOperation* getCompositeOperation_(data::TEComposite type)
{
	return &saCompositeOperation_[type];
}

} // namespace

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
TObject_composite::TObject_composite(const data::TParse_TBlock& block)
    : TObject(block, &mSpecFV)
{
}

/**
 * @note Address: 0x8000BDB8
 * @note Size: 0x6C
 */

void TObject_composite::prepare_data_(const data::TParse_TParagraph::TData& rData, TControl* control)
{
	typedef struct {
		JStudio::fvb::data::TEComposite _00;
		const void* _04;
	} unkOperation;

	u32 u32Size = rData.mSize;

	const void* pControl_             = rData.mContent;
	const unkOperation* content       = (const unkOperation*)(pControl_);
	JStudio::fvb::data::TEComposite v = content->_00;
	const CompositeOperation* res     = getCompositeOperation_(v);
	GetCompositeFunc pfvaRange        = res->mGetFunc;

	mSpecFV.data_set(res->mSetFunc, pfvaRange(&content->_04));
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
TObject_constant::TObject_constant(const data::TParse_TBlock& block)
    : TObject(block, &mSpecFV)
{
}

/**
 * @note Address: 0x8000BE24
 * @note Size: 0x10
 */
void TObject_constant::prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control)
{
	const f32* content = static_cast<const f32*>(data.mContent);
	mSpecFV.data_set(content[0]);
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
TObject_transition::TObject_transition(const data::TParse_TBlock& block)
    : TObject(block, &mSpecFV)
{
}

/**
 * @note Address: 0x8000BE34
 * @note Size: 0x18
 */
void TObject_transition::prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control)
{
	const f32* content = static_cast<const f32*>(data.mContent);
	mSpecFV.data_set(content[0], content[1]);
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
TObject_list::TObject_list(const data::TParse_TBlock& block)
    : TObject(block, &mSpecFV)
{
}

/**
 * @note Address: 0x8000BE4C
 * @note Size: 0x20
 */
void TObject_list::prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control)
{
	const TData* content = static_cast<const TData*>(data.mContent);
	mSpecFV.data_setInterval(content->_00);
	mSpecFV.data_set(content->_08, content->_04);
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
TObject_list_parameter::TObject_list_parameter(const data::TParse_TBlock& block)
    : TObject(block, &mSpecFV)
{
}

/**
 * @note Address: 0x8000BE6C
 * @note Size: 0x30
 */
void TObject_list_parameter::prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control)
{
	const TData* content = static_cast<const TData*>(data.mContent);

	mSpecFV.data_set(content->_04, content->_00);
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
TObject_hermite::TObject_hermite(const data::TParse_TBlock& block)
    : TObject(block, &mSpecFV)
{
}

/**
 * @note Address: 0x8000BE9C
 * @note Size: 0x38
 */
void TObject_hermite::prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control)
{
	const TData* content = static_cast<const TData*>(data.mContent);

	mSpecFV.data_set(content->_04, content->_00 & 0xFFFFFFF, content->_00 >> 0x1C);
}

/**
 * @note Address: 0x8000BED4
 * @note Size: 0x30
 */
TControl::TControl()
    : mFactory(nullptr)
{
}

/**
 * @note Address: 0x8000BF04
 * @note Size: 0x6C
 */
TControl::~TControl()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void TControl::appendObject(TObject* object)
{
	mObjectContainer.Push_back(object);
}

/**
 * @note Address: 0x8000BF70
 * @note Size: 0x94
 */
TObject* TControl::getObject(const void* id, u32 length)
{
	JGadget::TLinkList<TObject, -12>::iterator start  = mObjectContainer.begin();
	JGadget::TLinkList<TObject, -12>::iterator end    = mObjectContainer.end();
	JGadget::TLinkList<TObject, -12>::iterator target = std::find_if(start, end, object::TPRObject_ID_equal(id, length));

	// this needs to not inline later - probably an inline depth thing with iterators but Not Today :')
	// clang-format off
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	// clang-format on

	return (target != end) ? &*target : nullptr;
}

/**
 * @note Address: 0x8000C0A0
 * @note Size: 0x7C
 */
TObject* TControl::getObject_index(u32 idx)
{
	if (idx >= mObjectContainer.size()) {
		return nullptr;
	}

	JGadget::TLinkList<TObject, -12>::iterator begin(mObjectContainer.begin());
	while (idx != 0) {
		begin++;
		idx--;
	}
	return &*begin;
}

/**
 * @note Address: 0x8000C11C
 * @note Size: 0x48
 */
TFactory::~TFactory()
{
}

/**
 * @note Address: 0x8000C164
 * @note Size: 0x308
 */
TObject* TFactory::create(const data::TParse_TBlock& block)
{
	switch (block.getType()) {
	case TFunctionValue::TYPE_Composite:
		return new TObject_composite(block);

	case TFunctionValue::TYPE_Constant:
		return new TObject_constant(block);

	case TFunctionValue::TYPE_Transition:
		return new TObject_transition(block);

	case TFunctionValue::TYPE_List:
		return new TObject_list(block);

	case TFunctionValue::TYPE_List_Parameter:
		return new TObject_list_parameter(block);

	case TFunctionValue::TYPE_Hermite:
		return new TObject_hermite(block);
	default:
		return nullptr;
	}
}

/**
 * @note Address: 0x8000C46C
 * @note Size: 0x3C
 */
void TFactory::destroy(TObject* obj)
{
	delete obj;
}

/**
 * @note Address: 0x8000C4A8
 * @note Size: 0x20
 */
TParse::TParse(TControl* control)
    : mControl(control)
{
}

/**
 * @note Address: 0x8000C4C8
 * @note Size: 0x60
 */
TParse::~TParse()
{
}

/**
 * @note Address: 0x8000C528
 * @note Size: 0x98
 */
bool TParse::parseHeader_next(const void** dataPtr, u32* blockNumber, u32 flag)
{
	const void* data = *dataPtr;

	const data::TParse_THeader header(data);
	*dataPtr     = header.getContent();
	*blockNumber = header.getBlockNumber();

	if (memcmp(header.getSignature(), &data::ga4cSignature, 4) != 0) {
		return false;
	}

	if (header.getByteOrder() != 0xFEFF) {
		return false;
	}

	u32 version = header.getVersion();
	if (version < 2) {
		return false;

	} else if (version > 0x100) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x8000C5C0
 * @note Size: 0x118
 */
bool TParse::parseBlock_next(const void** dataPtr, u32* size, u32 flag)
{
	const void* data = *dataPtr;
	JStudio::fvb::data::TParse_TBlock block(data);
	*dataPtr = block.getNext();
	*size    = block.getSize();

	TControl* control = getControl();

	if (flag & 0x10 && control->getObject(block.getID(), block.getIDSize())) {
		return true;
	}

	if (flag & 0x20) {
		return true;
	}

	TFactory* factory = control->getFactory();
	if (!factory) {
		return false;
	}

	TObject* object = factory->create(block);
	if (!object) {
		if (flag & 0x40) {
			return true;
		}

		return false;
	}

	object->prepare(block, control);
	control->appendObject(object);
	return true;
}

} // namespace fvb
} // namespace JStudio
