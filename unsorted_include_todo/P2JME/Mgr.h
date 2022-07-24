#ifndef _P2JME_MGR_H
#define _P2JME_MGR_H

/*
    __vt__Q25P2JME3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25P2JME3MgrFv
    .4byte 0
*/

namespace P2JME {
struct Mgr {
	virtual ~Mgr();         // _08
	virtual void _0C() = 0; // _0C

	void create(JKRExpHeap*);
	Mgr();
	void setupMessage();
	void setupTex();
	void setupFont(const char*, JKRExpHeap*);
	void createImage(P2JME::ImageGroup::EID, int);
	void setImage(P2JME::ImageGroup::EID, int, JUTTexture*);
	void getImage(P2JME::ImageGroup::EID, int);
	void setupMessageResource(JKRArchive*, const char*);
	void setupColor(JKRArchive*, const char*);
};
} // namespace P2JME

#endif
