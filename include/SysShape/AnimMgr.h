#ifndef _SYSSHAPE_ANIMMGR_H
#define _SYSSHAPE_ANIMMGR_H

#include "CNode.h"
#include "SysShape/AnimInfo.h"

struct JKRFileLoader;

namespace PSGame {
struct SoundCreatureMgr;
} // namespace PSGame

namespace SysShape {
struct Model;

/**
 * @size{0x74}
 */
struct AnimMgr : public CNode {
	virtual ~AnimMgr(); // _00

	void connectBasArc(char*, char*, JKRFileLoader*);
	void dump();
	static AnimMgr* load(char*, J3DModelData*, JKRFileLoader*);
	static AnimMgr* load(JKRFileLoader*, char*, J3DModelData*, JKRFileLoader*,
	                     char*);
	void load(Stream&, J3DModelData*, JKRFileLoader*, char*);
	void read(Stream&);
	void registerSoundViewer(PSGame::SoundCreatureMgr*);

	Model* m_model;      // _18
	AnimInfo m_animInfo; // _1C
	u16 m_count;      // _70
};
} // namespace SysShape

#endif
