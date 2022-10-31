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

/**
 * @size{0x54}
 */
struct AnimInfo : public CNode {
	AnimInfo()
	{
		m_anm     = nullptr;
		m_calc    = nullptr;
		m_mgr     = nullptr;
		m_basFile = nullptr;
	}

	AnimInfo(AnimMgr* mgr)
	{
		m_mgr     = mgr;
		m_anm     = nullptr;
		m_calc    = nullptr;
		m_basFile = nullptr;
	}

	virtual ~AnimInfo(); // _08 (weak)

	void getLowestAnimKey(f32);
	void getLastLoopStart(KeyEvent*);
	KeyEvent* getAnimKeyByType(u32);
	void read(Stream&);
	void readEditor(Stream&);
	void attach(J3DModelData*, void*);

	inline AnimInfo* getInfoByID(int idx)
	{
		FOREACH_NODE(AnimInfo, this, info)
		{
			if (idx != info->m_id) {
				continue;
			} else {
				return info;
			}
		}
		return nullptr;
	}

	J3DAnmTransform* m_anm;            // _18
	J3DMtxCalc* m_calc;                // _1C
	s16 m_id;                          // _20, anim ID
	JAIAnimeFrameSoundData* m_basFile; // _24
	KeyEvent m_keyEvent;               // _28
	char* _4C;                         // _4C
	AnimMgr* m_mgr;                    // _50
};
} // namespace SysShape

#endif
