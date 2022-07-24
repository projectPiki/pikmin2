#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

#include "CNode.h"
#include "SysShape/KeyEvent.h"

struct J3DAnmBase;
struct J3DMtxCalc;
struct JAIAnimeFrameSoundData;

namespace SysShape {
struct AnimMgr;

/**
 * @size{0x54}
 */
struct AnimInfo : public CNode {
	virtual ~AnimInfo(); // _08

	void attach(struct J3DModelData*, void*);
	void getAnimKeyByType(unsigned long);
	void getLastLoopStart(KeyEvent*);
	void getLowestAnimKey(float);

	void read(struct Stream&);
	void readEditor(Stream&);

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
