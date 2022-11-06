#ifndef _EBI_CARDEREADER_H
#define _EBI_CARDEREADER_H

namespace ebi {
namespace CardEReader {
struct TMgr {
	enum enumErr { UNKNOWN };

	virtual ~TMgr(); // _08

	void globalInstance();
	void loadResource();
	void init();
	void uploadToGBA(long);
	void probeAGB();
	void update();
	void isFinish();
	void threadProc(void*);
	void tryUploadToGBA_();
	void goEnd_(enumErr);

	// _00 VTBL
};
} // namespace CardEReader
} // namespace ebi

#endif
