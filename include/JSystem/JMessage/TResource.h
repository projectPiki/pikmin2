#ifndef _JSYSTEM_JMESSAGE_TRESOURCE_H
#define _JSYSTEM_JMESSAGE_TRESOURCE_H

#include "JSystem/JGadget/linklist.h"
#include "JSystem/JMessage.h"
#include "types.h"

namespace JGadget {
struct TLinkListNode;
}

namespace JMessage {
struct JMessageHeader;
struct INF1Block;
struct DAT1Block;
struct STR1Block;
struct MID1Block;

struct TResource : public JGadget::TLinkListNode {

	s16 toMessageIndex_messageID(u32, u32, bool*) const;

	JMessageHeader* m_header; // _08 - generic file type header info
	INF1Block* m_INF1;        // _0C - info block
	DAT1Block* m_DAT1;        // _10 - data block
	STR1Block* m_STR1;        // _14 - string/message block
	MID1Block* m_MID1;        // _18 - message ID block
};

struct TResourceContainer {
	struct TCResource : public JGadget::TLinkList_factory<TResource, 0> {
		virtual ~TCResource();               // _08
		virtual TResource* Do_create();      // _0C
		virtual void Do_destroy(TResource*); // _10

		void Get_groupID(u16);

		// _00-_08 	= TNodeLinkList
		//		_00 	= m_count
		//		_04-_08 = m_linkListNode
		//			_04 	= m_head
		//			_08 	= m_tail
		// _0C 		= VTABLE
	};

	TResourceContainer();

	u32 _00;                 // _00 - encoding?
	bool (*isLeadByte)(int); // _04 - function pointer for isLeadByte(int)
	TCResource _08;          // _08
	TCResource _14;          // _14
};

} // namespace JMessage

#endif
