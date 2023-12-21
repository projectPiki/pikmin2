#ifndef _EBI_E2DGRAPH_H
#define _EBI_E2DGRAPH_H
#include "types.h"
#include "Vector2.h"

struct J2DGrafContext;
struct J2DPane;
struct J2DScreen;

namespace P2DScreen {
struct Mgr;
}

namespace ebi {
struct E2DDebugWindow {
	void draw();
};

struct E2DFader {
	static const f32 kFadeTime;
};

void E2DPane_getCalcGlbVisible(J2DPane*);
Vector2f E2DPane_getGlbCenter(J2DPane*);
void E2DPane_setTreeCallBackMessage(P2DScreen::Mgr*, J2DPane*);
void E2DPane_setTreeInfluencedAlpha(J2DPane*, bool);
void E2DPane_setTreeShow(J2DPane*);
void E2DPane_setTreeHide(J2DPane*);
J2DPane* E2DScreen_searchAssert(J2DScreen*, u64);
void EUTDrawWindow(J2DGrafContext&, s32, s32, s32, s32);
} // namespace ebi

#endif
