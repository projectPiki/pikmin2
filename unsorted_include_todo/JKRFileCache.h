#ifndef _JKRFILECACHE_H
#define _JKRFILECACHE_H

struct JKRFileLoader {
	virtual void _00() = 0; // _00
	virtual void unmount(); // _04

	// _00 VTBL
};

struct JKRFileCache : public JKRFileLoader {
	virtual ~JKRFileCache();                                      // _00
	virtual void unmount();                                       // _04
	virtual void becomeCurrent(const char*);                      // _08
	virtual void getResource(const char*);                        // _0C
	virtual void getResource(unsigned long, const char*);         // _10
	virtual void readResource(void*, unsigned long, const char*); // _14
	virtual void readResource(void*, unsigned long, unsigned long,
	                          const char*);                         // _18
	virtual void removeResourceAll();                               // _1C
	virtual void removeResource(void*);                             // _20
	virtual void detachResource(void*);                             // _24
	virtual void getResSize(const void*) const;                     // _28
	virtual void countFile(const char*) const;                      // _2C
	virtual void getFirstFile(const char*) const;                   // _30
	virtual void getFsResource(const char*);                        // _34
	virtual void getNameResource(unsigned long, const char*);       // _38
	virtual void readFsResource(void*, unsigned long, const char*); // _3C
	virtual void readNameResource(void*, unsigned long, unsigned long,
	                              const char*); // _40
	virtual void _44() = 0;                     // _44

	// _00 VTBL
};

#endif
