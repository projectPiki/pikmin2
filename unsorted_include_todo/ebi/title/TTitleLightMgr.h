#ifndef _EBI_TITLE_TTITLELIGHTMGR_H
#define _EBI_TITLE_TTITLELIGHTMGR_H

/*
    __vt__Q33ebi5title14TTitleLightMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi5title14TTitleLightMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q33ebi5title14TTitleLightMgrFv
    .4byte set__8LightMgrFR8Graphics
    .4byte set__8LightMgrFR7Matrixf
    .4byte drawDebugInfo__8LightMgrFR8Graphics
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct LightMgr {
	virtual ~LightMgr();                   // _08 (weak)
	virtual void _0C() = 0;                // _0C
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C
};

namespace ebi {
namespace title {
struct TTitleLightMgr : public CNode, public LightMgr {
	virtual ~TTitleLightMgr(); // _08 (weak)
	virtual void update();     // _10
	virtual void _20() = 0;    // _20

	TTitleLightMgr();
	void loadSettingFile(JKRArchive*, char*);
	void setParam_();
	void setCameraMtx(float (*)[4]);
};
} // namespace title
} // namespace ebi

#endif
