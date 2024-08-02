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
TObject::~TObject() { }

/**
 * @note Address: 0x8000BB48
 * @note Size: 0x21C
 */
void TObject::prepare(const JStudio::fvb::data::TParse_TBlock& block, JStudio::fvb::TControl* control)
{
	TFunctionValueAttributeSet set = mBaseFV->getAttributeSet();
	const void* pNext              = block.getNext();
	const void* pData              = block.getContent();
	while (pData < pNext) {
		data::TParse_TParagraph para(pData);
		data::TParse_TParagraph::TData dat;
		para.getData(&dat);
		u32 u32Type                                          = dat.mType;
		u32 u32Size                                          = dat.mSize;
		const void* pContent                                 = dat.mContent;
		TFunctionValueAttribute_range* pfvaRange             = set.range_get();
		TFunctionValueAttribute_refer* referGet;
		TFunctionValueAttribute_interpolate* pfvaInterpolate = set.interpolate_get();

		switch (u32Type) {
		case 0:
			// mFVConstant->prepare();
			// return;
		case 1: {
			prepare_data_(dat, control);
		} break;
		case 0x10: {
			referGet = set.refer_get();

			if (!referGet) {
				break;
			}

			JGadget::TVector_pointer<TFunctionValue*>& rCnt = referGet->refer_referContainer();

			typedef struct {
				u32 length;
				const u8 data[0];
			} unkDataHeader;

			typedef struct {
				u32 count;
				unkDataHeader dataArray[0];
			} unkDataArray;

			const unkDataArray* i = static_cast<const unkDataArray*>(pContent);
            u32 dataCount = i->count;
			const unkDataHeader* d = i->dataArray;

			for (; dataCount != 0; dataCount--) {
				u32 length = d->length;

                TObject* pObject = control->getObject(&d->data, length);

                if (pObject) {
                    rCnt.push_back(&pObject->referFunctionValue());
                }

				#ifdef __MWERKS__ // clang-format off
                (const u8*)d += align_roundUp(length, sizeof(u32)) + sizeof(u32);
				#else
                d = (const unkDataHeader*)(((const u8*)d) + align_roundUp(length, sizeof(u32)) + sizeof(u32));
				#endif // clang-format on
			}
		} break;
		case 0x11: {
			TFunctionValueAttribute_refer* pfvaRefer = set.refer_get();

			if (!pfvaRefer) {
				break;
			}

            JGadget::TVector_pointer<TFunctionValue*>& rCnt = pfvaRefer->refer_referContainer();

			const u32* i = static_cast<const u32*>(pContent);
			u32 ii = *i;

			for (; i++, ii != 0; ii--) {
				u32 length = *i;
                TObject* pObject = control->getObject_index(length);
                if (pObject) {
                    rCnt.push_back(&pObject->referFunctionValue());
                }
			}
		} break;
		case 0x12: {
			if (!pfvaRange) {
				break;
			}
			const f32* arr = static_cast<const f32*>(pContent);

			pfvaRange->range_set(arr[0], arr[1]);
		} break;
		case 0x13: {
			if (!pfvaRange) {
				break;
			} 
		
			TFunctionValue::TEProgress prog = *static_cast<const TFunctionValue::TEProgress*>(pContent);
			pfvaRange->range_setProgress(prog);
		
		} break;
		case 0x14: {
			if (!pfvaRange) {
				break;
			}
			
			TFunctionValue::TEAdjust adjust = *static_cast<const TFunctionValue::TEAdjust*>(pContent);
			pfvaRange->range_setAdjust(adjust);
		
		} break;
		case 0x15: {
			if (!pfvaRange) {
				break;
			} 
			
			TFunctionValue::TEOutside a = (TFunctionValue::TEOutside)(static_cast<const u16*>(pContent))[0];
			TFunctionValue::TEOutside b = (TFunctionValue::TEOutside)(static_cast<const u16*>(pContent))[1];

			pfvaRange->range_setOutside(a, b);
		
		} break;
		case 0x16: {
			if (!pfvaInterpolate) {
				break;
			} 
			
			TFunctionValue::TEInterpolate interp = *static_cast<const TFunctionValue::TEInterpolate*>(pContent);
			pfvaInterpolate->interpolate_set(interp);
		
		} break;
		default:
			break;
		}
		pData = dat.mNext;
	}

	mBaseFV->prepare();
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r23, 0x3C(r1)
	  mr        r23, r4
	  mr        r26, r3
	  mr        r27, r5
	  lwz       r4, 0x14(r3)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x0(r23)
	  lwz       r31, 0x14(r1)
	  lhz       r3, 0x6(r5)
	  lwz       r4, 0x0(r5)
	  addi      r0, r3, 0x3
	  lwz       r30, 0x18(r1)
	  rlwinm    r0,r0,0,0,29
	  lwz       r29, 0x1C(r1)
	  add       r3, r5, r0
	  add       r28, r5, r4
	  addi      r3, r3, 0x8
	  b         .loc_0x1EC

	.loc_0x64:
	  stw       r3, 0x10(r1)
	  addi      r3, r1, 0x10
	  addi      r4, r1, 0x20
	  bl        0xE84
	  lwz       r0, 0x24(r1)
	  lwz       r4, 0x28(r1)
	  cmplwi    r0, 0x16
	  bgt-      .loc_0x1E8
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x1AB8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mr        r3, r26
	  mr        r5, r27
	  lwz       r12, 0x8(r26)
	  addi      r4, r1, 0x20
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8
	  cmplwi    r31, 0
	  beq-      .loc_0x1E8
	  lwz       r25, 0x0(r4)
	  addi      r24, r4, 0x4
	  b         .loc_0x118

	.loc_0xD0:
	  lwz       r23, 0x0(r24)
	  mr        r3, r27
	  addi      r4, r24, 0x4
	  mr        r5, r23
	  bl        0x348
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x14(r3)
	  mr        r3, r31
	  addi      r5, r1, 0xC
	  stw       r0, 0xC(r1)
	  lwz       r4, 0x8(r31)
	  bl        0x1C048

	.loc_0x104:
	  addi      r0, r23, 0x3
	  subi      r25, r25, 0x1
	  rlwinm    r0,r0,0,0,29
	  add       r24, r0, r24
	  addi      r24, r24, 0x4

	.loc_0x118:
	  cmplwi    r25, 0
	  bne+      .loc_0xD0
	  b         .loc_0x1E8
	  cmplwi    r31, 0
	  beq-      .loc_0x1E8
	  lwz       r24, 0x0(r4)
	  mr        r23, r4
	  b         .loc_0x168

	.loc_0x138:
	  lwz       r4, 0x0(r23)
	  mr        r3, r27
	  bl        0x418
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  lwz       r0, 0x14(r3)
	  mr        r3, r31
	  addi      r5, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r4, 0x8(r31)
	  bl        0x1BFE8

	.loc_0x164:
	  subi      r24, r24, 0x1

	.loc_0x168:
	  cmplwi    r24, 0
	  addi      r23, r23, 0x4
	  bne+      .loc_0x138
	  b         .loc_0x1E8
	  cmplwi    r30, 0
	  beq-      .loc_0x1E8
	  lfs       f1, 0x0(r4)
	  mr        r3, r30
	  lfs       f2, 0x4(r4)
	  bl        -0x30F8
	  b         .loc_0x1E8
	  cmplwi    r30, 0
	  beq-      .loc_0x1E8
	  lwz       r0, 0x0(r4)
	  stb       r0, 0x18(r30)
	  b         .loc_0x1E8
	  cmplwi    r30, 0
	  beq-      .loc_0x1E8
	  lwz       r0, 0x0(r4)
	  stb       r0, 0x19(r30)
	  b         .loc_0x1E8
	  cmplwi    r30, 0
	  beq-      .loc_0x1E8
	  lhz       r3, 0x2(r4)
	  lhz       r0, 0x0(r4)
	  stw       r0, 0x30(r30)
	  stw       r3, 0x34(r30)
	  b         .loc_0x1E8
	  cmplwi    r29, 0
	  beq-      .loc_0x1E8
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x0(r29)

	.loc_0x1E8:
	  lwz       r3, 0x2C(r1)

	.loc_0x1EC:
	  cmplw     r3, r28
	  blt+      .loc_0x64
	  lwz       r3, 0x14(r26)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lmw       r23, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

namespace {

/**
 * @note Address: 0x8000BD64
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_raw_(const void* data) { return TFunctionValue_composite::TData(*(const void**)data); }

/**
 * @note Address: 0x8000BD70
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_index_(const void* data) { return TFunctionValue_composite::TData(*(u32*)data); }

/**
 * @note Address: 0x8000BD7C
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_parameter_(const void* data) { return TFunctionValue_composite::TData(*(f32*)data); }

/**
 * @note Address: 0x8000BD88
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_add_(const void* data) { return TFunctionValue_composite::TData(*(f32*)data); }

/**
 * @note Address: 0x8000BD94
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_subtract_(const void* data) { return TFunctionValue_composite::TData(*(f32*)data); }

/**
 * @note Address: 0x8000BDA0
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_multiply_(const void* data) { return TFunctionValue_composite::TData(*(f32*)data); }

/**
 * @note Address: 0x8000BDAC
 * @note Size: 0xC
 */
TFunctionValue_composite::TData getCompositeData_divide_(const void* data) { return TFunctionValue_composite::TData(*(f32*)data); }

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
const CompositeOperation* getCompositeOperation_(data::TEComposite type) { return &saCompositeOperation_[type]; }

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
    // JUT_ASSERT(rData.u32Type==data::PARAGRAPH_DATA);
    
    u32 u32Size = rData.mSize;
    
    const void* pControl_ = rData.mContent;
    
    // JGADGET_ASSERTWARN(u32Size==8);
    // JUT_ASSERT(pControl_!=0);

    const unkOperation* content = (const unkOperation*)(pControl_);
    JStudio::fvb::data::TEComposite v = content->_00;
	const CompositeOperation* res           = getCompositeOperation_(v);
    GetCompositeFunc pfvaRange = res->mGetFunc;
    // JUT_ASSERT(pfvaRange!=NULL);

    mSpecFV.data_set(res->mSetFunc, pfvaRange(&content->_04));
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r5, 0x8(r4)
	  lis       r4, 0x8047
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x3300
	  addi      r4, r5, 0x4
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  lwz       r6, 0x0(r5)
	  rlwinm    r5,r6,3,0,28
	  add       r31, r0, r5
	  lwz       r12, 0x4(r31)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x30(r30)
	  lfd       f0, 0x8(r1)
	  stfd      f0, 0x38(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
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
TControl::~TControl() { }

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void TControl::appendObject(TObject* object) { mObjectContainer.Push_back(object); }

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
TFactory::~TFactory() { }

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
void TFactory::destroy(TObject* obj) { delete obj; }

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
TParse::~TParse() { }

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
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
rlwinm.  r0, r6, 0, 0x1b, 0x1b
stw      r31, 0x3c(r1)
stw      r30, 0x38(r1)
stw      r29, 0x34(r1)
mr       r29, r6
lwz      r7, 0(r4)
stw      r7, 0x20(r1)
lwz      r0, 0(r7)
add      r0, r7, r0
stw      r0, 0(r4)
lwz      r4, 0x20(r1)
lwz      r0, 0(r4)
stw      r0, 0(r5)
lwz      r30, 4(r3)
beq      lbl_8000C638
lwz      r3, 0x20(r1)
li       r4, 0
lhz      r5, 6(r3)
cmplwi   r5, 0
beq      lbl_8000C620
addi     r4, r3, 8

lbl_8000C620:
mr       r3, r30
bl       getObject__Q37JStudio3fvb8TControlFPCvUl
cmplwi   r3, 0
beq      lbl_8000C638
li       r3, 1
b        lbl_8000C6BC

lbl_8000C638:
rlwinm.  r0, r29, 0, 0x1a, 0x1a
beq      lbl_8000C648
li       r3, 1
b        lbl_8000C6BC

lbl_8000C648:
lwz      r3, 4(r30)
cmplwi   r3, 0
bne      lbl_8000C65C
li       r3, 0
b        lbl_8000C6BC

lbl_8000C65C:
lwz      r12, 0(r3)
addi     r4, r1, 0x20
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
or.      r31, r3, r3
bne      lbl_8000C680
rlwinm   r3, r29, 0x1a, 0x1f, 0x1f
b        lbl_8000C6BC

lbl_8000C680:
mr       r5, r30
addi     r4, r1, 0x20
bl
prepare__Q37JStudio3fvb7TObjectFRCQ47JStudio3fvb4data13TParse_TBlockPQ37JStudio3fvb8TControl
addi     r0, r30, 0xc
addi     r3, r1, 0x10
stw      r0, 0xc(r1)
addi     r4, r30, 8
addi     r5, r1, 0x14
addi     r6, r31, 0xc
stw      r0, 8(r1)
stw      r0, 0x1c(r1)
stw      r0, 0x18(r1)
stw      r0, 0x14(r1)
bl
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode
li       r3, 1

lbl_8000C6BC:
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
lwz      r29, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

} // namespace fvb
} // namespace JStudio
