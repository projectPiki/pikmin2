

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022EBCC
 * Size:	00001C
 */
void Game::TSoundEvent::__ct(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, 0x1E
      stb       r4, 0x0(r3)
      stb       r4, 0x0(r3)
      stw       r4, 0x8(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void Game::TSoundEvent::setup((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022EBE8
 * Size:	000048
 */
void Game::TSoundEvent::event(void)
{
    /*
    .loc_0x0:
      lwz       r4, -0x6C18(r13)
      lwz       r0, 0x50(r4)
      stw       r0, 0x8(r3)
      lbz       r4, 0x0(r3)
      rlwinm.   r0,r4,0,31,31
      bne-      .loc_0x28
      ori       r0, r4, 0x1
      stb       r0, 0x0(r3)
      li        r3, 0x1
      blr

    .loc_0x28:
      rlwinm.   r0,r4,0,30,30
      beq-      .loc_0x40
      rlwinm    r0,r4,0,31,29
      stb       r0, 0x0(r3)
      li        r3, 0x3
      blr

    .loc_0x40:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8022EC30
 * Size:	000010
 */
void Game::TSoundEvent::finish(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x0(r3)
      ori       r0, r0, 0x4
      stb       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8022EC40
 * Size:	000074
 */
void Game::TSoundEvent::update(void)
{
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
    */
}
