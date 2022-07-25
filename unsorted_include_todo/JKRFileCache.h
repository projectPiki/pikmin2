#ifndef _JKRFILECACHE_H
#define _JKRFILECACHE_H

/*
    __vt__12JKRFileCache:
    .4byte 0
    .4byte 0
    .4byte __dt__12JKRFileCacheFv
    .4byte unmount__13JKRFileLoaderFv
    .4byte becomeCurrent__12JKRFileCacheFPCc
    .4byte getResource__12JKRFileCacheFPCc
    .4byte getResource__12JKRFileCacheFUlPCc
    .4byte readResource__12JKRFileCacheFPvUlPCc
    .4byte readResource__12JKRFileCacheFPvUlUlPCc
    .4byte removeResourceAll__12JKRFileCacheFv
    .4byte removeResource__12JKRFileCacheFPv
    .4byte detachResource__12JKRFileCacheFPv
    .4byte getResSize__12JKRFileCacheCFPCv
    .4byte countFile__12JKRFileCacheCFPCc
    .4byte getFirstFile__12JKRFileCacheCFPCc
    .4byte getFsResource__12JKRFileCacheFPCc
    .4byte getNameResource__12JKRFileCacheFUlPCc
    .4byte readFsResource__12JKRFileCacheFPvUlPCc
    .4byte readNameResource__12JKRFileCacheFPvUlUlPCc
    .4byte 0
*/

struct JKRFileLoader {
	virtual ~JKRFileLoader(); // _08
	virtual void unmount();   // _0C
};

struct JKRFileCache : public JKRFileLoader {
	virtual ~JKRFileCache();                                                         // _08
	virtual void becomeCurrent(const char*);                                         // _10
	virtual void getResource(const char*);                                           // _14
	virtual void getResource(unsigned long, const char*);                            // _18
	virtual void readResource(void*, unsigned long, const char*);                    // _1C
	virtual void readResource(void*, unsigned long, unsigned long, const char*);     // _20
	virtual void removeResourceAll();                                                // _24
	virtual void removeResource(void*);                                              // _28
	virtual void detachResource(void*);                                              // _2C
	virtual void getResSize(const void*) const;                                      // _30
	virtual void countFile(const char*) const;                                       // _34
	virtual void getFirstFile(const char*) const;                                    // _38
	virtual void getFsResource(const char*);                                         // _3C (weak)
	virtual void getNameResource(unsigned long, const char*);                        // _40 (weak)
	virtual void readFsResource(void*, unsigned long, const char*);                  // _44 (weak)
	virtual void readNameResource(void*, unsigned long, unsigned long, const char*); // _48 (weak)
	virtual void _4C() = 0;                                                          // _4C
};

#endif
