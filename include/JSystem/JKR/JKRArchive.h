#ifndef _JSYSTEM_JKR_JKRARCHIVE_H
#define _JSYSTEM_JKR_JKRARCHIVE_H

#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

struct JKRArchive : public JKRFileLoader {
	enum EMountMode { EMM_Unk0 = 0, EMM_Unk1, EMM_Unk2 };
	enum EMountDirection { EMD_Unk0 = 0, EMD_Unk1, EMD_Unk2 };

	struct CArcName {
		CArcName(const char**, char);

		const char* getString() const;
		u16 getHash() const;
		void store(const char*);
		char* store(const char*, char);

		u16 m_hash;         // _00
		short _02;          // _02
		char m_string[256]; // _04
	};

	struct SDIFileEntry {
		u8 _00[2];  // _00
		u16 m_hash; // _02
		u32 _04;    // _04
		int _08;    // _08
		int m_size; // _0C
		int _10;    // _10
	};

	JKRArchive(long, EMountMode);

	virtual ~JKRArchive(); // _00
	// virtual void unmount();                                       // _04
	virtual void becomeCurrent(const char*);                      // _08
	virtual void* getResource(const char*);                       // _0C
	virtual void* getResource(unsigned long, const char*);        // _10
	virtual void readResource(void*, unsigned long, const char*); // _14
	virtual void readResource(void*, unsigned long, unsigned long,
	                          const char*);                           // _18
	virtual void removeResourceAll();                                 // _1C
	virtual void removeResource(void*);                               // _20
	virtual void detachResource(void*);                               // _24
	virtual void getResSize(const void*) const;                       // _28
	virtual void countFile(const char*) const;                        // _2C
	virtual void getFirstFile(const char*) const;                     // _30
	virtual void getExpandedResSize(const void*) const;               // _34
	virtual u32 fetchResource(SDIFileEntry*, u32*)               = 0; // _38
	virtual void* fetchResource(void*, u32, SDIFileEntry*, u32*) = 0; // _3C
	virtual void setExpandSize(SDIFileEntry*, unsigned long);         // _40
	virtual void getExpandSize(SDIFileEntry*) const;                  // _44

	u32 findDirectory(const char*, u32) const;
	SDIFileEntry* findFsResource(const char*, u32) const;
	SDIFileEntry* findIdResource(u16) const;
	SDIFileEntry* findIdxResource(u32) const;
	SDIFileEntry* findNameResource(const char*) const;
	SDIFileEntry* findPtrResource(const void*) const;
	SDIFileEntry* findTypeResource(u32, const char*) const;
	bool isSameName(CArcName&, u32, u16) const;

	static JKRArchive* mount(char const*, JKRArchive::EMountMode, JKRHeap*,
	                         JKRArchive::EMountDirection);
};

struct JKRMemArchive : public JKRArchive {
};

#endif
