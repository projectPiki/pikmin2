

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
 * Address:	801A35EC
 * Size:	000060
 */
void Game::Pathfinder::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x4
      bl        -0x17F760
      mr.       r0, r3
      beq-      .loc_0x2C
      bl        0x5D0
      mr        r0, r3

    .loc_0x2C:
      stw       r0, 0x10(r31)
      li        r4, 0
      li        r0, 0x1
      mr        r3, r31
      stw       r4, 0x8(r31)
      stw       r4, 0x4(r31)
      stw       r4, 0xC(r31)
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A364C
 * Size:	0000C4
 */
void Game::Pathfinder::create((int, Game::RouteMgr*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x8048
      stw       r0, 0x24(r1)
      subi      r0, r6, 0xC00
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      mr        r4, r0
      li        r5, 0
      lwz       r3, -0x6514(r13)
      bl        0x27FCE0
      li        r0, 0
      stw       r0, 0x4(r27)
      mulli     r3, r28, 0x64
      stw       r28, 0x8(r27)
      addi      r3, r3, 0x10
      bl        -0x17F6E8
      lis       r4, 0x801A
      mr        r7, r28
      addi      r4, r4, 0x3710
      li        r5, 0
      li        r6, 0x64
      bl        -0xE1CBC
      stw       r3, 0xC(r27)
      li        r30, 0
      li        r31, 0
      b         .loc_0x90

    .loc_0x74:
      lwz       r0, 0xC(r27)
      mr        r4, r29
      li        r5, 0
      add       r3, r0, r31
      bl        0x498
      addi      r31, r31, 0x64
      addi      r30, r30, 0x1

    .loc_0x90:
      cmpw      r30, r28
      blt+      .loc_0x74
      li        r0, 0x1
      lis       r3, 0x8048
      stw       r0, 0x0(r27)
      subi      r4, r3, 0xC00
      lwz       r3, -0x6514(r13)
      bl        0x27FC6C
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3710
 * Size:	000020
 */
void Game::AStarContext::__ct(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, -0x1
      stb       r4, 0x4(r3)
      sth       r0, 0x2(r3)
      sth       r0, 0x0(r3)
      stw       r4, -0x6C7C(r13)
      stw       r4, 0x60(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3730
 * Size:	000124
 */
void Game::Pathfinder::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      subi      r4, r2, 0x51E8
      li        r5, 0x1
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      lwz       r6, -0x6514(r13)
      lwz       r3, 0x28(r6)
      bl        0x28739C
      lwz       r0, 0x8(r31)
      li        r6, 0
      li        r5, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x84

    .loc_0x48:
      lwz       r0, 0xC(r31)
      li        r3, 0
      add       r4, r0, r5
      lwz       r0, 0x60(r4)
      cmplwi    r0, 0
      beq-      .loc_0x70
      lbz       r0, 0x54(r4)
      cmplwi    r0, 0x2
      bne-      .loc_0x70
      li        r3, 0x1

    .loc_0x70:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x7C
      addi      r6, r6, 0x1

    .loc_0x7C:
      addi      r5, r5, 0x64
      bdnz+     .loc_0x48

    .loc_0x84:
      cmpwi     r6, 0
      ble-      .loc_0xF8
      li        r29, 0
      li        r30, 0
      b         .loc_0xEC

    .loc_0x98:
      lwz       r0, 0xC(r31)
      li        r3, 0
      add       r4, r0, r30
      lwz       r0, 0x60(r4)
      cmplwi    r0, 0
      beq-      .loc_0xC0
      lbz       r0, 0x54(r4)
      cmplwi    r0, 0x2
      bne-      .loc_0xC0
      li        r3, 0x1

    .loc_0xC0:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE4
      lwz       r3, 0x10(r31)
      addi      r6, r4, 0x5C
      li        r5, 0x1
      bl        0x56C
      lwz       r4, 0xC(r31)
      addi      r0, r30, 0x54
      stbx      r3, r4, r0

    .loc_0xE4:
      addi      r30, r30, 0x64
      addi      r29, r29, 0x1

    .loc_0xEC:
      lwz       r0, 0x8(r31)
      cmpw      r29, r0
      blt+      .loc_0x98

    .loc_0xF8:
      lwz       r3, -0x6514(r13)
      subi      r4, r2, 0x51E8
      lwz       r3, 0x28(r3)
      bl        0x2872C8
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Game::Pathfinder::getFreeContext(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::Pathfinder::getContext((unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3854
 * Size:	00014C
 */
void Game::Pathfinder::start((Game::PathfindRequest&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      subi      r4, r5, 0xC00
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r28, 0x10(r1)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x8(r29)
      cmpw      r3, r0
      blt-      .loc_0x58
      addi      r3, r4, 0xC
      addi      r5, r4, 0x1C
      li        r4, 0xFA
      crclr     6, 0x6
      bl        -0x179260
      li        r3, 0
      b         .loc_0x12C

    .loc_0x58:
      lwz       r3, 0x0(r29)
      addi      r0, r3, 0x1
      mr        r31, r3
      stw       r0, 0x0(r29)
      lwz       r0, 0x0(r29)
      cmplwi    r0, 0x4E20
      blt-      .loc_0x7C
      li        r0, 0x1
      stw       r0, 0x0(r29)

    .loc_0x7C:
      lwz       r0, 0x8(r29)
      li        r3, 0
      mr        r5, r3
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0xC0

    .loc_0x94:
      lwz       r6, 0xC(r29)
      addi      r0, r5, 0x60
      lwzx      r0, r6, r0
      cmplwi    r0, 0
      bne-      .loc_0xB4
      mulli     r0, r3, 0x64
      add       r28, r6, r0
      b         .loc_0xC4

    .loc_0xB4:
      addi      r5, r5, 0x64
      addi      r3, r3, 0x1
      bdnz+     .loc_0x94

    .loc_0xC0:
      li        r28, 0

    .loc_0xC4:
      cmplwi    r28, 0
      bne-      .loc_0xE4
      lwz       r6, 0x4(r29)
      addi      r3, r4, 0xC
      addi      r5, r4, 0x28
      li        r4, 0x102
      crclr     6, 0x6
      bl        -0x1792F4

    .loc_0xE4:
      lwz       r5, 0x4(r29)
      li        r3, 0
      li        r0, 0x2
      mr        r4, r28
      addi      r5, r5, 0x1
      stw       r5, 0x4(r29)
      stw       r3, 0x60(r28)
      stb       r0, 0x54(r28)
      stw       r31, 0x60(r28)
      lha       r0, 0x0(r30)
      sth       r0, 0x0(r28)
      lha       r0, 0x2(r30)
      sth       r0, 0x2(r28)
      lbz       r0, 0x4(r30)
      stb       r0, 0x4(r28)
      lwz       r3, 0x10(r29)
      bl        0x27C
      mr        r3, r31

    .loc_0x12C:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801A39A0
 * Size:	0000C0
 */
void Game::Pathfinder::makepath((unsigned long, Game::PathNode**))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r6, 0x8048
      li        r8, 0
      stw       r0, 0x14(r1)
      subi      r7, r6, 0xC00
      mr        r6, r8
      lwz       r0, 0x8(r3)
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x58

    .loc_0x2C:
      lwz       r9, 0xC(r3)
      addi      r0, r6, 0x60
      lwzx      r0, r9, r0
      cmplw     r4, r0
      bne-      .loc_0x4C
      mulli     r0, r8, 0x64
      add       r3, r9, r0
      b         .loc_0x5C

    .loc_0x4C:
      addi      r6, r6, 0x64
      addi      r8, r8, 0x1
      bdnz+     .loc_0x2C

    .loc_0x58:
      li        r3, 0

    .loc_0x5C:
      cmplwi    r3, 0
      beq-      .loc_0x94
      lbz       r6, 0x54(r3)
      cmplwi    r6, 0
      bne-      .loc_0x7C
      lwz       r4, 0x5C(r3)
      bl        0x8C8
      b         .loc_0xB0

    .loc_0x7C:
      addi      r3, r7, 0xC
      addi      r5, r7, 0x50
      li        r4, 0x122
      crclr     6, 0x6
      bl        -0x1793EC
      b         .loc_0xAC

    .loc_0x94:
      mr        r6, r4
      addi      r3, r7, 0xC
      addi      r5, r7, 0x68
      li        r4, 0x125
      crclr     6, 0x6
      bl        -0x179408

    .loc_0xAC:
      li        r3, 0

    .loc_0xB0:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void Game::Pathfinder::makepath((unsigned long, short*, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3A60
 * Size:	000070
 */
void Game::Pathfinder::release((unsigned long))
{
    /*
    .loc_0x0:
      lwz       r0, 0x8(r3)
      li        r5, 0
      mr        r6, r5
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x44

    .loc_0x18:
      lwz       r7, 0xC(r3)
      addi      r0, r6, 0x60
      lwzx      r0, r7, r0
      cmplw     r4, r0
      bne-      .loc_0x38
      mulli     r0, r5, 0x64
      add       r6, r7, r0
      b         .loc_0x48

    .loc_0x38:
      addi      r6, r6, 0x64
      addi      r5, r5, 0x1
      bdnz+     .loc_0x18

    .loc_0x44:
      li        r6, 0

    .loc_0x48:
      cmplwi    r6, 0
      beqlr-
      lwz       r5, 0x4(r3)
      li        r4, 0
      li        r0, 0x2
      subi      r5, r5, 0x1
      stw       r5, 0x4(r3)
      stw       r4, 0x60(r6)
      stb       r0, 0x54(r6)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3AD0
 * Size:	000098
 */
void Game::Pathfinder::check((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      mr        r6, r5
      lwz       r0, 0x8(r3)
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x50

    .loc_0x24:
      lwz       r7, 0xC(r3)
      addi      r0, r6, 0x60
      lwzx      r0, r7, r0
      cmplw     r4, r0
      bne-      .loc_0x44
      mulli     r0, r5, 0x64
      add       r3, r7, r0
      b         .loc_0x54

    .loc_0x44:
      addi      r6, r6, 0x64
      addi      r5, r5, 0x1
      bdnz+     .loc_0x24

    .loc_0x50:
      li        r3, 0

    .loc_0x54:
      cmplwi    r3, 0
      beq-      .loc_0x64
      lbz       r3, 0x54(r3)
      b         .loc_0x88

    .loc_0x64:
      lis       r3, 0x8048
      lis       r5, 0x8048
      mr        r6, r4
      li        r4, 0x14C
      subi      r3, r3, 0xBF4
      subi      r5, r5, 0xB84
      crclr     6, 0x6
      bl        -0x179510
      li        r3, 0x3

    .loc_0x88:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Game::PathNode::initNode(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Game::PathNode::add((Game::PathNode*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void Game::PathNode::del(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Game::PathNode::dump((char*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Game::PathNode::pop(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Game::PathNode::countLinks((Game::PathNode**))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3B68
 * Size:	000078
 */
void Game::AStarContext::init((Game::RouteMgr*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x64
      stw       r4, -0x6C7C(r13)
      li        r0, 0
      cmpwi     r5, 0
      sth       r0, 0x50(r31)
      bgt-      .loc_0x40
      lwz       r3, -0x6C7C(r13)
      lhz       r0, 0x1C(r3)
      sth       r0, 0x52(r31)
      b         .loc_0x44

    .loc_0x40:
      sth       r5, 0x52(r31)

    .loc_0x44:
      lha       r0, 0x52(r31)
      mulli     r3, r0, 0x24
      bl        -0x17FC08
      stw       r3, 0x58(r31)
      li        r3, 0
      li        r0, 0x2
      stw       r3, 0x60(r31)
      stb       r0, 0x54(r31)

    .loc_0x64:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3BE0
 * Size:	00000C
 */
void Game::AStarPathfinder::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3BEC
 * Size:	000008
 */
void Game::AStarPathfinder::setContext((Game::AStarContext*))
{
    /*
    .loc_0x0:
      stw       r4, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void Game::AStarContext::getNode((short))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000558
 */
void Game::AStarPathfinder::search((short, short, short*, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00057C
 */
void Game::AStarPathfinder::search((Game::AStarContext*, short, short, short*,
                                    int, int, int&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3BF4
 * Size:	00017C
 */
void Game::AStarPathfinder::initsearch((Game::AStarContext*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r6, 0
      stw       r0, 0x14(r1)
      mr        r7, r6
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      lha       r10, 0x0(r4)
      lha       r5, 0x2(r4)
      stw       r4, 0x0(r3)
      lwz       r3, 0x0(r3)
      stw       r6, 0x20(r3)
      stw       r6, 0x1C(r3)
      stw       r6, 0x24(r3)
      stw       r6, 0x18(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      lwz       r3, 0x0(r31)
      stw       r6, 0x44(r3)
      stw       r6, 0x40(r3)
      stw       r6, 0x48(r3)
      stw       r6, 0x3C(r3)
      stw       r6, 0x34(r3)
      stw       r6, 0x38(r3)
      lwz       r3, 0x0(r31)
      sth       r6, 0x50(r3)
      lwz       r8, 0x0(r31)
      lha       r9, 0x50(r8)
      mtctr     r9
      cmpwi     r9, 0
      ble-      .loc_0xAC

    .loc_0x80:
      lwz       r3, 0x58(r8)
      addi      r0, r7, 0x20
      lhax      r0, r3, r0
      cmpw      r10, r0
      bne-      .loc_0xA0
      mulli     r0, r6, 0x24
      add       r30, r3, r0
      b         .loc_0x100

    .loc_0xA0:
      addi      r7, r7, 0x24
      addi      r6, r6, 0x1
      bdnz+     .loc_0x80

    .loc_0xAC:
      lha       r0, 0x52(r8)
      cmpw      r9, r0
      bge-      .loc_0xFC
      lha       r4, 0x50(r8)
      mulli     r6, r9, 0x24
      lwz       r7, 0x58(r8)
      li        r3, 0
      addi      r0, r4, 0x1
      sth       r0, 0x50(r8)
      add       r30, r7, r6
      li        r0, 0x2
      stw       r3, 0x18(r30)
      stw       r3, 0x14(r30)
      stw       r3, 0x1C(r30)
      stw       r3, 0x10(r30)
      stw       r3, 0x8(r30)
      stw       r3, 0xC(r30)
      sth       r10, 0x20(r30)
      stb       r0, 0x22(r30)
      b         .loc_0x100

    .loc_0xFC:
      li        r30, 0

    .loc_0x100:
      sth       r10, 0x20(r30)
      mr        r3, r31
      lfs       f0, -0x51DC(r2)
      mr        r4, r10
      stfs      f0, 0x0(r30)
      bl        0x520
      stfs      f1, 0x4(r30)
      li        r0, 0
      stw       r0, 0x8(r30)
      stb       r0, 0x22(r30)
      lwz       r3, 0x0(r31)
      addi      r4, r3, 0x8
      lwz       r3, 0x24(r3)
      cmplwi    r3, 0
      beq-      .loc_0x15C
      b         .loc_0x144

    .loc_0x140:
      mr        r3, r0

    .loc_0x144:
      lwz       r0, 0x14(r3)
      cmplwi    r0, 0
      bne+      .loc_0x140
      stw       r30, 0x14(r3)
      stw       r3, 0x18(r30)
      b         .loc_0x160

    .loc_0x15C:
      stw       r30, 0x1C(r4)

    .loc_0x160:
      stw       r4, 0x10(r30)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3D70
 * Size:	0004B8
 */
void Game::AStarPathfinder::search((Game::AStarContext*, int, Game::PathNode**))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r24, 0x20(r1)
      mr        r24, r3
      mr        r25, r6
      mr        r28, r5
      stw       r4, 0x0(r3)
      lha       r29, 0x2(r4)
      b         .loc_0x474

    .loc_0x28:
      lfs       f2, -0x51E0(r2)
      li        r31, 0
      b         .loc_0x54

    .loc_0x34:
      lfs       f1, 0x0(r3)
      lfs       f0, 0x4(r3)
      fadds     f0, f1, f0
      fcmpo     cr0, f0, f2
      bge-      .loc_0x50
      fmr       f2, f0
      mr        r31, r3

    .loc_0x50:
      lwz       r3, 0x14(r3)

    .loc_0x54:
      cmplwi    r3, 0
      bne+      .loc_0x34
      cmplwi    r31, 0
      beq-      .loc_0xF8
      lwz       r5, 0x10(r31)
      cmplwi    r5, 0
      beq-      .loc_0xF8
      lwz       r4, 0x1C(r5)
      li        r3, 0
      b         .loc_0xF0

    .loc_0x7C:
      cmplw     r4, r31
      bne-      .loc_0xE8
      cmplwi    r3, 0
      beq-      .loc_0xB8
      lwz       r0, 0x14(r4)
      stw       r0, 0x14(r3)
      lwz       r4, 0x14(r4)
      cmplwi    r4, 0
      beq-      .loc_0xA4
      stw       r3, 0x18(r4)

    .loc_0xA4:
      li        r0, 0
      stw       r0, 0x18(r31)
      stw       r0, 0x14(r31)
      stw       r0, 0x10(r31)
      b         .loc_0xF8

    .loc_0xB8:
      lwz       r0, 0x14(r4)
      stw       r0, 0x1C(r5)
      lwz       r3, 0x14(r4)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      li        r0, 0
      stw       r0, 0x18(r3)

    .loc_0xD4:
      li        r0, 0
      stw       r0, 0x18(r31)
      stw       r0, 0x14(r31)
      stw       r0, 0x10(r31)
      b         .loc_0xF8

    .loc_0xE8:
      mr        r3, r4
      lwz       r4, 0x14(r4)

    .loc_0xF0:
      cmplwi    r4, 0
      bne+      .loc_0x7C

    .loc_0xF8:
      lha       r4, 0x20(r31)
      cmpw      r4, r29
      bne-      .loc_0x110
      stw       r31, 0x0(r25)
      li        r3, 0
      b         .loc_0x4A4

    .loc_0x110:
      lwz       r3, -0x6C7C(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x0(r24)
      mr        r27, r3
      addi      r3, r1, 0x8
      lbz       r0, 0x4(r4)
      mr        r4, r27
      rlwinm    r5,r0,25,31,31
      bl        -0x3198C
      addi      r3, r1, 0x8
      bl        -0x31980
      b         .loc_0x15C

    .loc_0x14C:
      addi      r3, r1, 0x8
      bl        -0x318FC
      addi      r3, r1, 0x8
      bl        -0x3196C

    .loc_0x15C:
      addi      r3, r1, 0x8
      bl        -0x31948
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x14C
      addi      r3, r1, 0x8
      bl        -0x319AC
      b         .loc_0x41C

    .loc_0x178:
      addi      r3, r1, 0x8
      bl        -0x31928
      mr        r0, r3
      lwz       r3, -0x6C7C(r13)
      mr        r26, r0
      lwz       r12, 0x0(r3)
      mr        r4, r26
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r8, 0x0(r24)
      li        r5, 0
      mr        r6, r5
      extsh     r4, r26
      lha       r9, 0x50(r8)
      mtctr     r9
      cmpwi     r9, 0
      ble-      .loc_0x1EC

    .loc_0x1C0:
      lwz       r7, 0x58(r8)
      addi      r0, r6, 0x20
      lhax      r0, r7, r0
      cmpw      r4, r0
      bne-      .loc_0x1E0
      mulli     r0, r5, 0x24
      add       r30, r7, r0
      b         .loc_0x240

    .loc_0x1E0:
      addi      r6, r6, 0x24
      addi      r5, r5, 0x1
      bdnz+     .loc_0x1C0

    .loc_0x1EC:
      lha       r0, 0x52(r8)
      cmpw      r9, r0
      bge-      .loc_0x23C
      lha       r5, 0x50(r8)
      mulli     r6, r9, 0x24
      lwz       r7, 0x58(r8)
      li        r4, 0
      addi      r0, r5, 0x1
      sth       r0, 0x50(r8)
      add       r30, r7, r6
      li        r0, 0x2
      stw       r4, 0x18(r30)
      stw       r4, 0x14(r30)
      stw       r4, 0x1C(r30)
      stw       r4, 0x10(r30)
      stw       r4, 0x8(r30)
      stw       r4, 0xC(r30)
      sth       r26, 0x20(r30)
      stb       r0, 0x22(r30)
      b         .loc_0x240

    .loc_0x23C:
      li        r30, 0

    .loc_0x240:
      lwz       r4, 0x0(r24)
      lbz       r4, 0x4(r4)
      rlwinm.   r0,r4,0,31,31
      beq-      .loc_0x25C
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x414

    .loc_0x25C:
      rlwinm.   r0,r4,0,30,30
      bne-      .loc_0x270
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,30,30
      bne-      .loc_0x414

    .loc_0x270:
      rlwinm.   r0,r4,0,25,25
      bne-      .loc_0x284
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,24,24
      bne-      .loc_0x414

    .loc_0x284:
      lbz       r0, 0x34(r27)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x2A4
      rlwinm.   r0,r4,0,29,29
      beq-      .loc_0x2A4
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,29,29
      bne-      .loc_0x414

    .loc_0x2A4:
      rlwinm.   r0,r4,0,26,26
      beq-      .loc_0x2B8
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,26,26
      bne-      .loc_0x414

    .loc_0x2B8:
      rlwinm.   r0,r4,0,27,27
      beq-      .loc_0x2CC
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,27,27
      bne-      .loc_0x414

    .loc_0x2CC:
      lha       r4, 0x20(r31)
      mr        r3, r24
      lha       r5, 0x20(r30)
      bl        .loc_0x4B8
      lfs       f0, 0x0(r31)
      lbz       r0, 0x22(r30)
      fadds     f1, f0, f1
      cmplwi    r0, 0x2
      beq-      .loc_0x300
      lfs       f0, 0x0(r30)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      beq-      .loc_0x414

    .loc_0x300:
      stw       r31, 0x8(r30)
      mr        r3, r24
      mr        r5, r29
      stfs      f1, 0x0(r30)
      lha       r4, 0x20(r30)
      bl        .loc_0x4B8
      stfs      f1, 0x4(r30)
      lbz       r0, 0x22(r30)
      cmplwi    r0, 0x1
      bne-      .loc_0x3C4
      lwz       r5, 0x10(r30)
      cmplwi    r5, 0
      beq-      .loc_0x3BC
      lwz       r4, 0x1C(r5)
      li        r3, 0
      b         .loc_0x3B4

    .loc_0x340:
      cmplw     r4, r30
      bne-      .loc_0x3AC
      cmplwi    r3, 0
      beq-      .loc_0x37C
      lwz       r0, 0x14(r4)
      stw       r0, 0x14(r3)
      lwz       r4, 0x14(r4)
      cmplwi    r4, 0
      beq-      .loc_0x368
      stw       r3, 0x18(r4)

    .loc_0x368:
      li        r0, 0
      stw       r0, 0x18(r30)
      stw       r0, 0x14(r30)
      stw       r0, 0x10(r30)
      b         .loc_0x3BC

    .loc_0x37C:
      lwz       r0, 0x14(r4)
      stw       r0, 0x1C(r5)
      lwz       r3, 0x14(r4)
      cmplwi    r3, 0
      beq-      .loc_0x398
      li        r0, 0
      stw       r0, 0x18(r3)

    .loc_0x398:
      li        r0, 0
      stw       r0, 0x18(r30)
      stw       r0, 0x14(r30)
      stw       r0, 0x10(r30)
      b         .loc_0x3BC

    .loc_0x3AC:
      mr        r3, r4
      lwz       r4, 0x14(r4)

    .loc_0x3B4:
      cmplwi    r4, 0
      bne+      .loc_0x340

    .loc_0x3BC:
      li        r0, 0x2
      stb       r0, 0x22(r30)

    .loc_0x3C4:
      lbz       r0, 0x22(r30)
      cmplwi    r0, 0
      beq-      .loc_0x414
      li        r0, 0
      stb       r0, 0x22(r30)
      lwz       r3, 0x0(r24)
      addi      r4, r3, 0x8
      lwz       r3, 0x24(r3)
      cmplwi    r3, 0
      beq-      .loc_0x40C
      b         .loc_0x3F4

    .loc_0x3F0:
      mr        r3, r0

    .loc_0x3F4:
      lwz       r0, 0x14(r3)
      cmplwi    r0, 0
      bne+      .loc_0x3F0
      stw       r30, 0x14(r3)
      stw       r3, 0x18(r30)
      b         .loc_0x410

    .loc_0x40C:
      stw       r30, 0x1C(r4)

    .loc_0x410:
      stw       r4, 0x10(r30)

    .loc_0x414:
      addi      r3, r1, 0x8
      bl        -0x31C2C

    .loc_0x41C:
      addi      r3, r1, 0x8
      bl        -0x31C08
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x178
      li        r0, 0x1
      stb       r0, 0x22(r31)
      lwz       r3, 0x0(r24)
      addi      r4, r3, 0x2C
      lwz       r3, 0x48(r3)
      cmplwi    r3, 0
      beq-      .loc_0x468
      b         .loc_0x450

    .loc_0x44C:
      mr        r3, r0

    .loc_0x450:
      lwz       r0, 0x14(r3)
      cmplwi    r0, 0
      bne+      .loc_0x44C
      stw       r31, 0x14(r3)
      stw       r3, 0x18(r31)
      b         .loc_0x46C

    .loc_0x468:
      stw       r31, 0x1C(r4)

    .loc_0x46C:
      stw       r4, 0x10(r31)
      subi      r28, r28, 0x1

    .loc_0x474:
      lwz       r4, 0x0(r24)
      lwz       r3, 0x24(r4)
      cmplwi    r3, 0
      beq-      .loc_0x48C
      cmpwi     r28, 0
      bgt+      .loc_0x28

    .loc_0x48C:
      lwz       r0, 0x24(r4)
      cmplwi    r0, 0
      bne-      .loc_0x4A0
      li        r3, 0x1
      b         .loc_0x4A4

    .loc_0x4A0:
      li        r3, 0x2

    .loc_0x4A4:
      lmw       r24, 0x20(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x4B8:
    */
}

/*
 * --INFO--
 * Address:	801A4228
 * Size:	0000B4
 */
void Game::AStarPathfinder::estimate((short, short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r5
      lwz       r3, -0x6C7C(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      lwz       r3, -0x6C7C(r13)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x50(r31)
      lfs       f0, 0x50(r3)
      lfs       f3, 0x54(r31)
      fsubs     f4, f1, f0
      lfs       f2, 0x54(r3)
      lfs       f1, 0x4C(r31)
      lfs       f0, 0x4C(r3)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x51DC(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x98
      ble-      .loc_0x9C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x9C

    .loc_0x98:
      fmr       f1, f0

    .loc_0x9C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A42DC
 * Size:	000034
 */
void Game::AStarContext::makepath((Game::PathNode*, Game::PathNode**))
{
    /*
    .loc_0x0:
      lwz       r6, 0x8(r4)
      li        r3, 0x1
      b         .loc_0x1C

    .loc_0xC:
      stw       r4, 0xC(r6)
      mr        r4, r6
      addi      r3, r3, 0x1
      lwz       r6, 0x8(r6)

    .loc_0x1C:
      cmplwi    r6, 0
      bne+      .loc_0xC
      cmplwi    r5, 0
      beqlr-
      stw       r4, 0x0(r5)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Game::AStarPathfinder::constructPath((Game::PathNode*, short*, int))
{
    // UNUSED FUNCTION
}
