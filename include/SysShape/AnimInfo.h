#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

#include "SysShape/KeyEvent.h"

struct J3DAnmBase;
struct J3DAnmTransform;
struct J3DMtxCalc;
struct J3DModelData;
struct JAIAnimeFrameSoundData;
struct Stream;

namespace SysShape {
struct AnimMgr;
struct Model;

/**
 * @size{0x54}
 */
struct AnimInfo : public CNode {
	AnimInfo()
	{
		mAnm     = nullptr;
		mCalc    = nullptr;
		mMgr     = nullptr;
		mBasFile = nullptr;
	}

	AnimInfo(AnimMgr* mgr)
	{
		mMgr     = mgr;
		mAnm     = nullptr;
		mCalc    = nullptr;
		mBasFile = nullptr;
	}

	virtual ~AnimInfo() { } // _08 (weak)

	KeyEvent* getLowestAnimKey(f32 minimumFrame);
	KeyEvent* getLastLoopStart(KeyEvent* key);
	KeyEvent* getAnimKeyByType(u32 type);
	void read(Stream& input);
	void readEditor(Stream& input);
	void attach(J3DModelData*, void*);

	inline AnimInfo* getInfoByID(int idx)
	{
		FOREACH_NODE(AnimInfo, this, info)
		{
			if (idx != info->mId) {
				continue;
			} else {
				return info;
			}
		}
		return nullptr;
	}

	// unused/inlined:
	void attach(Model*, void*);
	void dump();
	void getLastLoopStart(f32);

	J3DAnmTransform* mAnm;            // _18
	J3DMtxCalc* mCalc;                // _1C
	s16 mId;                          // _20, anim ID
	JAIAnimeFrameSoundData* mBasFile; // _24
	KeyEvent mKeyEvent;               // _28
	char* mDevelopPath;               // _4C
	AnimMgr* mMgr;                    // _50
};
} // namespace SysShape

#endif
