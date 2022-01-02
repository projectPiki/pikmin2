#ifndef _JSTUDIO_STB_H
#define _JSTUDIO_STB_H

#include "types.h"
#include "JStudio/stb-data.h"
#include "JSystem/JGadget/linklist.h"

namespace JStudio::stb {

struct TParse {
	TParse(JStudio::stb::TControl*);
	TParse();

	// vt
	virtual ~TParse();
	virtual void parseHeader_next(void const**, ulong*, ulong);
	virtual void parseBlock_next(void const**, ulong*, ulong);
	virtual int parseHeader(data::TParse_THeader const&, ulong);
	virtual void parseBlock_block(data::TParse_TBlock const&, unsigned long);
	virtual void parseBlock_object(data::TParse_TBlock_object const&, ulong);

	TControl* control;
};

struct TFactory {
	virtual ~TFactory();
	virtual int create(data::TParse_TBlock_object const&);
	virtual void destroy(TObject*);
};

struct TControl {
	TControl();
	virtual ~TControl();
	void getObject(void const*, unsigned long);
	void forward(unsigned long);
	void appendObject(TObject*);
	void removeObject(TObject*);
	void removeObject_all();
	void destroyObject(TObject*);
	void destroyObject_all();
	void getObject_index(unsigned long);
	void reset();
	void forward(unsigned long);

	int _4;
	int _8;
	TFactory* pFactory;
	JGadget::TNodeLinkList mObjectContainer;
	u32 mStatus;
	TObject_control mObject_control;
	s32 _54; // "second per frame"?
};

struct TObject_control : TObject {
	TObject_control();
	TObject_control(void const*, ulong);
	TObject_control(data::TParse_TBlock_object const&);

	virtual ~TObject_control(void);
};

struct TObject {

	enum TEStatus {
		STATUS_STILL    = 0,
		STATUS_END      = 1 << 0,
		STATUS_WAIT     = 1 << 1,
		STATUS_SUSPEND  = 1 << 2,
		STATUS_INACTIVE = 1 << 3,
	};

	TObject();
	TObject(ulong, void const*, ulong);
	TObject(data::TParse_TBlock_object const&);

	// vtable
	virtual ~TObject();                                                   //_08
	virtual void do_begin();                                              //_0C
	virtual void do_end();                                                //_10
	virtual void do_paragraph(unsigned long, void const*, unsigned long); //_14
	virtual void do_wait(unsigned long);                                  //_18
	virtual void do_data(void const*, unsigned long, void const*,
	                     unsigned long); //_1c

	bool forward(unsigned long);
	void process_paragraph_reserved(int, int*, int);
	void process_sequence();
	void toString_status(int);
	void setFlag_operation(unsigned char, int);
	void reset(void const*);
	void process_sequence_();
	void process_paragraph_reserved_(unsigned long, void const*, unsigned long);

	int* _00; // this through 10 are for something called object::TObject_ID in
	          // TP that doesnt exist here
	int _04;
	int _08;
	int _0C;
	int _10;
	TControl* pControl;
	u32 signature;
	u16 mFlag;
	u8 bSequence_;
	u32 _20; // "second per frame"?
	const void* pSequence;
	const void* pSequence_next;
	u32 u32Wait_;
	TEStatus mStatus;
};

} // namespace JStudio::stb

#endif
