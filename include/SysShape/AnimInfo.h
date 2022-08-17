#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

#include "CNode.h"
#include "SysShape/KeyEvent.h"

struct J3DAnmBase;
struct J3DMtxCalc;
struct J3DModelData;
struct JAIAnimeFrameSoundData;
struct Stream;

namespace SysShape {
struct AnimMgr;

/**
 * @size{0x54}
 */
struct AnimInfo : public CNode {
	virtual ~AnimInfo(); // _08 (weak)

	void getLowestAnimKey(float);
	void getLastLoopStart(KeyEvent*);
	SysShape::KeyEvent* getAnimKeyByType(u32);
	void read(Stream&);
	void readEditor(Stream&);
	void attach(J3DModelData*, void*);

	inline AnimInfo* getInfoByID(int idx)
	{
		AnimInfo* info = this;
		for (info; info; info = (AnimInfo*)info->m_next) {
			if (idx != info->m_id) {
				continue;
			} else {
				return info;
			}
		}
		return nullptr;
	}

	J3DAnmBase* m_anm;  // _18
	J3DMtxCalc* m_calc; // _1C
	// animation ID
	short m_id;                        // _20
	JAIAnimeFrameSoundData* m_basFile; // _24
	KeyEvent m_keyEvent;               // _28
	short _48;                         // _48
	char* _4C;                         // _4C
	AnimMgr* m_mgr;                    // _50
};
} // namespace SysShape

#endif
