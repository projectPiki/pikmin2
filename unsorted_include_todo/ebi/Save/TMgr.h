#ifndef _EBI_SAVE_TMGR_H
#define _EBI_SAVE_TMGR_H

/*
    __vt__Q33ebi4Save4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi4Save4TMgrFv
*/

namespace ebi {
namespace Save {
struct TMgr {
	virtual ~TMgr(); // _08

	void createInstance();
	void onDvdErrorOccured();
	void onDvdErrorRecovered();
	TMgr();
	void start();
	void forceQuit();
	void isFinish();
	void goEnd_(ebi::Save::TMgr::enumEnd);
	void update();
	void draw();
	void getStateID();
};
} // namespace Save
} // namespace ebi

#endif
