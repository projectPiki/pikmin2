#ifndef _PSM_BOSSBGMFADER_MGR_H
#define _PSM_BOSSBGMFADER_MGR_H

/*
    __vt__Q33PSM12BossBgmFader3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33PSM12BossBgmFader3MgrFv
*/

namespace PSM {
namespace BossBgmFader {
struct Mgr {
	virtual ~Mgr(); // _08 (inline)

	Mgr();
	void appendTarget(JSULink<PSM::EnemyBoss>*);
	void exec();
};
} // namespace BossBgmFader
} // namespace PSM

#endif
