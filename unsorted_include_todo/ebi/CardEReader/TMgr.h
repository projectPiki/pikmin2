#ifndef _EBI_CARDEREADER_TMGR_H
#define _EBI_CARDEREADER_TMGR_H

/*
    __vt__Q33ebi11CardEReader4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi11CardEReader4TMgrFv
*/

namespace ebi {
namespace CardEReader {
struct TMgr {
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
	void goEnd_(ebi::CardEReader::TMgr::enumErr);
};
} // namespace CardEReader
} // namespace ebi

#endif
