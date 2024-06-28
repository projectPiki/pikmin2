#ifndef _JSTUDIO_STB_H
#define _JSTUDIO_STB_H

#include "JSystem/JStudio/object.h"
#include "JSystem/JGadget/binary.h"
#include "types.h"
#include "JSystem/JStudio/stb-data-parse.h"
#include "JSystem/JGadget/linklist.h"

namespace JStudio {
struct TObject;

namespace stb {
struct TControl;
struct TObject;

struct TParse : public JGadget::binary::TParse_header_block {
	TParse(TControl*);
	TParse(); // unused/inlined?

	virtual ~TParse();                                                      // _08
	virtual bool parseHeader_next(const void**, u32*, u32);                 // _0C
	virtual bool parseBlock_next(const void**, u32*, u32);                  // _10
	virtual bool parseHeader(const data::TParse_THeader&, u32);             // _14
	virtual bool parseBlock_block(const data::TParse_TBlock&, u32);         // _18
	virtual bool parseBlock_object(const data::TParse_TBlock_object&, u32); // _1C

	TControl* getControl() const { return mControl; }

	// _00 = VTBL
	TControl* mControl; // _04
};

struct TFactory {
	TFactory() { }

	virtual ~TFactory();                                                 // _08
	virtual JStudio::TObject* create(const data::TParse_TBlock_object&); // _0C
	virtual void destroy(TObject*);                                      // _10

	// _00 = VTBL
};

struct TObject : public JStudio::object::TObject_ID {
	typedef JGadget::TLinkList<TObject, -(int)sizeof(TObject_ID)> LinkList;

	enum TEStatus {
		STATUS_STILL    = 0,
		STATUS_END      = 1 << 0,
		STATUS_WAIT     = 1 << 1,
		STATUS_SUSPEND  = 1 << 2,
		STATUS_INACTIVE = 1 << 3,
	};

	TObject();
	TObject(u32, const void*, u32);
	TObject(const data::TParse_TBlock_object&);

	virtual ~TObject();                                       // _08
	virtual void do_begin();                                  // _0C
	virtual void do_end();                                    // _10
	virtual void do_paragraph(u32, const void*, u32);         // _14
	virtual void do_wait(u32);                                // _18
	virtual void do_data(const void*, u32, const void*, u32); // _1C

	bool forward(u32);
	void process_paragraph_reserved(int, int*, int);
	void process_sequence();
	const char* toString_status(int status);
	void setFlag_operation(u8, int);
	void reset(const void*);
	void process_sequence_();
	void process_paragraph_reserved_(u32, const void*, u32);

	void on_begin() { do_begin(); }
	void on_end() { do_end(); }
	void on_paragraph(u32 p1, const void* p2, u32 p3) { do_paragraph(p1, p2, p3); }
	void on_wait(u32 p1) { do_wait(p1); }
	void on_data(const void* p1, u32 p2, const void* p3, u32 p4) { do_data(p1, p2, p3, p4); }

	TControl* getControl() const { return mControl; }
	void setControl(TControl* control) { mControl = control; }
	int getSuspend() const { return mSuspend; }
	void setSuspend(s32 suspend) { mSuspend = suspend; }
	bool isSuspended() const { return getSuspend() > 0; }
	void suspend(s32 val) { mSuspend += val; }

	const void* getSequence() const { return mSequence; }
	void setSequence(const void* seq) { mSequence = seq; }
	const void* getSequenceOffset(s32 idx) const
	{
		int seqAddr = (s32)getSequence();
		return (const void*)(seqAddr + idx);
	}
	const void* getNextSequence() const { return mNextSequence; }
	void setNextSequence(const void* seq) { mNextSequence = seq; }
	u32 getWait() const { return mWait; }
	void setWait(u32 wait) { mWait = wait; }
	TEStatus getStatus() const { return mStatus; }
	void setStatus(TEStatus status) { mStatus = status; }

	inline u32 toInt32FromUInt24(u32 val);

	void setFlag_operation(u32 data) { setFlag_operation(data >> 16, data & 0xFFFF); }

	// _00-_08 = object::TObject_ID
	// _08     = VTBL
	JGadget::TLinkListNode mNode; // _0C
	TControl* mControl;           // _14
	u32 mSignature;               // _18
	u16 mFlag;                    // _1C
	bool mIsActive;               // _1E, was called bSequence_
	s32 mSuspend;                 // _20 - "second per frame"?
	const void* mSequence;        // _24
	const void* mNextSequence;    // _28
	u32 mWait;                    // _2C, was called u32Wait_
	TEStatus mStatus;             // _30
};

struct TObject_control : public TObject {
	TObject_control(const void*, u32);
	TObject_control(const data::TParse_TBlock_object&);

	virtual ~TObject_control() { } // _08 (weak)
};

struct TControl {
	TControl();

	virtual ~TControl(); // _08

	TObject* getObject(const void*, u32);
	bool forward(u32);

	// unused/inlined:
	void appendObject(TObject*);
	void removeObject(TObject*);
	void removeObject_all();
	void destroyObject(TObject*);
	void destroyObject_all();
	void getObject_index(u32);
	void reset();

	void setStatus(u32 status) { mStatus = status; }
	void resetStatus() { setStatus(0); }
	bool isSuspended() const { return mSuspend > 0; }
	TFactory* getFactory() const { return mFactory; }
	void setFactory(TFactory* factory) { mFactory = factory; }
	TObject_control& referObject_control() { return mObject_control; }
	int getSuspend() const { return mSuspend; }
	void setSuspend(s32 suspend) { mObject_control.setSuspend(suspend); }

	// could use a better name, used in moviePlayer::skip
	void stopAllObjects()
	{
		for (JGadget::TLinkList<TObject, -12>::iterator it = mObjectContainer.begin(); it != mObjectContainer.begin(); it++) {
			char* string = (char*)it->mIDString;
			if (string[0] == '#') {
				delete it.operator->();
			}
		}
	}

	// _00 = VTBL
	int _04;                                           // _04
	int _08;                                           // _08
	TFactory* mFactory;                                // _0C
	JGadget::TLinkList<TObject, -12> mObjectContainer; // _10
	u32 mStatus;                                       // _1C
	TObject_control mObject_control;                   // _20
	s32 mSuspend;                                      // _54 - "second per frame"?
};
} // namespace stb
} // namespace JStudio

namespace JGadget {
typedef JGadget::TLinkList<JStudio::stb::TObject, -12> TObjectList;
} // namespace JGadget

#endif
