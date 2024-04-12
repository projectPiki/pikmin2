#ifndef _JSYSTEM_JMESSAGE_TRESOURCE_H
#define _JSYSTEM_JMESSAGE_TRESOURCE_H

#include "JSystem/JGadget/linklist.h"
#include "JSystem/JMessage/JMessage.h"
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
	TResource()
	{
		mHeader = nullptr;
		mINF1   = nullptr;
		mDAT1   = nullptr;
		mSTR1   = nullptr;
		mMID1   = nullptr;
	}

	s16 toMessageIndex_messageID(u32, u32, bool*) const;

	bool isContained_messageIndex(u16 messageIndex) const { return messageIndex < getMessageEntryNumber(); }

	u16 getMessageEntrySize() const { return mINF1->getMessageSize(); }
	u16 getMessageEntryNumber() const { return mINF1->getMessageNumber(); }
	char* getMessageEntry() const { return mINF1->getContent(); }

	void* getMessageEntry_messageIndex(u16 messageIndex) const
	{
		if (!isContained_messageIndex(messageIndex)) {
			return nullptr;
		}

		return mINF1->getContent() + messageIndex * getMessageEntrySize();
	}

	char* getMessageText_messageEntry(const void* entry) const { return (char*)mDAT1 + *(int*)entry; }

	// _00 = JGadget::TLinkListNode
	JMessageHeader* mHeader; // _08 - generic file type header info
	INF1Block* mINF1;        // _0C - info block
	DAT1Block* mDAT1;        // _10 - data block
	STR1Block* mSTR1;        // _14 - string/message block
	MID1Block* mMID1;        // _18 - message ID block
};

struct TResourceContainer {
	struct TCResource : public JGadget::TLinkList_factory<TResource, 0> {
		virtual ~TCResource();               // _08
		virtual TResource* Do_create();      // _0C
		virtual void Do_destroy(TResource*); // _10

		u16 Get_groupID(u16);

		// _00-_08 	= TNodeLinkList
		//		_00 	= mCount
		//		_04-_08 = mLinkListNode
		//			_04 	= mHead
		//			_08 	= mTail
		// _0C 		= VTABLE
	};

	TResourceContainer();

	u8 _00;                  // _00 - encoding?
	bool (*isLeadByte)(int); // _04 - function pointer for isLeadByte(int)
	TCResource _08;          // _08
	u32 _18;                 // _18
	u32 _1C;                 // _1C
};

} // namespace JMessage

#endif
