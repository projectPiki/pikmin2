#ifndef _JKRARAMARCHIVE_H
#define _JKRARAMARCHIVE_H

/*
    __vt__14JKRAramArchive:
    .4byte 0
    .4byte 0
    .4byte __dt__14JKRAramArchiveFv
    .4byte unmount__13JKRFileLoaderFv
    .4byte becomeCurrent__10JKRArchiveFPCc
    .4byte getResource__10JKRArchiveFPCc
    .4byte getResource__10JKRArchiveFUlPCc
    .4byte readResource__10JKRArchiveFPvUlPCc
    .4byte readResource__10JKRArchiveFPvUlUlPCc
    .4byte removeResourceAll__10JKRArchiveFv
    .4byte removeResource__10JKRArchiveFPv
    .4byte detachResource__10JKRArchiveFPv
    .4byte getResSize__10JKRArchiveCFPCv
    .4byte countFile__10JKRArchiveCFPCc
    .4byte getFirstFile__10JKRArchiveCFPCc
    .4byte getExpandedResSize__14JKRAramArchiveCFPCv
    .4byte fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl
    .4byte fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl
    .4byte setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl
    .4byte getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry
*/

struct JKRFileLoader {
	virtual void _08() = 0; // _08
	virtual void unmount(); // _0C

	// _00 VTBL
};

struct JKRArchive {
	virtual void _08() = 0;                                                      // _08
	virtual void _0C() = 0;                                                      // _0C
	virtual void becomeCurrent(const char*);                                     // _10
	virtual void getResource(const char*);                                       // _14
	virtual void getResource(unsigned long, const char*);                        // _18
	virtual void readResource(void*, unsigned long, const char*);                // _1C
	virtual void readResource(void*, unsigned long, unsigned long, const char*); // _20
	virtual void removeResourceAll();                                            // _24
	virtual void removeResource(void*);                                          // _28
	virtual void detachResource(void*);                                          // _2C
	virtual void getResSize(const void*) const;                                  // _30
	virtual void countFile(const char*) const;                                   // _34
	virtual void getFirstFile(const char*) const;                                // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void _40() = 0;                                                      // _40
	virtual void _44() = 0;                                                      // _44
	virtual void setExpandSize(SDIFileEntry*, unsigned long);                    // _48
	virtual void getExpandSize(SDIFileEntry*) const;                             // _4C

	// _00 VTBL
};

struct JKRAramArchive : public JKRFileLoader, public JKRArchive {
	virtual ~JKRAramArchive();                                                                   // _08
	virtual void getExpandedResSize(const void*) const;                                          // _3C
	virtual void fetchResource(JKRArchive::SDIFileEntry*, unsigned long*);                       // _40
	virtual void fetchResource(void*, unsigned long, JKRArchive::SDIFileEntry*, unsigned long*); // _44

	// _00 VTBL
};

#endif
