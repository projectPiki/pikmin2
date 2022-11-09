#ifndef _JSTUDIO_STB_H
#define _JSTUDIO_STB_H

#include "JStudio/object.h"
#include "JSystem/JGadget/binary.h"
#include "types.h"
#include "JStudio/stb-data.h"
#include "JSystem/JGadget/linklist.h"

namespace JStudio {
namespace stb {
struct TControl;
struct TObject;

struct TParse : JGadget::binary::TParse_header_block {
	TParse(TControl*);
	TParse(); // unused/inlined?

	virtual ~TParse();                                                      // _08
	virtual bool parseHeader_next(const void**, u32*, u32);                 // _0C
	virtual bool parseBlock_next(const void**, u32*, u32);                  // _10
	virtual bool parseHeader(const data::TParse_THeader&, u32);             // _14
	virtual void parseBlock_block(const data::TParse_TBlock&, u32);         // _18
	virtual void parseBlock_object(const data::TParse_TBlock_object&, u32); // _1C

	TControl* m_control;
};

struct TFactory {
	virtual ~TFactory();                                   // _08
	virtual int create(const data::TParse_TBlock_object&); // _0C
	virtual void destroy(TObject*);                        // _10
};

struct TObject : JStudio::object::TObject_ID {
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

	virtual ~TObject();                                       //_08
	virtual void do_begin();                                  //_0C
	virtual void do_end();                                    //_10
	virtual void do_paragraph(u32, const void*, u32);         //_14
	virtual void do_wait(u32);                                //_18
	virtual void do_data(const void*, u32, const void*, u32); //_1C

	bool forward(u32);
	void process_paragraph_reserved(int, int*, int);
	void process_sequence();
	void toString_status(int);
	void setFlag_operation(u8, int);
	void reset(const void*);
	void process_sequence_();
	void process_paragraph_reserved_(u32, const void*, u32);

	// int* _00; // _00 through _10 are for something called object::TObject_ID
	// in TP that doesnt exist here
	// int _04;
	// int _08;
	// VTBL _08
	JGadget::TLinkListNode _0C; // _0C
	TControl* pControl;         // _14
	u32 signature;              // _18
	u16 mFlag;                  // _1C
	u8 bSequence_;              // _1E
	u32 _20;                    // _20 - "second per frame"?
	const void* pSequence;      // _24
	const void* pSequence_next; // _28
	u32 u32Wait_;               // _2C
	TEStatus mStatus;           // _30
};

struct TObject_control : TObject {
	TObject_control(const void*, u32);
	TObject_control(const data::TParse_TBlock_object&);

	inline virtual ~TObject_control() {}; // _08 (weak)
};

struct TControl {
	TControl();

	virtual ~TControl(); // _08

	const TObject* getObject(const void*, u32);
	void forward(u32);

	// unused/inlined:
	void appendObject(TObject*);
	void removeObject(TObject*);
	void removeObject_all();
	void destroyObject(TObject*);
	void destroyObject_all();
	void getObject_index(u32);
	void reset();

	// VTBL _00
	int _4;             // _04
	int _8;             // _08
	TFactory* pFactory; // _0C
	// TObject::LinkList mObjectContainer; // _10
	JGadget::TLinkList<TObject, -12> mObjectContainer; // _10
	u32 mStatus;                                       // _1C
	TObject_control mObject_control;                   // _20
	s32 _54;                                           // _54 - "second per frame"?
};
} // namespace stb
} // namespace JStudio

#endif
