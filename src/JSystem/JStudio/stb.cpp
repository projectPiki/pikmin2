#include "JSystem/JStudio/stb.h"
#include "JSystem/JStudio/object.h"
#include "JSystem/JStudio/TObject.h"
#include "JSystem/JStudio/stb-data-parse.h"
#include "JSystem/JGadget/linklist.h"
#include "stl/algorithm.h"
#include "mem.h"
#include "JSystem/JGadget/enumerator.h"

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
	JGadget::TObjectList::iterator start = mObjectContainer.begin();
	JGadget::TObjectList::iterator end   = mObjectContainer.end();
	JGadget::TObjectList::iterator bob   = std::find_if(start, end, object::TPRObject_ID_equal(id, length));

	// this needs to not inline later - probably an inline depth thing with iterators but Not Today :')
	// clang-format off
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
	// clang-format on

	return (bob != end) ? &*bob : nullptr;
}
} // namespace stb
} // namespace JStudio
template <>
JGadget::TObjectList::iterator std::find_if(JGadget::TObjectList::iterator first, JGadget::TObjectList::iterator last,
                                            JStudio::object::TPRObject_ID_equal p)
{
	for (; first != last && !p(*first); ++first) { }
	return first;
}

namespace JStudio {
namespace stb {

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
	TObject* p;

	mSuspend      = mObject_control.getSuspend();
	bool result   = mObject_control.forward(time);
	u32 statusAnd = 0x0f;
	u32 statusOr  = 0;

	// clang-format off
	for (JGadget::TContainerEnumerator_<JGadget::TObjectList> it(mObjectContainer); it.enumerator;) {
		// clang-format on

		// this sucks, ideally `*it` should return a `TObject&` or `TObject*`, but idk how to set that up
		p = &**it.enumerator;
		TObject::TEStatus s;

		bool v = true;
		if (!p->forward(time) && !result) {
			v = false;
		}
		result = v;

		s = p->getStatus();

		statusAnd &= s;
		statusOr |= s;
	}

	setStatus(statusAnd | statusOr << 16);

	return result;
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
JStudio::TObject* TFactory::create(data::TParse_TBlock_object const&) { return nullptr; }

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
		return (flags & 0x40) ? true : false;
	}

	newObj->mControl                 = control;
	JGadget::TObjectList::iterator i = control->mObjectContainer.end();
	control->mObjectContainer.Insert(i, newObj);

	return true;
}
} // namespace stb
} // namespace JStudio
