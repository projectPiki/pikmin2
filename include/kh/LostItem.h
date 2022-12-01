#ifndef _KH_LOSTITEM_H
#define _KH_LOSTITEM_H

#include "types.h"
#include "Rect.h"

namespace kh {
namespace Screen {

struct LostItem {
    LostItem();

    Rectf m_rect;      // _00
    f32 _10;        // _10
    u32 _14;        // _14
    u16 m_angle;        // _18
    u16 _1A;        // _1A
    u8 m_alpha;         // _1C
    u8 m_counter;         // _1D
};

struct LostItemMgr {
    LostItemMgr(int);

    void init(const JGeometry::TVec2f&, bool);
    void update();
    void draw(P2DScreen::Mgr_tuning*, u64, const ResTIMG*, Graphics&);

    LostItem* m_itemList;          // _00
    u32 m_maxPanes;                 // _04
    u32 m_flags;                      // _08
};

} // screen
} // kh

#endif
