#include "RootMenuSection.h"
#include "GameFlow.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8044CACC
 * Size:	000048
 */
RootMenuSection::RootMenuSection(JKRHeap* heap)
    : MenuSection(nullptr, heap, false)
{
}

/*
 * --INFO--
 * Address:	8044CB14
 * Size:	000070
 */
RootMenuSection::~RootMenuSection() { }

/*
 * --INFO--
 * Address:	8044CB84
 * Size:	000024
 */
ISection* RootMenuSection::setChildSection(JKRHeap* heap) { return GameFlow::createSection(heap); }

/*
 * --INFO--
 * Address:	8044CBA8
 * Size:	000004
 */
void RootMenuSection::drawInit(Graphics&) { }

/*
 * --INFO--
 * Address:	8044CBAC
 * Size:	000008
 */
// WEAK  - in header
// bool RootMenuSection::doUpdate() { return false; }

/*
 * --INFO--
 * Address:	8044CBB4
 * Size:	000004
 */
// WEAK  - in header
// void RootMenuSection::doDraw(Graphics& gfx) { }
