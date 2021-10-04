#include "types.h"

namespace Game {
struct GameSystem {
    u8 filler[0x50];
    u32 _50; // _50

    void calcFrameDist(int);
};

extern GameSystem* gameSystem;

struct TSoundEvent {
    u8 _00;
    u32 _04;
    u32 _08;

    TSoundEvent();

    u32 event();
    void finish();
    u32 update();
};
} // namespace Game

/*
 * --INFO--
 * Address:	8022EBCC
 * Size:	00001C
 */
Game::TSoundEvent::TSoundEvent()
    : _00(0)
{
    _00 = 0;
    _08 = 0;
    _04 = 30;
}

/*
 * --INFO--
 * Address:	8022EBE8
 * Size:	000048
 */
u32 Game::TSoundEvent::event()
{
    _08 = Game::gameSystem->_50;
    if (!(_00 & 1)) {
        _00 |= 1;
        return 1;
    }

    if (_00 & 2) {
        _00 &= ~2;
        return 3;
    }

    return 0;
}

/*
 * --INFO--
 * Address:	8022EC30
 * Size:	000010
 */
void Game::TSoundEvent::finish(void) { _00 |= 0x4; }

/*
 * --INFO--
 * Address:	8022EC40
 * Size:	000074
 */
// u32 Game::TSoundEvent::update() { }
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x0(r3)
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x5C
  lwz       r3, -0x6C18(r13)
  lwz       r4, 0x8(r31)
  bl        -0x79F10
  lwz       r0, 0x4(r31)
  cmpw      r3, r0
  ble-      .loc_0x5C
  lbz       r3, 0x0(r31)
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x5C
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x5C
  ori       r0, r3, 0x2
  li        r3, 0x2
  stb       r0, 0x0(r31)
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*
}
*/