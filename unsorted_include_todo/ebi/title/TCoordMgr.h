#ifndef _EBI_TITLE_TCOORDMGR_H
#define _EBI_TITLE_TCOORDMGR_H

/*
    __vt__Q33ebi5title9TCoordMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi5title9TCoordMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace ebi {
namespace title {
struct TCoordMgr : public CNode {
	virtual ~TCoordMgr(); // _08 (inline)

	TCoordMgr();
	void copyCoordinate(Vector2<float>*);
	void readCoordinate(JKRArchive*, char*);
	void readCoordinate(Stream&);
};
} // namespace title
} // namespace ebi

#endif
