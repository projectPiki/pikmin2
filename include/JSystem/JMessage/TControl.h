#ifndef _JSYSTEM_JMESSAGE_TCONTROL_H
#define _JSYSTEM_JMESSAGE_TCONTROL_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"

namespace JMessage {

struct TResource;

struct TControl {
	TControl();

	virtual ~TControl(); // _08

	void reset();
	bool update();
	void render();
	bool setMessageCode(u16, u16);
	bool setMessageID(u32 lowerHalf, u32 upperHalf, bool* isMsgValid);
	bool setMessageCode_inSequence_(const TProcessor*, u16, u16);

	inline bool isReady_update_() const { return mMessageBegin && mBaseProcSeq; }
	inline bool isReady_render_() const { return _20 && mBaseProcRender; }

	inline TProcessor* getProcessor() const { return mBaseProcSeq ? (TProcessor*)mBaseProcSeq : (TProcessor*)mBaseProcRender; }

	inline bool setMessageCode_inReset_(TProcessor* proc, u16 msgCode, u16 msgIndex)
	{
		if (!setMessageCode_inSequence_(proc, msgCode, msgIndex)) {
			return false;
		}

		if (isReady_update_()) {
			mBaseProcSeq->setBegin_messageEntryText(mResourceCache, mEntry, mMessageBegin);
		}

		return true;
	}

	const char* getMessageText_begin() const { return mMessageBegin; }
	void* getMessageEntry() const { return mEntry; }

	// _00 = VTBL
	TSequenceProcessor* mBaseProcSeq;     // _04
	TRenderingProcessor* mBaseProcRender; // _08
	u16 mMessageCode;                     // _0C
	u16 mMessageIndex;                    // _0E
	const TResource* mResourceCache;      // _10
	void* mEntry;                         // _14
	const char* mMessageBegin;            // _18
	const char* mCurrentText;             // _1C
	const char* _20;                      // _20
	TProcessor::TStack mRenderStack;      // _24
};
} // namespace JMessage

#endif
