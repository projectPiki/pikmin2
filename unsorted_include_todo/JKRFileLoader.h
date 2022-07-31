#ifndef _JKRFILELOADER_H
#define _JKRFILELOADER_H

/*
    __vt__13JKRFileLoader:
    .4byte 0
    .4byte 0
    .4byte __dt__13JKRFileLoaderFv
    .4byte unmount__13JKRFileLoaderFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JKRFileLoader {
	virtual ~JKRFileLoader(); // _08
	virtual void unmount();   // _0C
	virtual void _10() = 0;   // _10
	virtual void _14() = 0;   // _14
	virtual void _18() = 0;   // _18
	virtual void _1C() = 0;   // _1C
	virtual void _20() = 0;   // _20
	virtual void _24() = 0;   // _24
	virtual void _28() = 0;   // _28
	virtual void _2C() = 0;   // _2C
	virtual void _30() = 0;   // _30
	virtual void _34() = 0;   // _34
	virtual void _38() = 0;   // _38
	virtual void _3C() = 0;   // _3C

	JKRFileLoader();
	void getGlbResource(const char*);
	void getGlbResource(const char*, JKRFileLoader*);
	void findVolume(const char**);
	void fetchVolumeName(char*, long, const char*);
};

#endif
