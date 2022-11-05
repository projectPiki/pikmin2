#ifndef _GAME_BASEHIOSECTION_H
#define _GAME_BASEHIOSECTION_H

#include "CNode.h"
#include "Section.h"

struct Controller;
struct JFWDisplay;
struct JKRHeap;

namespace Game {
struct GameMessage;
struct HIORootNode;

namespace BaseHIOParms {
extern bool sEntryOpt;
extern bool sEntryOptMapRoom;
extern bool sDrawParticle;
extern bool sMabikiEfx;
extern bool sMapRoomFinal;
extern bool sTekiChappyFlag;
} // namespace BaseHIOParms

struct BaseHIOSection : public Section {
	BaseHIOSection(JKRHeap*);

	virtual ~BaseHIOSection();          // _08
	virtual bool doUpdate();            // _3C
	virtual void initHIO(HIORootNode*); // _48
	virtual void refreshHIO();          // _4C

	void addGenNode(CNode*);
	void createScreenRootNode();
	void setDisplay(JFWDisplay*, int);

#if BUILDTARGET == USADEMO1
	u8 _DemoPadding1[0x1C];
#endif
	HIORootNode* m_rootNode; // _3C
	u8 _40[4];               // _40
	Controller* _44;         // _44
#if BUILDTARGET == USADEMO1
	u8 _DemoPadding2[0x4];
#endif
};

/**
 * @size{0x1C}
 */
struct HIORootNode : public CNode {
	HIORootNode(Section*);

	virtual ~HIORootNode() { } // _08 (weak)

	Section* m_section; // _18
};
} // namespace Game

#endif
