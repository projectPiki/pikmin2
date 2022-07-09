#ifndef _JSYSTEM_JKR_JKRARCHIVE_H
#define _JSYSTEM_JKR_JKRARCHIVE_H

#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

struct JKRArchive : public JKRFileLoader {
	enum EMountMode { EMM_Unk0 = 0, EMM_Unk1, EMM_Unk2, EMM_Unk4 = 4 };
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
		u16 _00;    // _00
		u16 m_hash; // _02
		u32 _04;    // _04
		int _08;    // _08
		int m_size; // _0C
		int _10;    // _10
	};

	struct SDirEntry {
		u8 _00;    // _00
		u8 _01;    // _01
		u16 _02;   // _02
		char* _04; // _04
		u8 _08[8]; // _08
	};

	JKRArchive(long, EMountMode);

	virtual ~JKRArchive(); // _00
	// virtual void unmount();                                       // _04
	virtual bool becomeCurrent(const char*);                                    // _08
	virtual void* getResource(const char*);                                     // _0C
	virtual void* getResource(unsigned long, const char*);                      // _10
	virtual u32 readResource(void*, unsigned long, const char*);                // _14
	virtual u32 readResource(void*, unsigned long, unsigned long, const char*); // _18
	virtual void removeResourceAll();                                           // _1C
	virtual bool removeResource(void*);                                         // _20
	virtual bool detachResource(void*);                                         // _24
	virtual long getResSize(const void*) const;                                 // _28
	virtual int countFile(const char*) const;                                   // _2C
	virtual unkptr getFirstFile(const char*) const;                             // _30
	virtual long getExpandedResSize(const void*) const;                         // _34
	virtual u32 fetchResource(SDIFileEntry*, u32*)               = 0;           // _38
	virtual void* fetchResource(void*, u32, SDIFileEntry*, u32*) = 0;           // _3C
	virtual void setExpandSize(SDIFileEntry*, unsigned long);                   // _40
	virtual void getExpandSize(SDIFileEntry*) const;                            // _44

	SDirEntry* findDirectory(const char*, u32) const;
	SDIFileEntry* findFsResource(const char*, u32) const;
	SDIFileEntry* findIdResource(u16) const;
	SDIFileEntry* findIdxResource(u32) const;
	SDIFileEntry* findNameResource(const char*) const;
	SDIFileEntry* findPtrResource(const void*) const;
	SDIFileEntry* findTypeResource(u32, const char*) const;
	bool isSameName(CArcName&, u32, u16) const;

	bool getDirEntry(JKRArchive::SDirEntry*, unsigned long) const;
	void* getGlbResource(unsigned long, const char*, JKRArchive*);
	void* getIdxResource(unsigned long);
	unknown readResource(void*, unsigned long, unsigned short);

	static JKRArchive* mount(char const*, EMountMode, JKRHeap*, EMountDirection);
	static JKRArchive* mount(void*, JKRHeap*, EMountDirection);
	static JKRArchive* mount(long, EMountMode, JKRHeap*, EMountDirection);

	JKRHeap* _38;   // _38
	u8 m_mountMode; // _3C
	u32 : 0;
	long _40;                    // _40
	unkptr _44;                  // _44
	SDirEntry* _48;              // _48 not sure of this one
	SDIFileEntry* m_fileEntries; // _4C
	unkptr* _50;                 // _50
	char** _54;                  // _54
	int _58;                     // _58

	static u32 sCurrentDirID;
};

struct JKRMemArchive : public JKRArchive {
};

struct JKRCompArchive : public JKRArchive {
	JKRCompArchive(long, EMountDirection);

	virtual ~JKRCompArchive();
	virtual void removeResourceAll();                                                             // _1C
	virtual bool removeResource(void*);                                                           // _20
	virtual long getExpandedResSize(const void*) const;                                           // _34
	virtual u32 fetchResource(JKRArchive::SDIFileEntry*, unsigned long*);                         // _38
	virtual void* fetchResource(void*, unsigned long, JKRArchive::SDIFileEntry*, unsigned long*); // _3C

	bool open(long);

	int _5C;              // _5C
	int m_mountDirection; // _60
	u8 _64[4];            // _64
	unkptr _68;           // _68
	unknown _6C;          // _6C
	JKRDvdFile* _70;      // _70
	unknown _74;          // _74
	unknown _78;          // _78
	unknown _7C;          // _7C
};

#endif
