#ifndef _SYSSHAPE_ANIMMGR_H
#define _SYSSHAPE_ANIMMGR_H

#include "CNode.h"
#include "SysShape/AnimInfo.h"

struct JKRFileLoader;

namespace PSGame {
class SoundCreatureMgr {
public:
	void registerAnime(J3DAnmBase*, const char*);
};
} // namespace PSGame

namespace SysShape {
struct Model;

/**
 * @size{0x74}
 */
struct AnimMgr : public CNode {
	virtual ~AnimMgr(); // _08 (weak)

	static AnimMgr* load(char*, J3DModelData*, JKRFileLoader*);
	void dump();

	void load(Stream&, J3DModelData*, JKRFileLoader*, char*);
	static AnimMgr* load(JKRFileLoader*, char*, J3DModelData*, JKRFileLoader*, char*);

	void read(Stream&);
	void connectBasArc(char*, char*, JKRFileLoader*);
	void registerSoundViewer(PSGame::SoundCreatureMgr*);

	Model* m_model;      // _18
	AnimInfo m_animInfo; // _1C
	u16 m_count;         // _70
};

} // namespace SysShape

#endif
