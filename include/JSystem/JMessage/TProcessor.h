#ifndef _JSYSTEM_JMESSAGE_TPROCESSOR_H
#define _JSYSTEM_JMESSAGE_TPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TResource.h"
#include "JSystem/JMessage/TReference.h"

namespace JMessage {

struct TReference;
struct TControl;
struct TResource;

struct TProcessor {
	typedef bool (*OnCharacterEndCallBack)(TProcessor*);
	typedef void (*OnSelectBeginCallBack)(TProcessor*);
	typedef const char* (*ProcessOnSelectCallBack)(TProcessor*);

	struct TStack {
		TStack() { clear(); }

		inline bool empty() const { return mSize == 0; }
		inline bool isPushable() const { return mSize < 4; }
		inline void clear() { mSize = 0; }

		inline u32 getMaxSize() const { return 4; }
		inline u32 getSize() const { return mSize; }
		inline const char* getTop() const { return mStack[mSize - 1]; }

		inline void push(const char* str)
		{
			mStack[mSize] = str;
			mSize++;
		}

		inline void pop() { mSize--; }

		inline void operator=(const TStack& other)
		{
			mSize = other.mSize;

			// pointers to copy from/to
			const char** dst = mStack;
			const char** src = (const char**)other.mStack;

			// this is a wild way to do this but sure.
			// copy from src to dst until src addr hits the actual end of the struct
			const char** endOfStruct = (const char**)&other.mStack[other.mSize];
			for (int i = 0; src < endOfStruct; i++) {
				*dst++ = *src++;
			}
		}

		u32 mSize;             // _00
		const char* mStack[4]; // _04
	};

	struct TProcess {
		struct TProcessData {
			ProcessOnSelectCallBack mSelectCallback; // _00
			const char* mBase;                       // _04
			const void* mOffset;                     // _08
			u32 mRest;                               // _0C
		};

		TProcess() { reset_normal(); }

		void reset_normal() { mEndCallback = process_onCharacterEnd_normal_; }
		void reset_select() { mEndCallback = process_onCharacterEnd_select_; }

		OnCharacterEndCallBack mEndCallback; // _00
		TProcessData mData;                  // _04
	};

	TProcessor(const TReference* reference)
	    : mReference(reference)
	    , mResourceCache(nullptr)
	    , mCurrent(nullptr)
	{
	}

	virtual ~TProcessor();                                     // _08
	virtual void do_reset();                                   // _0C
	virtual void do_character(int);                            // _10
	virtual bool do_tag(u32, const void*, u32);                // _14
	virtual bool do_systemTagCode(u16, const void*, u32);      // _18
	virtual void do_select_begin(u32);                         // _1C
	virtual void do_select_end();                              // _20
	virtual void do_select_separate();                         // _24
	virtual void do_reset_(const char*) = 0;                   // _28
	virtual bool do_setBegin_isReady_() const;                 // _2C
	virtual void do_begin_(const void*, const char*)      = 0; // _30
	virtual void do_end_()                                = 0; // _34
	virtual bool do_tag_(u32, const void*, u32)           = 0; // _38
	virtual void do_systemTagCode_(u16, const void*, u32) = 0; // _3C

	void setBegin_messageCode(u16 groupID, u16 messageIndex);
	void setBegin_messageID(u32, u32, bool*);
	void setBegin_messageCode(u32); // weak
	const TResource* getResource_groupID(u16) const;
	u32 toMessageCode_messageID(u32, u32, bool*) const;
	const char* on_message_limited(u16) const;         // weak
	const char* on_message(u32) const;                 // weak
	const char* getMessageText_messageCode(u32) const; // weak
	static bool process_onCharacterEnd_normal_(TProcessor*);
	static bool process_onCharacterEnd_select_(TProcessor*);
	static const char* process_onSelect_limited_(TProcessor*);
	static const char* process_onSelect_(TProcessor*);
	void reset_(const char*);

	int setBegin_messageEntryText(const TResource* resource, const void* entry, const char* param_2)
	{
		mResourceCache = resource;
		reset_(param_2);
		do_begin_(entry, param_2);
		return TRUE;
	}

	void* getMessageEntry_messageCode(u16 messageCode, u16 messageIndex) const
	{
		const TResource* res = getResource_groupID(messageCode);

		if (res == nullptr) {
			return nullptr;
		}

		return res->getMessageEntry_messageIndex(messageIndex);
	}

	const TResource* getResource_groupID_uncached(u16 groupID) const { return mReference->getResource_groupID(groupID); }

	bool isResourceCache_groupID(u16 groupID) const { return mResourceCache != nullptr && groupID == mResourceCache->getGroupID(); }

	const TResource* getResourceCache() const { return mResourceCache; }
	const char* getCurrent() const { return mCurrent; }
	const TReference* getReference() const { return mReference; }

	TResourceContainer* getResourceContainer() const
	{
		if (mReference == nullptr) {
			return nullptr;
		}

		return mReference->getResourceContainer();
	}

	void setResourceCache(TResource* cache) { mResourceCache = cache; }
	void resetResourceCache() { setResourceCache(nullptr); }

	int on_parseCharacter(int string) const { return mReference->on_parseCharacter(string); }
	void on_character(int character) { do_character(character); }

	void on_end() { do_end_(); }

	void on_tag(u32 p1, const void* p2, u32 p3)
	{
		if (!do_tag(p1, p2, p3)) {
			do_tag_(p1, p2, p3);
		}
	}

	// Unused/inlined:
	void pushCurrent(const char*);
	const char* popCurrent();
	unknown on_select_begin(ProcessOnSelectCallBack p1, const char* p2, const void* p3, const char* p4, u32 p5);
	unknown on_select_end();
	unknown on_select_separate();
	void on_tag_();
	bool process_character_();

	// _00 = VTBL
	const TReference* mReference;    // _04
	const TResource* mResourceCache; // _08
	const char* mCurrent;            // _0C
	TStack mStack;                   // _10
	TProcess mProcess;               // _24
};

struct TSequenceProcessor : public TProcessor {
	typedef void* (*OnJumpRegisterCallBack)(const TSequenceProcessor*);
	typedef void* (*OnBranchRegisterCallBack)(const TSequenceProcessor*, u32);

	enum SeqStatus {
		STATUS_Ready,
		STATUS_End,
		STATUS_Normal,
		STATUS_Jump,
		STATUS_Branch,
	};

	struct TProcess_ {
		TProcess_() { reset(); }

		void reset() { }

		union {
			struct {
				OnBranchRegisterCallBack mBranchFunc; // _00
				const void* mTargetAddr;              // _04
				u32 mTarget;                          // _08
			} mBranchProc;
			struct {
				OnJumpRegisterCallBack mJumpFunc; // _00
				u32 mTarget;                      // _04
			} mJumpProc;
		};
	};

	TSequenceProcessor(const TReference*, TControl*);

	virtual ~TSequenceProcessor();                         // _08
	virtual void do_reset_(const char*);                   // _28
	virtual bool do_setBegin_isReady_() const;             // _2C
	virtual void do_begin_(const void*, const char*);      // _30
	virtual void do_end_();                                // _34
	virtual bool do_tag_(u32, const void*, u32);           // _38
	virtual void do_systemTagCode_(u16, const void*, u32); // _3C
	virtual void do_begin(const void*, const char*);       // _40
	virtual void do_end();                                 // _44
	virtual bool do_isReady();                             // _48
	virtual bool do_jump_isReady();                        // _4C
	virtual void do_jump(const void*, const char*);        // _50
	virtual void do_branch_query(u16);                     // _54
	virtual int do_branch_queryResult();                   // _58
	virtual void do_branch(const void*, const char*);      // _5C

	const char* process(const char*);
	bool on_isReady();
	bool on_jump_isReady();
	void on_jump(const void*, const char*);
	int on_branch_queryResult();
	void on_branch(const void*, const char*);
	static void* process_onJump_limited_(const TSequenceProcessor*);
	static void* process_onJump_(const TSequenceProcessor*);
	static void* process_onBranch_limited_(const TSequenceProcessor*, u32);
	static void* process_onBranch_(const TSequenceProcessor*, u32);

	// Unused/inlined:
	const char* toString_status(int);
	int toValue_status(const char*);
	unknown on_jump_register(OnJumpRegisterCallBack*, const void*, u32);
	unknown on_branch_register(OnBranchRegisterCallBack*, const void*, const void*, u32);
	unknown on_branch_query(u16);
	unknown process_setMessageIndex_reserved_(u16);
	unknown process_setMessageCode_(const TSequenceProcessor*, u16, u16);

	// _00     = VTBL
	// _00-_38 = TProcessor
	TControl* mControl; // _38
	int mStatus;        // _3C
	TProcess_ mProc;    // _40
	                    // ProcessOnJumpCallBack* _40; // _40 - processorCallBack(void*, ulong) pointer?
	                    // u32 _44;                    // _44
	                    // u32 _48;                    // _48
};

struct TRenderingProcessor : public TProcessor {
	TRenderingProcessor(const TReference*);

	virtual ~TRenderingProcessor();                        // _08
	virtual void do_reset_(const char*);                   // _28
	virtual void do_begin_(const void*, const char*);      // _30
	virtual void do_end_();                                // _34
	virtual bool do_tag_(u32, const void*, u32);           // _38
	virtual void do_systemTagCode_(u16, const void*, u32); // _3C
	virtual void do_begin(const void*, const char*);       // _40
	virtual void do_end();                                 // _44

	int process(const char*);

	// _00     = VTBL
	// _00-_38 = TProcessor
};
} // namespace JMessage

#endif
