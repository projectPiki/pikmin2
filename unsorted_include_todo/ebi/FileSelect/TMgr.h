#ifndef _EBI_FILESELECT_TMGR_H
#define _EBI_FILESELECT_TMGR_H

/*
    __vt__Q33ebi10FileSelect4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi10FileSelect4TMgrFv
*/

namespace ebi {
namespace FileSelect {
struct TMgr {
	virtual ~TMgr(); // _08

	void createInstance();
	void onDvdErrorOccured();
	void onDvdErrorRecovered();
	void start();
	void forceQuit();
	void update();
	void draw();
	void showInfo();
	void isFinish();
	void goEnd_(ebi::FileSelect::TMgr::enumEnd);
	void getStateID();
};
} // namespace FileSelect
} // namespace ebi

#endif
