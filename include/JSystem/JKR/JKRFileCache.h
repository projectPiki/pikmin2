#ifndef _JSYSTEM_JKR_JKRFILECACHE_H
#define _JSYSTEM_JKR_JKRFILECACHE_H

#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JSupport/JSUList.h"

struct JKRArchive;
struct JKRFileCache : public JKRFileLoader {
	struct CCacheBlock : JSULink<CCacheBlock> {
		CCacheBlock(unsigned long, unsigned long, const void*);

		// JSULink<CCacheBlock> _00; // _00
		int _10;         // _10
		u32 _14;         // _14
		u32 _18;         // _18
		const void* _1C; // _1C
	};

	JKRFileCache(const char*, const char*);

	virtual ~JKRFileCache();                                                         // _00
	virtual bool becomeCurrent(const char*);                                         // _08
	virtual void* getResource(const char*);                                          // _0C
	virtual void* getResource(unsigned long, const char*);                           // _10
	virtual u32 readResource(void*, unsigned long, const char*);                     // _14
	virtual u32 readResource(void*, unsigned long, unsigned long, const char*);      // _18
	virtual void removeResourceAll();                                                // _1C
	virtual bool removeResource(void*);                                              // _20
	virtual bool detachResource(void*);                                              // _24
	virtual long getResSize(const void*) const;                                      // _28
	virtual u16 countFile(const char*) const;                                        // _2C
	virtual JKRFileFinder* getFirstFile(const char*) const;                          // _30
	virtual unkptr getFsResource(const char*);                                       // _34
	virtual unkptr getNameResource(unsigned long, const char*);                      // _38
	virtual long readFsResource(void*, unsigned long, const char*);                  // _3C
	virtual long readNameResource(void*, unsigned long, unsigned long, const char*); // _40

	// +4 bytes vtable padding

	CCacheBlock* findCacheBlock(const void*) const;
	CCacheBlock* findCacheBlock(unsigned long) const;
	bool findFile(char*, const char*) const;
	char* getDvdPathName(const char*) const;
	void convStrLower(char*) const;

	static JKRFileCache* mount(char const*, JKRHeap*, const char*);

	JKRHeap* _38;                          // _38
	JSUList<CCacheBlock> m_cacheBlockList; // _3C
	char* _48;                             // _48
	char* m_directoryPath;                 // _4C
	char* _50;                             // _50
};

#endif
