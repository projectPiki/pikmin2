#ifndef _SYSSHAPE_ANIMMGR_H
#define _SYSSHAPE_ANIMMGR_H

#include "CNode.h"
#include "SysShape/AnimInfo.h"
#include "PSGame/SoundCreatureMgr.h"

struct JKRFileLoader;

namespace SysShape {
struct Model;

/**
 * @size{0x74}
 */
struct AnimMgr : public CNode {
	AnimMgr()
	{
		mCount = 0;
		mModel = nullptr;
		mAnimInfo.clearRelations();
	}

	virtual ~AnimMgr() { } // _08 (weak)

	void dump();
	void load(Stream&, J3DModelData*, JKRFileLoader*, char*);
	void read(Stream&);
	void connectBasArc(char*, char*, JKRFileLoader*);
	void registerSoundViewer(PSGame::SoundCreatureMgr*);

	static AnimMgr* load(char* path, J3DModelData* modelData, JKRFileLoader* fileLoader);
	static AnimMgr* load(JKRFileLoader*, char*, J3DModelData*, JKRFileLoader*, char*);

	// unused/inlined:
	static AnimMgr* load(Stream&, SysShape::Model*, JKRFileLoader*, char*);

	// fabricated:
	AnimInfo* getAnimByID(int animID)
	{
		FOREACH_NODE(AnimInfo, mAnimInfo.mChild, info)
		{
			if (animID == info->mId) {
				return info;
			}
		}
		return nullptr;
	}

	Model* mModel;      // _18
	AnimInfo mAnimInfo; // _1C
	u16 mCount;         // _70
};

} // namespace SysShape

#endif
