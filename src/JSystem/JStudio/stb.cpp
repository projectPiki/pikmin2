#include "JSystem/JStudio/stb.h"
#include "JSystem/JStudio/object.h"
#include "JSystem/JStudio/stb-data-parse.h"
#include "JSystem/JGadget/linklist.h"
#include "stl/algorithm.h"
#include "mem.h"

namespace JStudio {
namespace stb {

namespace data {
static const u32 gu32Mask_TSequence_value_signExpansion = 0xFF000000;
} // namespace data

inline u32 TObject::toInt32FromUInt24(u32 val)
{
	if (val & 0x800000) {
		val |= data::gu32Mask_TSequence_value_signExpansion;
	}
	return val;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
const char* TObject::toString_status(int status)
{
	// UNUSED FUNCTION
}

/**
 * @warning It's just a guess which param gets assigned to where.
 * @note Address: N/A
 * @note Size: 0x48
 */
TObject::TObject(u32 p1, const void* id, u32 idLength)
    : JStudio::object::TObject_ID(id, idLength)
    , mControl(nullptr)
    , mSignature(p1)
    , mFlag(0)
    , mIsActive(false)
    , mSuspend(0)
    , mSequence(nullptr)
    , mNextSequence(nullptr)
    , mWait(0)
    , mStatus(STATUS_STILL)
{
}

/**
 * @note Address: 0x80010278
 * @note Size: 0x70
 */
TObject::TObject(data::TParse_TBlock_object const& object)
    : JStudio::object::TObject_ID(object.getID(), object.getIDSize())
    , mControl(nullptr)
    , mSignature(object.getType())
    , mFlag(object.getFlag())
    , mIsActive(false)
    , mSuspend(0)
    , mSequence(nullptr)
    , mNextSequence(object.getContent())
    , mWait(0)
    , mStatus(STATUS_STILL)
{
}

/**
 * @note Address: 0x800102E8
 * @note Size: 0x48
 * __dt__Q37JStudio3stb7TObjectFv
 */
TObject::~TObject() { }

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void TObject::setFlag_operation(u8 operation, int flag)
{
	switch (operation) {
	default:
		break;
	case 1:
		mFlag |= flag;
		break;
	case 2:
		mFlag &= flag;
		break;
	case 3:
		mFlag ^= flag;
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TObject::reset(const void* next)
{
	mIsActive     = false;
	mStatus       = STATUS_STILL;
	mNextSequence = next;
	mWait         = 0;
}

/**
 * @note Address: 0x80010330
 * @note Size: 0x238
 */
bool TObject::forward(u32 time)
{
	bool forceEnd = false;
	while (true) {
		if (mFlag & 0x8000) {
			switch (mStatus) {
			case STATUS_STILL:
			case STATUS_END:
				break;

			case STATUS_WAIT:
			case STATUS_SUSPEND:
				setStatus(STATUS_INACTIVE);
				if (mIsActive) {
					on_end();
				}
				break;
			case STATUS_INACTIVE:
				break;
			default:
				break;
			}

			return true;
		}

		if (mStatus == STATUS_INACTIVE) {
			on_begin();
			setStatus(STATUS_WAIT);
		}

		TControl* control = getControl();
		if (control && control->isSuspended() || isSuspended()) {
			if (mIsActive) {
				setStatus(STATUS_SUSPEND);
				on_wait(time);
			}
			return true;
		}

		while (true) {
			void* nextSeq = (void*)getNextSequence(); // this has to be void* (not const) to match lol.
			setSequence(nextSeq);
			if (!nextSeq) {
				if (mIsActive) {
					if (!forceEnd) {
						on_wait(0);
					}
					mIsActive = false;
					setStatus(STATUS_END);
					on_end();
				}
				return false;
			}

			if (!mIsActive) {
				mIsActive = true;
				on_begin();
			}

			setStatus(STATUS_WAIT);
			if (mWait == 0) {
				process_sequence_();
				if (mWait == 0) {
					break;
				}
			}
			forceEnd = true;
			if (time >= mWait) {
				u32 prevWait = mWait;
				time -= prevWait;
				mWait = 0;
				on_wait(prevWait);

			} else {
				mWait -= time;
				on_wait(time);
				return true;
			}
		}
	}
}

/**
 * @note Address: 0x80010568
 * @note Size: 0x4
 */
void TObject::do_begin() { }

/**
 * @note Address: 0x8001056C
 * @note Size: 0x4
 */
void TObject::do_end() { }

/**
 * @note Address: 0x80010570
 * @note Size: 0x4
 */
void TObject::do_paragraph(u32, void const*, u32) { }

/**
 * @note Address: 0x80010574
 * @note Size: 0x4
 */
void TObject::do_wait(u32) { }

/**
 * @note Address: 0x80010578
 * @note Size: 0x4
 */
void TObject::do_data(void const*, u32, void const*, u32) { }

/**
 * @note Address: 0x8001057C
 * @note Size: 0x1A4
 */
void TObject::process_sequence_()
{
	data::TParse_TSequence seq(getSequence());
	data::TParse_TSequence::TData dat;

	seq.getData(&dat);

	u8 type             = dat.mType;
	u32 value           = dat.mParam;
	const void* content = dat.mContent;
	const void* next    = dat.mNext;
	setNextSequence(dat.mNext);

	switch (type) {
	case 0:
		break;
	case 1:
		setFlag_operation(value);
		break;
	case 2:
		setWait(value);
		break;
	case 3:
		s32 off       = toInt32FromUInt24(value);
		void* nextseq = (void*)getSequenceOffset(off);
		setNextSequence(nextseq);
		break;
	case 4:
		u32 val = toInt32FromUInt24(value);
		suspend(val);
		break;
	case 0x80:
		void* p = (void*)content;
		data::TParse_TParagraph para(nullptr);
		while (p < next) {
			para.setRaw(p);

			data::TParse_TParagraph::TData para_data;
			para.getData(&para_data);
			if (para_data.mType <= 255) {
				process_paragraph_reserved_(para_data.mType, para_data.mContent, para_data.mParam);
			} else {
				on_paragraph(para_data.mType, para_data.mContent, para_data.mParam);
			}
			p = (void*)para_data.mNext;
		}
		break;
	default:
		break;
	}
}

/**
 * @note Address: 0x80010720
 * @note Size: 0x13C
 * process_paragraph_reserved___Q37JStudio3stb7TObjectFUlPCvUl
 */
void TObject::process_paragraph_reserved_(u32 type, const void* content, u32 size)
{
	switch (type) {
	case 0x1:
		setFlag_operation(*(u32*)content);
		break;
	case 0x2:
		setWait(*(u32*)content);
		break;
	case 0x3:
		const void* seq = getSequenceOffset(*(s32*)content);
		setNextSequence(seq);
		break;
	case 0x80:
		on_data(nullptr, 0, content, size);
		break;
	case 0x81:
		data::TParse_TParagraph_dataID dataID(content);
		const void* temp = dataID.getContent();
		on_data(dataID.getID(), dataID.getIDSize(), temp, size - ((u32)temp - (u32)dataID.getRaw()));
		break;
	case 0x82:
		break;
	}
}

/**
 * @warning It's just a guess which param gets assigned to where.
 * @note Address: N/A
 * @note Size: 0x58
 * __ct__Q37JStudio3stb15TObject_controlFPCvUl
 */
TObject_control::TObject_control(void const* p1, u32 p2)
    : TObject(0xFFFFFFFF, p1, p2)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 * __ct__Q37JStudio3stb15TObject_controlFRCQ47JStudio3stb4data20TParse_TBlock_object
 */
TObject_control::TObject_control(data::TParse_TBlock_object const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8001085C
 * @note Size: 0x94
 * __ct__Q37JStudio3stb8TControlFv
 */
TControl::TControl()
    : _04(0)
    , _08(0)
    , mFactory(nullptr)
    , mObjectContainer()
    , mObject_control(nullptr, 0)
    , mSuspend(0)
{
	mStatus                  = 0;
	mObject_control.mControl = this;
}

/**
 * @note Address: 0x800108F0
 * @note Size: 0x5C
 * __dt__Q37JStudio3stb15TObject_controlFv
 */
// TObject_control::~TObject_control() { }

/**
 * @note Address: 0x8001094C
 * @note Size: 0x9C
 * __dt__Q37JStudio3stb8TControlFv
 */
TControl::~TControl() { mObject_control.mControl = nullptr; }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void TControl::appendObject(TObject*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void TControl::removeObject(TObject*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void TControl::removeObject_all()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TControl::destroyObject(TObject*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void TControl::destroyObject_all()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800109E8
 * @note Size: 0x94
 */
TObject* TControl::getObject(void const* id, u32 length)
{
	JGadget::TLinkList<TObject, -12>::iterator start = mObjectContainer.begin();
	JGadget::TLinkList<TObject, -12>::iterator end   = mObjectContainer.end();
	JGadget::TLinkList<TObject, -12>::iterator bob   = std::find_if(start, end, object::TPRObject_ID_equal(id, length));
	return (bob != end) ? &*bob : nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void TControl::getObject_index(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void TControl::reset()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80010B18
 * @note Size: 0xF0
 */
bool TControl::forward(u32 time)
{
	mSuspend                                       = referObject_control().getSuspend();
	bool result                                    = referObject_control().forward(time);
	int statusAnd                                  = 15;
	int statusOr                                   = 0;
	JGadget::TLinkList<TObject, -12>::iterator it  = mObjectContainer.begin();
	JGadget::TLinkList<TObject, -12>::iterator end = mObjectContainer.end();
	while (it != (end)) {
		bool check   = false;
		TObject* obj = (it++).operator->();
		if (obj->forward(time) || result) {
			check = true;
		}
		result = check;

		statusAnd &= obj->getStatus();
		statusOr |= obj->getStatus();
	}

	setStatus(statusAnd | statusOr << 16);

	return result;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r25, 0x44(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x40(r3)
	addi     r3, r30, 0x20
	stw      r0, 0x54(r30)
	bl       forward__Q37JStudio3stb7TObjectFUl
	lwz      r0, 0x14(r30)
	addi     r4, r30, 0x14
	stw      r4, 0x24(r1)
	mr       r27, r3
	li       r26, 0xf
	li       r25, 0
	stw      r4, 0x20(r1)
	stw      r4, 0x34(r1)
	stw      r4, 0x30(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x38(r1)
	stw      r4, 0x3c(r1)
	b        lbl_80010BC4

lbl_80010B80:
	lwz      r3, 0x38(r1)
	mr       r4, r31
	li       r29, 0
	lwz      r0, 0(r3)
	addi     r28, r3, -12
	mr       r3, r28
	stw      r0, 0x38(r1)
	bl       forward__Q37JStudio3stb7TObjectFUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80010BB0
	clrlwi.  r0, r27, 0x18
	beq      lbl_80010BB4

lbl_80010BB0:
	li       r29, 1

lbl_80010BB4:
	lwz      r0, 0x30(r28)
	mr       r27, r29
	and      r26, r26, r0
	or       r25, r25, r0

lbl_80010BC4:
	lwz      r3, 0x3c(r1)
	lwz      r0, 0x38(r1)
	stw      r3, 0x14(r1)
	cmplw    r0, r3
	stw      r0, 0x10(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_80010B80
	slwi     r0, r25, 0x10
	mr       r3, r27
	or       r0, r26, r0
	stw      r0, 0x1c(r30)
	lmw      r25, 0x44(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80010C08
 * @note Size: 0x48
 * __dt__Q37JStudio3stb8TFactoryFv
 */
TFactory::~TFactory() { }

/**
 * @note Address: 0x80010C50
 * @note Size: 0x8
 */
TObject* TFactory::create(data::TParse_TBlock_object const&) { return nullptr; }

/**
 * @note Address: 0x80010C58
 * @note Size: 0x3C
 * destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject
 */
void TFactory::destroy(TObject* object) { delete object; }

/**
 * @note Address: 0x80010C94
 * @note Size: 0x20
 * __ct__Q37JStudio3stb6TParseFPQ37JStudio3stb8TControl
 */
TParse::TParse(TControl* control)
    : JGadget::binary::TParse_header_block()
    , mControl(control)
{
}

/**
 * @note Address: 0x80010CB4
 * @note Size: 0x60
 * __dt__Q37JStudio3stb6TParseFv
 */
TParse::~TParse() { }

/**
 * @note Address: 0x80010D14
 * @note Size: 0xC8
 */
bool TParse::parseHeader_next(const void** data, u32* blockCount, u32 flags)
{
	const void* pData = *data;

	const data::TParse_THeader header(pData);
	*data       = header.getContent();
	*blockCount = header.getBlockNum();

	if (memcmp(header.getSignature(), &data::ga4cSignature, 4) != 0) {
		return false;
	}

	if (header.getByteOrder() != 0xFEFF) {
		return false;
	}

	u32 version = header.getVersion();
	if (version < 1) {
		return false;
	} else if (version > 3) {
		return false;
	}
	return parseHeader(header, flags);
}

/**
 * @note Address: 0x80010DDC
 * @note Size: 0x54
 */
bool TParse::parseBlock_next(const void** dat, u32* size, u32 flags)
{
	const void* content = *dat;

	data::TParse_TBlock blk(content);
	*dat  = blk.getNext();
	*size = blk.getSize();
	return parseBlock_block(blk, flags);
}

/**
 * @note Address: 0x80010E30
 * @note Size: 0x8
 */
bool TParse::parseHeader(data::TParse_THeader const&, u32) { return true; }

/**
 * @note Address: 0x80010E38
 * @note Size: 0x38
 */
bool TParse::parseBlock_block(const data::TParse_TBlock& block, u32 flags) { return parseBlock_object(block.get(), flags); }

/**
 * @note Address: 0x80010E70
 * @note Size: 0x154
 */
bool TParse::parseBlock_object(const data::TParse_TBlock_object& object, u32 flags)
{
	TControl* control = getControl();

	if (object.getType() == data::BLOCK_NONE) {
		TObject_control& ref = control->referObject_control();
		ref.reset(object.getContent());
		return true;
	}

	if (flags & 0x10) {
		TObject* newObj = control->getObject(object.getID(), object.getIDSize());
		if (newObj) {
			newObj->reset(object.getContent());
			return true;
		}
	}

	if (flags & 0x20) {
		return true;
	}

	TFactory* factory = control->getFactory();
	if (!factory) {
		return false;
	}

	TObject* newObj = factory->create(object);
	if (!newObj) {
		if (flags & 0x40) {
			return true;
		}

		char a5c[8];
		char t[16];
		int type = object.getType();
		data::toString_block(a5c, type);
		return false;
	}
	control->appendObject(newObj);
	return true;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  lwz       r31, 0x4(r3)
	  lwz       r3, 0x4(r6)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x68
	  lhz       r4, 0xA(r6)
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x3E(r31)
	  addi      r4, r4, 0x3
	  rlwinm    r4,r4,0,0,29
	  addi      r4, r4, 0xC
	  stw       r0, 0x50(r31)
	  add       r4, r6, r4
	  stw       r4, 0x48(r31)
	  stw       r0, 0x4C(r31)
	  b         .loc_0x138

	.loc_0x68:
	  rlwinm.   r0,r30,0,27,27
	  beq-      .loc_0xBC
	  lhz       r5, 0xA(r6)
	  mr        r3, r31
	  addi      r4, r6, 0xC
	  bl        -0x504
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r6, 0x0(r29)
	  li        r4, 0
	  lhz       r5, 0xA(r6)
	  stb       r4, 0x1E(r3)
	  addi      r0, r5, 0x3
	  rlwinm    r5,r0,0,0,29
	  addi      r0, r5, 0xC
	  stw       r4, 0x30(r3)
	  add       r0, r6, r0
	  stw       r0, 0x28(r3)
	  stw       r4, 0x2C(r3)
	  li        r3, 0x1
	  b         .loc_0x138

	.loc_0xBC:
	  rlwinm.   r0,r30,0,26,26
	  beq-      .loc_0xCC
	  li        r3, 0x1
	  b         .loc_0x138

	.loc_0xCC:
	  lwz       r3, 0xC(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0xE0
	  li        r3, 0
	  b         .loc_0x138

	.loc_0xE0:
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r6, r3
	  bne-      .loc_0x104
	  rlwinm    r3,r30,26,31,31
	  b         .loc_0x138

	.loc_0x104:
	  stw       r31, 0x14(r6)
	  addi      r0, r31, 0x14
	  addi      r3, r1, 0x10
	  addi      r4, r31, 0x10
	  stw       r0, 0xC(r1)
	  addi      r5, r1, 0x14
	  addi      r6, r6, 0xC
	  stw       r0, 0x8(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  bl        0x16380
	  li        r3, 0x1

	.loc_0x138:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
} // namespace stb
} // namespace JStudio
