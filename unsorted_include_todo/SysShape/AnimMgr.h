#ifndef _SYSSHAPE_ANIMMGR_H
#define _SYSSHAPE_ANIMMGR_H

/*
    __vt__Q28SysShape7AnimMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28SysShape7AnimMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace SysShape {
struct AnimMgr : public CNode {
	virtual ~AnimMgr(); // _08 (weak)

	void load(char*, J3DModelData*, JKRFileLoader*);
	void dump();
	void load(JKRFileLoader*, char*, J3DModelData*, JKRFileLoader*, char*);
	void load(Stream&, J3DModelData*, JKRFileLoader*, char*);
	void read(Stream&);
	void connectBasArc(char*, char*, JKRFileLoader*);
	void registerSoundViewer(PSGame::SoundCreatureMgr*);
};
} // namespace SysShape

#endif
