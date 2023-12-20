#include "RootMenuSection.h"
#include "GameFlow.h"

/**
 * @note Address: 0x8044CACC
 * @note Size: 0x48
 */
RootMenuSection::RootMenuSection(JKRHeap* heap)
    : MenuSection(nullptr, heap, false)
{
}

/**
 * @note Address: 0x8044CB14
 * @note Size: 0x70
 */
RootMenuSection::~RootMenuSection() { }

/**
 * @note Address: 0x8044CB84
 * @note Size: 0x24
 */
ISection* RootMenuSection::setChildSection(JKRHeap* heap) { return GameFlow::createSection(heap); }

/**
 * @note Address: 0x8044CBA8
 * @note Size: 0x4
 */
void RootMenuSection::drawInit(Graphics&) { }
