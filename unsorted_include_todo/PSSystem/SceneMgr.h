#ifndef _PSSYSTEM_SCENEMGR_H
#define _PSSYSTEM_SCENEMGR_H

/*
    __vt__Q28PSSystem8SceneMgr:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem8SceneMgrFv
*/

namespace PSSystem {
struct SceneMgr {
	virtual void exec(); // _08 (weak)

	void refreshCurEndScene();
	void findSeq(JASTrack*);
	void getPlayingSeq(JASTrack*);
	void deleteScene(PSSystem::Scene*);
	void deleteCurrentScene();
};
} // namespace PSSystem

#endif
