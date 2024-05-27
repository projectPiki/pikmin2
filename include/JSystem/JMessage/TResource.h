#ifndef _JSYSTEM_JMESSAGE_TRESOURCE_H
#define _JSYSTEM_JMESSAGE_TRESOURCE_H

#include "JSystem/JGadget/linklist.h"
#include "JSystem/JMessage/data.h"
#include "types.h"

namespace JGadget {
struct TLinkListNode;
}

namespace JMessage {
struct TResource : public JGadget::TLinkListNode {
	TResource()
	    : mHeader(nullptr)
	    , mInfo(nullptr)
	    , mMessages(nullptr)
	    , mStringAttribute(nullptr)
	    , mMessageID(nullptr)
	{
	}

	u16 toMessageIndex_messageID(u32, u32, bool*) const;

	bool isContained_messageIndex(u16 messageIndex) const { return messageIndex < getMessageEntryNumber(); }

	u16 getMessageEntrySize() const { return mInfo.getMessageEntrySize(); }
	u16 getMessageEntryNumber() const { return mInfo.getMessageEntryNumber(); }

	u16 getGroupID() const { return mInfo.getGroupID(); }

	void* getMessageEntry_messageIndex(u32 messageIndex) const
	{
		if (!isContained_messageIndex(messageIndex)) {
			return nullptr;
		}

		return mInfo.getContent() + (messageIndex * getMessageEntrySize());
	}

	const char* getMessageText_messageEntry(const void* entry) const { return mMessages + *(int*)entry; }

	const char* getMessageText_messageIndex(u32 messageIndex) const
	{
		void* entry = getMessageEntry_messageIndex(messageIndex);
		if (entry == nullptr) {
			return nullptr;
		}

		return getMessageText_messageEntry(entry);
	}

	void setData_header(const void* p) { mHeader.setRaw(p); }
	void setData_block_info(const void* p) { mInfo.setRaw(p); }
	void setData_block_messageData(const void* p) { mMessages = (const char*)p; }
	void setData_block_stringAttribute(const void* p) { mStringAttribute = (const char*)p; }
	void setData_block_messageID(const void* p) { mMessageID = (data::TParse_TBlock_messageID*)p; }

	// _00 = JGadget::TLinkListNode
	data::TParse_THeader mHeader;             // _08 - generic file type header info
	data::TParse_TBlock_info mInfo;           // _0C
	const char* mMessages;                    // _10
	const char* mStringAttribute;             // _14
	data::TParse_TBlock_messageID mMessageID; // _18
};

struct TResource_color {
	TResource_color()
	    : mHeader(nullptr)
	    , mBlock(nullptr)
	{
	}

	void reset()
	{
		mHeader.setRaw(nullptr);
		mBlock.setRaw(nullptr);
	}

	void setData_header(const void* header) { mHeader.setRaw(header); }

	data::TParse_THeader mHeader;     // _00
	data::TParse_TBlock_color mBlock; // _04
};

struct TResourceContainer {
	struct TCResource : public JGadget::TLinkList_factory<TResource, 0> {
		virtual ~TCResource();               // _08
		virtual TResource* Do_create();      // _0C
		virtual void Do_destroy(TResource*); // _10

		TResource* Get_groupID(u16);

		// _00-_08 	= TLinkList_factory
		// _0C 		= VTABLE
	};

	typedef bool (*IsLeadByteFunc)(int);

	TResourceContainer();

	int parseCharacter(int string) const { return isLeadByte(string); }
	TResource* getResource_groupID(u16 groupID) { return mContainer.Get_groupID(groupID); }
	TResource* getResource_groupID(u16 groupID) const { return getResource_groupID(groupID); }

	bool isResourceContained_color() const { return mColor.mHeader.getRaw() != nullptr; }
	bool isEncodingSettable(u8 e) const { return mEncoding == e || mEncoding == 0; }
	const TCResource* getResourceContainer() const { return &mContainer; }
	const TResource_color* getResourceColor() const
	{
		if (mColor.mHeader.getRaw() != nullptr) {
			return &mColor;
		}
		return nullptr;
	}
	void destroyResource() { mContainer.Clear_destroy(); }
	void destroyResource_color() { mColor.reset(); }
	void destroyResource_all()
	{
		destroyResource();
		destroyResource_color();
	}

	void setEncoding(u8 encoding)
	{
		if (encoding == 0) {
			mEncoding  = encoding;
			isLeadByte = nullptr;
		} else {
			mEncoding               = encoding;
			IsLeadByteFunc defFunc  = nullptr;
			IsLeadByteFunc* funcPtr = &TResourceContainer::sapfnIsLeadByte_[encoding];
			if (encoding >= 4) {
				funcPtr = &defFunc;
			}
			isLeadByte = *funcPtr;
		}
	}

	static IsLeadByteFunc sapfnIsLeadByte_[4];

	u8 mEncoding;              // _00
	IsLeadByteFunc isLeadByte; // _04 - function pointer for isLeadByte, based on encoding
	TCResource mContainer;     // _08
	TResource_color mColor;    // _18
};

} // namespace JMessage

#endif
