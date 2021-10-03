

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
 * Address:	803591BC
 * Size:	000204
 */
void Game::KingChappy::FSM::init((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0xD
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x228970
      li        r3, 0x18
      bl        -0x335338
      mr.       r4, r3
      beq-      .loc_0x38
      li        r4, 0
      bl        .loc_0x204
      mr        r4, r3

    .loc_0x38:
      mr        r3, r31
      bl        -0x2288F0
      li        r3, 0x20
      bl        -0x33535C
      mr.       r4, r3
      beq-      .loc_0x5C
      li        r4, 0x1
      bl        0x438
      mr        r4, r3

    .loc_0x5C:
      mr        r3, r31
      bl        -0x228914
      li        r3, 0x10
      bl        -0x335380
      mr.       r4, r3
      beq-      .loc_0x80
      li        r4, 0x2
      bl        0xBA4
      mr        r4, r3

    .loc_0x80:
      mr        r3, r31
      bl        -0x228938
      li        r3, 0x10
      bl        -0x3353A4
      mr.       r4, r3
      beq-      .loc_0xA4
      li        r4, 0x3
      bl        0xD8C
      mr        r4, r3

    .loc_0xA4:
      mr        r3, r31
      bl        -0x22895C
      li        r3, 0x10
      bl        -0x3353C8
      mr.       r4, r3
      beq-      .loc_0xC8
      li        r4, 0x4
      bl        0x1700
      mr        r4, r3

    .loc_0xC8:
      mr        r3, r31
      bl        -0x228980
      li        r3, 0x14
      bl        -0x3353EC
      mr.       r4, r3
      beq-      .loc_0xEC
      li        r4, 0x5
      bl        0x1E7C
      mr        r4, r3

    .loc_0xEC:
      mr        r3, r31
      bl        -0x2289A4
      li        r3, 0x10
      bl        -0x335410
      mr.       r4, r3
      beq-      .loc_0x110
      li        r4, 0x6
      bl        0x20C8
      mr        r4, r3

    .loc_0x110:
      mr        r3, r31
      bl        -0x2289C8
      li        r3, 0x14
      bl        -0x335434
      mr.       r4, r3
      beq-      .loc_0x134
      li        r4, 0x7
      bl        0x2220
      mr        r4, r3

    .loc_0x134:
      mr        r3, r31
      bl        -0x2289EC
      li        r3, 0x10
      bl        -0x335458
      mr.       r4, r3
      beq-      .loc_0x158
      li        r4, 0x8
      bl        0x232C
      mr        r4, r3

    .loc_0x158:
      mr        r3, r31
      bl        -0x228A10
      li        r3, 0x18
      bl        -0x33547C
      mr.       r4, r3
      beq-      .loc_0x17C
      li        r4, 0x9
      bl        0x260C
      mr        r4, r3

    .loc_0x17C:
      mr        r3, r31
      bl        -0x228A34
      li        r3, 0x14
      bl        -0x3354A0
      mr.       r4, r3
      beq-      .loc_0x1A0
      li        r4, 0xA
      bl        0x2874
      mr        r4, r3

    .loc_0x1A0:
      mr        r3, r31
      bl        -0x228A58
      li        r3, 0x10
      bl        -0x3354C4
      mr.       r4, r3
      beq-      .loc_0x1C4
      li        r4, 0xB
      bl        0x2D14
      mr        r4, r3

    .loc_0x1C4:
      mr        r3, r31
      bl        -0x228A7C
      li        r3, 0x10
      bl        -0x3354E8
      mr.       r4, r3
      beq-      .loc_0x1E8
      li        r4, 0xC
      bl        0x2DBC
      mr        r4, r3

    .loc_0x1E8:
      mr        r3, r31
      bl        -0x228AA0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x204:
    */
}

/*
 * --INFO--
 * Address:	803593C0
 * Size:	00003C
 */
void Game::KingChappy::StateWalk::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1BC8
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x208
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803593FC
 * Size:	000080
 */
void Game::KingChappy::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x6
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      bl        0x7DA0
      mr        r3, r31
      bl        0x8184
      lwz       r0, 0x230(r31)
      cmplwi    r0, 0
      beq-      .loc_0x48
      li        r0, 0
      stw       r0, 0x10(r30)

    .loc_0x48:
      li        r0, -0x1
      lfs       f1, -0x63C8(r2)
      stw       r0, 0x2E8(r31)
      mr        r3, r31
      lwz       r4, 0xC0(r31)
      lfs       f0, 0x9AC(r4)
      fmuls     f1, f1, f0
      bl        -0x2520D0
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
 * Address:	8035947C
 * Size:	0001A4
 */
void Game::KingChappy::StateWalk::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x2E8(r4)
      cmpwi     r0, 0
      bge-      .loc_0xF4
      mr        r3, r31
      bl        0x6B8C
      mr        r3, r31
      li        r4, 0x1
      bl        0x7BE8
      lwz       r0, 0x230(r31)
      cmplwi    r0, 0
      bne-      .loc_0x54
      lwz       r3, 0x10(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)

    .loc_0x54:
      lfs       f1, 0x210(r2)
      mr        r3, r31
      bl        0x6A10
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x88
      lwz       r4, 0xC0(r31)
      lbz       r0, 0xBC9(r4)
      cmplwi    r0, 0
      bne-      .loc_0x88
      lwz       r3, 0x10(r30)
      lwz       r0, 0xB64(r4)
      cmpw      r3, r0
      ble-      .loc_0xD8

    .loc_0x88:
      lfs       f0, 0x198(r31)
      mr        r3, r31
      stfs      f0, 0x2BC(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2C0(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2C4(r31)
      lwz       r4, 0xC0(r31)
      lwz       r0, 0xB64(r4)
      stw       r0, 0x10(r30)
      lwz       r4, 0xC0(r31)
      lfs       f1, 0x384(r4)
      bl        0x6DD8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF4
      li        r3, 0x8
      li        r0, 0
      stw       r3, 0x2E8(r31)
      stw       r0, 0x10(r30)
      b         .loc_0xF4

    .loc_0xD8:
      lfs       f1, 0x214(r2)
      mr        r3, r31
      bl        0x6DB0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF4
      mr        r3, r31
      bl        0x628C

    .loc_0xF4:
      mr        r3, r31
      li        r4, 0x1
      bl        0x7A38
      mr        r3, r31
      li        r4, 0x1
      bl        0x7600
      mr        r3, r31
      li        r4, 0x1
      bl        0x6DB0
      lwz       r0, 0x2E8(r31)
      cmpwi     r0, 0
      blt-      .loc_0x13C
      mr        r3, r31
      bl        -0x254304
      lfs       f0, 0x218(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)

    .loc_0x13C:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x18C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x7D0
      bne-      .loc_0x164
      mr        r3, r31
      bl        0x7D28
      b         .loc_0x18C

    .loc_0x164:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x18C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2E8(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x18C:
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
 * Address:	80359620
 * Size:	000028
 */
void Game::KingChappy::StateWalk::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x63C8(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x2522A4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80359648
 * Size:	00003C
 */
void Game::KingChappy::StateAttack::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1BA4
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x21C
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80359684
 * Size:	00006C
 */
void Game::KingChappy::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      bl        0x7B18
      lfs       f0, 0x218(r2)
      li        r0, 0
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stw       r0, 0x10(r30)
      stw       r0, 0x14(r30)
      stw       r0, 0x18(r30)
      stb       r0, 0x1C(r30)
      stb       r0, 0x338(r31)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803596F0
 * Size:	0006AC
 */
void Game::KingChappy::StateAttack::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x140(r1)
      mflr      r0
      stw       r0, 0x144(r1)
      stfd      f31, 0x130(r1)
      psq_st    f31,0x138(r1),0,0
      stmw      r27, 0x11C(r1)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x60
      mr        r3, r31
      bl        0x5B48
      lwz       r0, 0x18(r30)
      cmpw      r3, r0
      ble-      .loc_0x44
      stw       r3, 0x18(r30)

    .loc_0x44:
      mr        r3, r31
      li        r4, 0
      bl        -0x245C08
      lwz       r0, 0x10(r30)
      cmpw      r3, r0
      ble-      .loc_0x60
      stw       r3, 0x10(r30)

    .loc_0x60:
      mr        r3, r31
      addi      r4, r1, 0x64
      addi      r5, r1, 0x58
      bl        0x5F80
      lfs       f5, 0x224(r2)
      lis       r3, 0x8050
      lfs       f1, 0x68(r1)
      addi      r3, r3, 0x71A0
      lfs       f0, 0x64(r1)
      addi      r8, r1, 0x48
      fadds     f4, f1, f5
      lfs       f3, 0x6C(r1)
      stfs      f0, 0x48(r1)
      addi      r7, r1, 0x58
      lfs       f2, 0x218(r2)
      li        r6, 0
      stfs      f4, 0x68(r1)
      li        r0, -0x1
      lfs       f1, 0x800(r3)
      addi      r4, r1, 0x70
      stfs      f4, 0x4C(r1)
      lfs       f0, 0x228(r2)
      stfs      f3, 0x50(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f5, 0x54(r1)
      lwz       r5, -0x6514(r13)
      lwz       r9, 0xC0(r31)
      lfs       f3, 0x4C(r9)
      stw       r8, 0x70(r1)
      stw       r7, 0x74(r1)
      stfs      f3, 0x78(r1)
      stfs      f2, 0x7C(r1)
      stw       r6, 0x80(r1)
      stw       r6, 0xB4(r1)
      stb       r6, 0xE4(r1)
      stb       r6, 0x89(r1)
      stb       r6, 0x88(r1)
      stw       r6, 0xB8(r1)
      stw       r6, 0x84(r1)
      stb       r6, 0x100(r1)
      stw       r6, 0x104(r1)
      stfs      f1, 0x9C(r1)
      stfs      f0, 0xA0(r1)
      stw       r0, 0x108(r1)
      stw       r6, 0xBC(r1)
      stb       r6, 0x8A(r1)
      lwz       r12, 0x4(r3)
      lfs       f1, 0x54(r5)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0xB4(r1)
      cmplwi    r0, 0
      bne-      .loc_0x144
      lwz       r0, 0xB8(r1)
      cmplwi    r0, 0
      beq-      .loc_0x1E4

    .loc_0x144:
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x2E4(r31)
      li        r4, 0x6
      bl        0x8388
      lwz       r0, 0x18(r30)
      cmpwi     r0, 0
      ble-      .loc_0x190
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0xC(r1)
      mr        r4, r31
      addi      r6, r1, 0xC
      li        r5, 0x7
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x690

    .loc_0x190:
      lwz       r0, 0x10(r30)
      cmpwi     r0, 0
      ble-      .loc_0x1C0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xC
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x690

    .loc_0x1C0:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x690

    .loc_0x1E4:
      li        r0, 0
      lwz       r3, -0x6D20(r13)
      lis       r4, 0x804B
      stw       r0, 0x44(r1)
      subi      r4, r4, 0x434C
      cmplwi    r0, 0
      stw       r4, 0x38(r1)
      stw       r0, 0x3C(r1)
      stw       r3, 0x40(r1)
      bne-      .loc_0x224
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2AC

    .loc_0x224:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x290

    .loc_0x23C:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2AC
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x290:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x23C

    .loc_0x2AC:
      lfs       f31, 0x218(r2)
      b         .loc_0x498

    .loc_0x2B4:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r27, 0
      mr        r28, r3
      b         .loc_0x3BC

    .loc_0x2D4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x25C(r12)
      mtctr     r12
      bctrl
      mr        r4, r27
      bl        -0x221264
      mr        r29, r3
      addi      r4, r1, 0x2C
      bl        -0x221520
      mr        r4, r28
      addi      r3, r1, 0x10
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x30(r1)
      lfs       f0, 0x14(r1)
      lfs       f3, 0x2C(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x10(r1)
      lfs       f1, 0x34(r1)
      lfs       f0, 0x18(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      fmadds    f0, f2, f2, f3
      fmuls     f1, f1, f1
      fadds     f1, f1, f0
      fcmpo     cr0, f1, f31
      ble-      .loc_0x360
      ble-      .loc_0x364
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x364

    .loc_0x360:
      fmr       f1, f31

    .loc_0x364:
      lfs       f0, 0x1C(r29)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3B8
      lwz       r5, 0xC0(r31)
      lis       r4, 0x804B
      lis       r3, 0x804B
      li        r0, 0
      lfs       f0, 0x604(r5)
      subi      r4, r4, 0x5D00
      addi      r5, r3, 0x4DE0
      mr        r3, r28
      stw       r4, 0x1C(r1)
      addi      r4, r1, 0x1C
      stw       r31, 0x20(r1)
      stw       r5, 0x1C(r1)
      stfs      f0, 0x24(r1)
      stw       r0, 0x28(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x3B8:
      addi      r27, r27, 0x1

    .loc_0x3BC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x25C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmpw      r27, r0
      blt+      .loc_0x2D4
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x408
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x498

    .loc_0x408:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x47C

    .loc_0x428:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x498
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x47C:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x428

    .loc_0x498:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x2B4
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x684
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x6
      beq-      .loc_0x5F0
      bge-      .loc_0x4FC
      cmpwi     r0, 0x3
      beq-      .loc_0x5C8
      bge-      .loc_0x4F0
      cmpwi     r0, 0x2
      bge-      .loc_0x520
      b         .loc_0x684

    .loc_0x4F0:
      cmpwi     r0, 0x5
      bge-      .loc_0x5E0
      b         .loc_0x684

    .loc_0x4FC:
      cmpwi     r0, 0x7D0
      beq-      .loc_0x514
      bge-      .loc_0x684
      cmpwi     r0, 0x3E8
      beq-      .loc_0x5FC
      b         .loc_0x684

    .loc_0x514:
      mr        r3, r31
      bl        0x76F8
      b         .loc_0x684

    .loc_0x520:
      lwz       r28, 0x28C(r31)
      li        r30, 0
      mr        r3, r28
      lwz       r12, 0x28(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x57C
      mr        r3, r28
      lwz       r12, 0x28(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x57C
      mr        r3, r28
      lwz       r12, 0x28(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x580

    .loc_0x57C:
      li        r30, 0x1

    .loc_0x580:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x5A4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x10F0
      li        r4, 0x454
      addi      r5, r5, 0x1108
      crclr     6, 0x6
      bl        -0x32F650

    .loc_0x5A4:
      cmplwi    r28, 0
      beq-      .loc_0x684
      mr        r3, r28
      li        r4, 0x3
      lwz       r12, 0x28(r28)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x684

    .loc_0x5C8:
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x1C(r30)
      li        r4, 0x6
      bl        0x7A90
      b         .loc_0x684

    .loc_0x5E0:
      mr        r3, r31
      li        r4, 0x6
      bl        0x7EF4
      b         .loc_0x684

    .loc_0x5F0:
      li        r0, 0x1
      stb       r0, 0x338(r31)
      b         .loc_0x684

    .loc_0x5FC:
      lwz       r0, 0x18(r30)
      cmpwi     r0, 0
      ble-      .loc_0x634
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0x8(r1)
      mr        r4, r31
      addi      r6, r1, 0x8
      li        r5, 0x7
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x684

    .loc_0x634:
      lwz       r0, 0x10(r30)
      cmpwi     r0, 0
      ble-      .loc_0x664
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xC
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x684

    .loc_0x664:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x684:
      mr        r3, r31
      li        r4, 0x1
      bl        0x7234

    .loc_0x690:
      psq_l     f31,0x138(r1),0,0
      lfd       f31, 0x130(r1)
      lmw       r27, 0x11C(r1)
      lwz       r0, 0x144(r1)
      mtlr      r0
      addi      r1, r1, 0x140
      blr
    */
}

/*
 * --INFO--
 * Address:	80359D9C
 * Size:	00003C
 */
void Game::KingChappy::StateAttack::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x6
      mr        r3, r31
      bl        0x7E14
      li        r0, 0x1
      stb       r0, 0x338(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80359DD8
 * Size:	00003C
 */
void Game::KingChappy::StateDead::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1B80
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x22C
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80359E14
 * Size:	0000CC
 */
void Game::KingChappy::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      li        r4, 0x3
      mr        r3, r31
      bl        0x7390
      lfs       f0, 0x218(r2)
      mr        r3, r31
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        -0x254738
      mr        r3, r31
      li        r4, 0x7
      bl        0x78F4
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r5, r1, 0x14
      lfs       f1, 0xC(r1)
      li        r4, 0xC
      lfs       f0, 0x10(r1)
      li        r6, 0x2
      stfs      f2, 0x14(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x107C6C
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xD
      li        r6, 0x2
      bl        -0x10673C
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)
      lwz       r31, 0x2C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80359EE0
 * Size:	0000DC
 */
void Game::KingChappy::StateDead::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xC8
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x3E8
      beq-      .loc_0xBC
      bge-      .loc_0x40
      cmpwi     r0, 0x2
      beq-      .loc_0x58
      b         .loc_0xC8

    .loc_0x40:
      cmpwi     r0, 0x7D0
      beq-      .loc_0x4C
      b         .loc_0xC8

    .loc_0x4C:
      mr        r3, r31
      bl        0x73D0
      b         .loc_0xC8

    .loc_0x58:
      mr        r3, r31
      bl        0x7DD0
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r5, r1, 0x14
      lfs       f1, 0xC(r1)
      li        r4, 0x3
      lfs       f0, 0x10(r1)
      li        r6, 0x2
      stfs      f2, 0x14(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x107D44
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xB
      li        r6, 0x2
      bl        -0x106814
      b         .loc_0xC8

    .loc_0xBC:
      mr        r3, r31
      li        r4, 0
      bl        -0x21EEB4

    .loc_0xC8:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80359FBC
 * Size:	000028
 */
void Game::KingChappy::StateDead::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0x7
      stw       r0, 0x14(r1)
      bl        0x7BFC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80359FE4
 * Size:	00003C
 */
void Game::KingChappy::StateFlick::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1B5C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x234
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035A020
 * Size:	000060
 */
void Game::KingChappy::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x5
      mr        r3, r31
      bl        0x7184
      lfs       f0, 0x218(r2)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x20
      stw       r0, 0x1E0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035A080
 * Size:	0008EC
 */
void Game::KingChappy::StateFlick::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x130(r1)
      mflr      r0
      stw       r0, 0x134(r1)
      stfd      f31, 0x120(r1)
      psq_st    f31,0x128(r1),0,0
      stfd      f30, 0x110(r1)
      psq_st    f30,0x118(r1),0,0
      stfd      f29, 0x100(r1)
      psq_st    f29,0x108(r1),0,0
      stfd      f28, 0xF0(r1)
      psq_st    f28,0xF8(r1),0,0
      stfd      f27, 0xE0(r1)
      psq_st    f27,0xE8(r1),0,0
      stw       r31, 0xDC(r1)
      stw       r30, 0xD8(r1)
      stw       r29, 0xD4(r1)
      mr        r31, r4
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x89C
      lwz       r0, 0x1C(r5)
      cmpwi     r0, 0x3E8
      beq-      .loc_0x884
      bge-      .loc_0x7C
      cmpwi     r0, 0x3
      beq-      .loc_0x2C8
      bge-      .loc_0x89C
      cmpwi     r0, 0x2
      bge-      .loc_0x94
      b         .loc_0x89C

    .loc_0x7C:
      cmpwi     r0, 0x7D0
      beq-      .loc_0x88
      b         .loc_0x89C

    .loc_0x88:
      mr        r3, r31
      bl        0x71F4
      b         .loc_0x89C

    .loc_0x94:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      mr        r3, r31
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      stfs      f2, 0x7C(r1)
      stfs      f1, 0x80(r1)
      stfs      f0, 0x84(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x1F8(r31)
      lis       r3, 0x804B
      subi      r4, r3, 0x5814
      lfs       f3, 0x7C(r1)
      lfs       f2, 0x80(r1)
      lis       r3, 0x804E
      lfs       f0, 0x84(r1)
      addi      r0, r3, 0x1B50
      stw       r4, 0x88(r1)
      stfs      f3, 0x8C(r1)
      stfs      f2, 0x90(r1)
      stfs      f0, 0x94(r1)
      stw       r0, 0x88(r1)
      stfs      f1, 0x98(r1)
      stfs      f4, 0x9C(r1)
      lwz       r0, 0x280(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1AC
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0xA0(r1)
      addi      r0, r3, 0x6A28
      lis       r3, 0x804F
      li        r4, 0x211
      stw       r0, 0xA0(r1)
      subi      r0, r3, 0x5F20
      li        r9, 0x212
      li        r8, 0x213
      li        r7, 0x214
      li        r6, 0x215
      sth       r4, 0xA4(r1)
      addi      r3, r1, 0xA0
      addi      r4, r1, 0x88
      sth       r9, 0xA6(r1)
      sth       r8, 0xA8(r1)
      sth       r7, 0xAA(r1)
      sth       r6, 0xAC(r1)
      stw       r5, 0xB0(r1)
      stw       r5, 0xB4(r1)
      stw       r5, 0xB8(r1)
      stw       r5, 0xBC(r1)
      stw       r5, 0xC0(r1)
      stw       r0, 0xA0(r1)
      bl        0x91AE4
      lwz       r3, 0x28C(r31)
      li        r4, 0x5806
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1F8

    .loc_0x1AC:
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x6C(r1)
      addi      r0, r3, 0x6A64
      lis       r3, 0x804F
      li        r4, 0x228
      stw       r0, 0x6C(r1)
      subi      r0, r3, 0x5EF8
      li        r6, 0x229
      addi      r3, r1, 0x6C
      sth       r4, 0x70(r1)
      addi      r4, r1, 0x88
      sth       r6, 0x72(r1)
      stw       r5, 0x74(r1)
      stw       r5, 0x78(r1)
      stw       r0, 0x6C(r1)
      bl        0x917D0

    .loc_0x1F8:
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x7C
      li        r4, 0x3
      li        r6, 0x2
      bl        -0x10804C
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x7C
      li        r4, 0xB
      li        r6, 0x2
      bl        -0x106B1C
      lwz       r29, 0x28C(r31)
      li        r30, 0
      mr        r3, r29
      lwz       r12, 0x28(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x27C
      mr        r3, r29
      lwz       r12, 0x28(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x27C
      mr        r3, r29
      lwz       r12, 0x28(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x280

    .loc_0x27C:
      li        r30, 0x1

    .loc_0x280:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x2A4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x10F0
      li        r4, 0x454
      addi      r5, r5, 0x1108
      crclr     6, 0x6
      bl        -0x32FCE0

    .loc_0x2A4:
      cmplwi    r29, 0
      beq-      .loc_0x89C
      mr        r3, r29
      li        r4, 0x4
      lwz       r12, 0x28(r29)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x89C

    .loc_0x2C8:
      lwz       r4, 0xC0(r31)
      lis       r3, 0x804B
      li        r0, 0
      lfs       f3, 0x23C(r2)
      lfs       f2, 0x304(r31)
      cmplwi    r0, 0
      lfs       f1, 0x934(r4)
      subi      r4, r3, 0x4364
      lfs       f0, 0x1F8(r31)
      fadds     f31, f3, f2
      lfs       f2, 0x240(r2)
      fmuls     f0, f1, f0
      lfs       f28, 0x300(r31)
      lfs       f27, 0x308(r31)
      fsubs     f30, f31, f2
      lwz       r3, -0x6D0C(r13)
      fmuls     f29, f0, f0
      stw       r4, 0x5C(r1)
      stw       r0, 0x68(r1)
      stw       r0, 0x60(r1)
      stw       r3, 0x64(r1)
      bne-      .loc_0x338
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x60(r1)
      b         .loc_0x544

    .loc_0x338:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x60(r1)
      b         .loc_0x3A4

    .loc_0x350:
      lwz       r3, 0x64(r1)
      lwz       r4, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x68(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x544
      lwz       r3, 0x64(r1)
      lwz       r4, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x60(r1)

    .loc_0x3A4:
      lwz       r12, 0x5C(r1)
      addi      r3, r1, 0x5C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x350
      b         .loc_0x544

    .loc_0x3C4:
      lwz       r3, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x488
      mr        r4, r29
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x18(r1)
      lfs       f1, 0x14(r1)
      fcmpo     cr0, f31, f0
      lfs       f2, 0x1C(r1)
      ble-      .loc_0x488
      fcmpo     cr0, f30, f0
      bge-      .loc_0x488
      fsubs     f0, f27, f2
      fsubs     f1, f28, f1
      fmuls     f0, f0, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f29
      bge-      .loc_0x488
      lwz       r5, 0xC0(r31)
      lis       r4, 0x804B
      lis       r3, 0x804B
      li        r0, 0
      lfs       f0, 0x604(r5)
      subi      r4, r4, 0x5D00
      subi      r5, r3, 0x4CE0
      mr        r3, r29
      stw       r4, 0x4C(r1)
      addi      r4, r1, 0x4C
      stw       r31, 0x50(r1)
      stw       r5, 0x4C(r1)
      stfs      f0, 0x54(r1)
      stw       r0, 0x58(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x488:
      lwz       r0, 0x68(r1)
      cmplwi    r0, 0
      bne-      .loc_0x4B4
      lwz       r3, 0x64(r1)
      lwz       r4, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x60(r1)
      b         .loc_0x544

    .loc_0x4B4:
      lwz       r3, 0x64(r1)
      lwz       r4, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x60(r1)
      b         .loc_0x528

    .loc_0x4D4:
      lwz       r3, 0x64(r1)
      lwz       r4, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x68(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x544
      lwz       r3, 0x64(r1)
      lwz       r4, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x60(r1)

    .loc_0x528:
      lwz       r12, 0x5C(r1)
      addi      r3, r1, 0x5C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x4D4

    .loc_0x544:
      lwz       r3, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x60(r1)
      cmplw     r4, r3
      bne+      .loc_0x3C4
      li        r0, 0
      lwz       r3, -0x6D20(r13)
      lis       r4, 0x804B
      stw       r0, 0x48(r1)
      subi      r4, r4, 0x434C
      cmplwi    r0, 0
      stw       r4, 0x3C(r1)
      li        r30, 0x1
      stw       r0, 0x40(r1)
      stw       r3, 0x44(r1)
      bne-      .loc_0x5A8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r1)
      b         .loc_0x7B8

    .loc_0x5A8:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r1)
      b         .loc_0x614

    .loc_0x5C0:
      lwz       r3, 0x44(r1)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x7B8
      lwz       r3, 0x44(r1)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r1)

    .loc_0x614:
      lwz       r12, 0x3C(r1)
      addi      r3, r1, 0x3C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x5C0
      b         .loc_0x7B8

    .loc_0x634:
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x6FC
      mr        r4, r29
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      lfs       f1, 0x8(r1)
      fcmpo     cr0, f31, f0
      lfs       f2, 0x10(r1)
      ble-      .loc_0x6FC
      fcmpo     cr0, f30, f0
      bge-      .loc_0x6FC
      fsubs     f0, f27, f2
      fsubs     f1, f28, f1
      fmuls     f0, f0, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f29
      bge-      .loc_0x6FC
      lwz       r5, 0xC0(r31)
      lis       r4, 0x804B
      lis       r3, 0x804B
      li        r0, 0
      lfs       f0, 0x604(r5)
      subi      r4, r4, 0x5D00
      subi      r5, r3, 0x4CE0
      mr        r3, r29
      stw       r4, 0x2C(r1)
      addi      r4, r1, 0x2C
      stw       r31, 0x30(r1)
      stw       r5, 0x2C(r1)
      stfs      f0, 0x34(r1)
      stw       r0, 0x38(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      li        r30, 0

    .loc_0x6FC:
      lwz       r0, 0x48(r1)
      cmplwi    r0, 0
      bne-      .loc_0x728
      lwz       r3, 0x44(r1)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r1)
      b         .loc_0x7B8

    .loc_0x728:
      lwz       r3, 0x44(r1)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r1)
      b         .loc_0x79C

    .loc_0x748:
      lwz       r3, 0x44(r1)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x7B8
      lwz       r3, 0x44(r1)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r1)

    .loc_0x79C:
      lwz       r12, 0x3C(r1)
      addi      r3, r1, 0x3C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x748

    .loc_0x7B8:
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x40(r1)
      cmplw     r4, r3
      bne+      .loc_0x634
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f0, 0x1F8(r31)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f28, 0x4C4(r5)
      fmuls     f30, f1, f0
      lfs       f29, 0x4EC(r5)
      fmr       f2, f28
      lfs       f27, 0x53C(r5)
      fmr       f3, f29
      lfs       f4, 0x244(r2)
      fmr       f1, f30
      bl        -0x2473B8
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f4, f1
      mr        r3, r31
      fmr       f1, f27
      li        r4, 0
      fmr       f2, f28
      fmr       f3, f29
      bl        -0x2477A0
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x864
      fmr       f1, f30
      lfs       f4, 0x244(r2)
      fmr       f2, f28
      mr        r3, r31
      fmr       f3, f29
      li        r4, 0
      bl        -0x247150

    .loc_0x864:
      lfs       f0, 0x218(r2)
      stfs      f0, 0x20C(r31)
      lwz       r3, 0x1E0(r31)
      rlwinm.   r0,r3,0,5,5
      bne-      .loc_0x89C
      rlwinm    r0,r3,0,11,9
      stw       r0, 0x1E0(r31)
      b         .loc_0x89C

    .loc_0x884:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x89C:
      mr        r3, r31
      li        r4, 0x1
      bl        0x668C
      psq_l     f31,0x128(r1),0,0
      lfd       f31, 0x120(r1)
      psq_l     f30,0x118(r1),0,0
      lfd       f30, 0x110(r1)
      psq_l     f29,0x108(r1),0,0
      lfd       f29, 0x100(r1)
      psq_l     f28,0xF8(r1),0,0
      lfd       f28, 0xF0(r1)
      psq_l     f27,0xE8(r1),0,0
      lfd       f27, 0xE0(r1)
      lwz       r31, 0xDC(r1)
      lwz       r30, 0xD8(r1)
      lwz       r0, 0x134(r1)
      lwz       r29, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0x130
      blr
    */
}

/*
 * --INFO--
 * Address:	8035A96C
 * Size:	000010
 */
void Game::KingChappy::StateFlick::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      lwz       r0, 0x1E0(r4)
      rlwinm    r0,r0,0,11,9
      stw       r0, 0x1E0(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035A97C
 * Size:	00003C
 */
void Game::KingChappy::StateWarCry::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1B2C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x248
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035A9B8
 * Size:	000054
 */
void Game::KingChappy::StateWarCry::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1
      mr        r3, r31
      bl        0x67EC
      lfs       f0, 0x218(r2)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035AA0C
 * Size:	0006D0
 */
void Game::KingChappy::StateWarCry::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x160(r1)
      mflr      r0
      stw       r0, 0x164(r1)
      stfd      f31, 0x150(r1)
      psq_st    f31,0x158(r1),0,0
      stfd      f30, 0x140(r1)
      psq_st    f30,0x148(r1),0,0
      stfd      f29, 0x130(r1)
      psq_st    f29,0x138(r1),0,0
      stfd      f28, 0x120(r1)
      psq_st    f28,0x128(r1),0,0
      stfd      f27, 0x110(r1)
      psq_st    f27,0x118(r1),0,0
      stfd      f26, 0x100(r1)
      psq_st    f26,0x108(r1),0,0
      stfd      f25, 0xF0(r1)
      psq_st    f25,0xF8(r1),0,0
      stfd      f24, 0xE0(r1)
      psq_st    f24,0xE8(r1),0,0
      stw       r31, 0xDC(r1)
      stw       r30, 0xD8(r1)
      stw       r29, 0xD4(r1)
      mr        r31, r4
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x668
      lwz       r0, 0x1C(r5)
      cmpwi     r0, 0x6
      beq-      .loc_0x610
      bge-      .loc_0xA0
      cmpwi     r0, 0x3
      beq-      .loc_0xD4
      bge-      .loc_0x94
      cmpwi     r0, 0x2
      bge-      .loc_0xC4
      b         .loc_0x668

    .loc_0x94:
      cmpwi     r0, 0x5
      bge-      .loc_0x600
      b         .loc_0x154

    .loc_0xA0:
      cmpwi     r0, 0x7D0
      beq-      .loc_0xB8
      bge-      .loc_0x668
      cmpwi     r0, 0x3E8
      beq-      .loc_0x620
      b         .loc_0x668

    .loc_0xB8:
      mr        r3, r31
      bl        0x6838
      b         .loc_0x668

    .loc_0xC4:
      mr        r3, r31
      li        r4, 0x3
      bl        0x6C80
      b         .loc_0x668

    .loc_0xD4:
      mr        r3, r31
      li        r4, 0x2
      bl        0x6C70
      mr        r3, r31
      li        r4, 0xA
      bl        0x5510
      mr        r3, r31
      li        r4, 0x4
      bl        0x5504
      mr        r4, r31
      addi      r3, r1, 0x98
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x98(r1)
      addi      r5, r1, 0xC0
      lfs       f1, 0x9C(r1)
      li        r4, 0x1A
      lfs       f0, 0xA0(r1)
      li        r6, 0x2
      stfs      f2, 0xC0(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0xC4(r1)
      stfs      f0, 0xC8(r1)
      bl        -0x108908
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0xC0
      li        r4, 0x3
      li        r6, 0x2
      bl        -0x1073D8
      b         .loc_0x668

    .loc_0x154:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8C
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x90(r1)
      li        r0, 0
      lfs       f0, 0x214(r2)
      lis       r4, 0x804B
      lwz       r3, -0x6D0C(r13)
      subi      r4, r4, 0x4364
      fsubs     f29, f1, f0
      lfs       f0, 0x240(r2)
      cmplwi    r0, 0
      stw       r4, 0xB0(r1)
      fadds     f28, f0, f29
      stw       r0, 0xBC(r1)
      stw       r0, 0xB4(r1)
      stw       r3, 0xB8(r1)
      bne-      .loc_0x1BC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x550

    .loc_0x1BC:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x228

    .loc_0x1D4:
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xBC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x550
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)

    .loc_0x228:
      lwz       r12, 0xB0(r1)
      addi      r3, r1, 0xB0
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1D4
      b         .loc_0x550

    .loc_0x248:
      lwz       r3, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r30, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x494
      mr        r4, r30
      addi      r3, r1, 0x80
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x84(r1)
      fcmpo     cr0, f28, f0
      ble-      .loc_0x494
      fcmpo     cr0, f29, f0
      bge-      .loc_0x494
      mr        r4, r30
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x68
      lfs       f30, 0x86C(r5)
      lwz       r12, 0x8(r12)
      lfs       f31, 0x894(r5)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f2, 0x68(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x74
      lfs       f1, 0x6C(r1)
      lfs       f0, 0x70(r1)
      lwz       r12, 0x8(r12)
      stfs      f2, 0x50(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x58(r1)
      mtctr     r12
      bctrl
      lfs       f5, 0x74(r1)
      lis       r3, 0x8051
      lfs       f3, 0x7C(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0x50(r1)
      lfs       f0, 0x58(r1)
      lfs       f4, 0x78(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x5C(r1)
      stfs      f4, 0x60(r1)
      stfs      f3, 0x64(r1)
      bl        -0x325C2C
      bl        0xB6E98
      lwz       r12, 0x0(r31)
      fmr       f24, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f24
      bl        0xB6EA0
      mr        r4, r31
      fmr       f26, f1
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x14
      li        r29, 0
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lfs       f27, 0x14(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f0, 0x8(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x2C
      fsubs     f24, f0, f27
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r30)
      lfs       f27, 0x30(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f0, 0x24(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x44
      fsubs     f25, f0, f27
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r30)
      lfs       f27, 0x4C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fmuls     f1, f25, f25
      lfs       f2, 0x40(r1)
      fmuls     f0, f31, f31
      fsubs     f2, f2, f27
      fmadds    f1, f24, f24, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x450
      lfs       f0, 0x254(r2)
      fabs      f2, f26
      lfs       f1, 0x250(r2)
      fmuls     f0, f0, f30
      frsp      f2, f2
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x450
      li        r29, 0x1

    .loc_0x450:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x494
      lis       r3, 0x804B
      lfs       f0, 0x258(r2)
      subi      r0, r3, 0x5D00
      lis       r3, 0x804B
      stw       r0, 0xA4(r1)
      addi      r0, r3, 0x4854
      mr        r3, r30
      addi      r4, r1, 0xA4
      stw       r31, 0xA8(r1)
      stw       r0, 0xA4(r1)
      stfs      f0, 0xAC(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x494:
      lwz       r0, 0xBC(r1)
      cmplwi    r0, 0
      bne-      .loc_0x4C0
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x550

    .loc_0x4C0:
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x534

    .loc_0x4E0:
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xBC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x550
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)

    .loc_0x534:
      lwz       r12, 0xB0(r1)
      addi      r3, r1, 0xB0
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x4E0

    .loc_0x550:
      lwz       r3, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xB4(r1)
      cmplw     r4, r3
      bne+      .loc_0x248
      lwz       r4, 0xC0(r31)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lfs       f1, 0x514(r4)
      lfs       f0, 0x1F8(r31)
      lwz       r12, 0x64(r12)
      fmuls     f27, f1, f0
      lfs       f24, 0x53C(r4)
      lfs       f25, 0x4C4(r4)
      lfs       f26, 0x4EC(r4)
      mtctr     r12
      bctrl
      fmr       f4, f1
      mr        r3, r31
      fmr       f1, f24
      li        r4, 0
      fmr       f2, f25
      fmr       f3, f26
      bl        -0x247EA8
      fmr       f1, f27
      lfs       f4, 0x244(r2)
      fmr       f2, f25
      mr        r3, r31
      fmr       f3, f26
      li        r4, 0
      bl        -0x247B0C
      fmr       f1, f27
      lfs       f4, 0x244(r2)
      fmr       f2, f25
      mr        r3, r31
      fmr       f3, f26
      li        r4, 0
      bl        -0x24786C
      lfs       f0, 0x218(r2)
      stfs      f0, 0x20C(r31)
      b         .loc_0x668

    .loc_0x600:
      mr        r3, r31
      li        r4, 0x2
      bl        0x6BB8
      b         .loc_0x668

    .loc_0x610:
      mr        r3, r31
      li        r4, 0x3
      bl        0x6BA8
      b         .loc_0x668

    .loc_0x620:
      lfs       f1, 0x200(r31)
      lfs       f0, 0x218(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x650
      lwz       r12, 0x0(r3)
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x668

    .loc_0x650:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x668:
      mr        r3, r31
      li        r4, 0x1
      bl        0x5F34
      psq_l     f31,0x158(r1),0,0
      lfd       f31, 0x150(r1)
      psq_l     f30,0x148(r1),0,0
      lfd       f30, 0x140(r1)
      psq_l     f29,0x138(r1),0,0
      lfd       f29, 0x130(r1)
      psq_l     f28,0x128(r1),0,0
      lfd       f28, 0x120(r1)
      psq_l     f27,0x118(r1),0,0
      lfd       f27, 0x110(r1)
      psq_l     f26,0x108(r1),0,0
      lfd       f26, 0x100(r1)
      psq_l     f25,0xF8(r1),0,0
      lfd       f25, 0xF0(r1)
      psq_l     f24,0xE8(r1),0,0
      lfd       f24, 0xE0(r1)
      lwz       r31, 0xDC(r1)
      lwz       r30, 0xD8(r1)
      lwz       r0, 0x164(r1)
      lwz       r29, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0x160
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B0DC
 * Size:	000040
 */
void Game::KingChappy::StateWarCry::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x2
      mr        r3, r31
      bl        0x6AD4
      mr        r3, r31
      li        r4, 0x3
      bl        0x6AC8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B11C
 * Size:	00003C
 */
void Game::KingChappy::StateDamage::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1B08
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x25C
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B158
 * Size:	000040
 */
void Game::KingChappy::StateDamage::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      li        r4, 0x2
      bl        0x604C
      li        r0, 0
      stw       r0, 0x10(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B198
 * Size:	0001B4
 */
void Game::KingChappy::StateDamage::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r3, 0x10(r3)
      cmpwi     r3, 0
      ble-      .loc_0x4C
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x10(r30)
      lwz       r0, 0xBB4(r3)
      cmpw      r4, r0
      ble-      .loc_0x4C
      mr        r3, r31
      bl        -0x255F40

    .loc_0x4C:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x190
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x6
      beq-      .loc_0x12C
      bge-      .loc_0x90
      cmpwi     r0, 0x3
      beq-      .loc_0xC4
      bge-      .loc_0x84
      cmpwi     r0, 0x2
      bge-      .loc_0xB4
      b         .loc_0x190

    .loc_0x84:
      cmpwi     r0, 0x5
      bge-      .loc_0x120
      b         .loc_0xD4

    .loc_0x90:
      cmpwi     r0, 0x7D0
      beq-      .loc_0xA8
      bge-      .loc_0x190
      cmpwi     r0, 0x3E8
      beq-      .loc_0x138
      b         .loc_0x190

    .loc_0xA8:
      mr        r3, r31
      bl        0x60BC
      b         .loc_0x190

    .loc_0xB4:
      mr        r3, r31
      li        r4, 0x4
      bl        0x6504
      b         .loc_0x190

    .loc_0xC4:
      mr        r3, r31
      li        r4, 0x5
      bl        0x64F4
      b         .loc_0x190

    .loc_0xD4:
      mr        r3, r31
      li        r4, 0x1
      bl        0x41A0
      lis       r0, 0x4330
      xoris     r3, r3, 0x8000
      stw       r3, 0xC(r1)
      mr        r3, r31
      lwz       r4, 0xC0(r31)
      stw       r0, 0x8(r1)
      lfd       f3, 0x268(r2)
      lfd       f1, 0x8(r1)
      lfs       f0, 0x8BC(r4)
      fsubs     f1, f1, f3
      lfs       f2, 0x210(r2)
      fmuls     f1, f1, f0
      bl        -0x25527C
      lfs       f0, 0x218(r2)
      stfs      f0, 0x20C(r31)
      b         .loc_0x190

    .loc_0x120:
      mr        r3, r31
      bl        0x6A50
      b         .loc_0x190

    .loc_0x12C:
      li        r0, 0x1
      stw       r0, 0x10(r30)
      b         .loc_0x190

    .loc_0x138:
      lfs       f1, 0x200(r31)
      lfs       f0, 0x218(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x170
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x190

    .loc_0x170:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x190:
      mr        r3, r31
      li        r4, 0x1
      bl        0x5C80
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B34C
 * Size:	000040
 */
void Game::KingChappy::StateDamage::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x5
      mr        r3, r31
      bl        0x6864
      mr        r3, r31
      li        r4, 0x4
      bl        0x6858
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B38C
 * Size:	00003C
 */
void Game::KingChappy::StateTurn::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1AE4
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x270
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B3C8
 * Size:	000048
 */
void Game::KingChappy::StateTurn::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0xB
      mr        r3, r31
      bl        0x5DDC
      lfs       f0, 0x218(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B410
 * Size:	0000F8
 */
void Game::KingChappy::StateTurn::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r31, r4
      lfs       f31, 0x278(r2)
      lwz       r0, 0x230(r4)
      mr        r30, r3
      cmplwi    r0, 0
      beq-      .loc_0x4C
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x254(r2)
      lfs       f0, 0x90C(r3)
      lfs       f2, 0x250(r2)
      fmuls     f0, f1, f0
      fmuls     f31, f2, f0

    .loc_0x4C:
      lfs       f1, 0x210(r2)
      mr        r3, r31
      bl        0x4CFC
      fabs      f0, f1
      frsp      f0, f0
      fcmpo     cr0, f0, f31
      bge-      .loc_0x70
      mr        r3, r31
      bl        -0x2561DC

    .loc_0x70:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xC0
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x7D0
      bne-      .loc_0x98
      mr        r3, r31
      bl        0x5E60
      b         .loc_0xC0

    .loc_0x98:
      cmplwi    r0, 0x3E8
      bne-      .loc_0xC0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xC0:
      mr        r3, r31
      li        r4, 0x1
      bl        0x5AD8
      mr        r3, r31
      li        r4, 0x1
      bl        0x56A0
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B508
 * Size:	00003C
 */
void Game::KingChappy::StateEat::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1AC0
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x27C
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B544
 * Size:	000050
 */
void Game::KingChappy::StateEat::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      mr        r0, r4
      li        r4, 0x8
      stw       r31, 0xC(r1)
      mr        r31, r5
      li        r5, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r0
      bl        0x5C54
      lbz       r0, 0x0(r31)
      stb       r0, 0x10(r30)
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
 * Address:	8035B594
 * Size:	0000A4
 */
void Game::KingChappy::StateEat::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x84
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x7D0
      bne-      .loc_0x3C
      mr        r3, r31
      bl        0x5D38
      b         .loc_0x84

    .loc_0x3C:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x84
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0
      beq-      .loc_0x6C
      lwz       r12, 0x0(r3)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x84

    .loc_0x6C:
      lwz       r12, 0x0(r3)
      li        r5, 0xC
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x84:
      mr        r3, r31
      li        r4, 0x1
      bl        0x5990
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B638
 * Size:	00003C
 */
void Game::KingChappy::StateHide::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1A9C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x280
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B674
 * Size:	0000BC
 */
void Game::KingChappy::StateHide::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      li        r4, 0x4
      mr        r3, r31
      bl        0x5B30
      mr        r3, r31
      bl        -0x259D20
      lfs       f0, 0x218(r2)
      mr        r3, r31
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x40
      stw       r0, 0x1E0(r31)
      bl        -0x253F44
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r5, r1, 0x14
      lfs       f1, 0xC(r1)
      li        r4, 0x6
      lfs       f0, 0x10(r1)
      li        r6, 0x2
      stfs      f2, 0x14(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x1094C8
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xD
      li        r6, 0x2
      bl        -0x107F98
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B730
 * Size:	0001B8
 */
void Game::KingChappy::StateHide::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x198
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x3E8
      beq-      .loc_0xE8
      bge-      .loc_0x68
      cmpwi     r0, 0x3
      beq-      .loc_0x198
      bge-      .loc_0x5C
      cmpwi     r0, 0x2
      bge-      .loc_0x80
      b         .loc_0x198

    .loc_0x5C:
      cmpwi     r0, 0x5
      bge-      .loc_0x198
      b         .loc_0xD8

    .loc_0x68:
      cmpwi     r0, 0x7D0
      beq-      .loc_0x74
      b         .loc_0x198

    .loc_0x74:
      mr        r3, r29
      bl        0x5B58
      b         .loc_0x198

    .loc_0x80:
      mr        r3, r29
      li        r4, 0x1
      bl        0x5FA0
      lwz       r0, 0x280(r29)
      cmplwi    r0, 0
      beq-      .loc_0xB8
      lwz       r3, 0x28C(r29)
      li        r4, 0x5806
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x198

    .loc_0xB8:
      lwz       r3, 0x28C(r29)
      li        r4, 0x585A
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x198

    .loc_0xD8:
      mr        r3, r29
      li        r4, 0x1
      bl        0x63BC
      b         .loc_0x198

    .loc_0xE8:
      lwz       r30, 0x28C(r29)
      li        r31, 0
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x144
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x144
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x148

    .loc_0x144:
      li        r31, 0x1

    .loc_0x148:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x16C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x10F0
      li        r4, 0x454
      addi      r5, r5, 0x1108
      crclr     6, 0x6
      bl        -0x331258

    .loc_0x16C:
      mr        r3, r30
      li        r4, 0
      bl        0x10414C
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x198:
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
 * Address:	8035B8E8
 * Size:	000054
 */
void Game::KingChappy::StateHide::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1
      mr        r3, r31
      bl        0x62C8
      mr        r3, r31
      li        r4, 0
      bl        0x62BC
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B93C
 * Size:	000040
 */
void Game::KingChappy::StateHideWait::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r7, 0x804E
      subi      r0, r5, 0x65C
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      lis       r5, 0x8049
      li        r8, 0
      addi      r7, r7, 0x1BEC
      stw       r4, 0x4(r3)
      addi      r4, r6, 0x1A78
      addi      r0, r5, 0x1114
      stw       r8, 0x8(r3)
      stw       r7, 0x0(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B97C
 * Size:	000080
 */
void Game::KingChappy::StateHideWait::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0xA
      stw       r30, 0x8(r1)
      mr        r30, r3
      stw       r0, 0x10(r3)
      mr        r3, r31
      bl        0x5818
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,21,19
      stw       r0, 0x1E0(r31)
      bl        -0x254244
      mr        r3, r31
      li        r4, 0
      bl        0x6200
      li        r0, 0
      stb       r0, 0x14(r30)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x40
      stw       r0, 0x1E0(r31)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035B9FC
 * Size:	00018C
 */
void Game::KingChappy::StateHideWait::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r31, r4
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0
      bne-      .loc_0x64
      lwz       r0, 0x280(r31)
      cmplwi    r0, 0
      beq-      .loc_0x64
      mr        r3, r31
      li        r4, 0x8
      bl        0x5D04
      li        r0, 0x1
      stb       r0, 0x14(r30)

    .loc_0x64:
      lwz       r3, 0x10(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)
      lbz       r0, 0x2EC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x90
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x10(r30)
      lwz       r0, 0xB8C(r3)
      cmpw      r4, r0
      ble-      .loc_0x114

    .loc_0x90:
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f0, 0x1F8(r31)
      li        r4, 0
      lfs       f1, 0x844(r5)
      fmuls     f31, f1, f0
      fmr       f1, f31
      bl        -0x246FE8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC0
      li        r0, 0x1
      b         .loc_0xE4

    .loc_0xC0:
      fmr       f1, f31
      mr        r3, r31
      li        r4, 0
      bl        -0x247394
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE0
      li        r0, 0x1
      b         .loc_0xE4

    .loc_0xE0:
      li        r0, 0

    .loc_0xE4:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x114
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x2EC(r31)

    .loc_0x114:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x16C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x7D0
      bne-      .loc_0x13C
      mr        r3, r31
      bl        0x57D0
      b         .loc_0x16C

    .loc_0x13C:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x16C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x2EC(r31)

    .loc_0x16C:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035BB88
 * Size:	000040
 */
void Game::KingChappy::StateHideWait::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x8
      mr        r3, r31
      bl        0x6028
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,10,8
      stw       r0, 0x1E0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035BBC8
 * Size:	00003C
 */
void Game::KingChappy::StateAppear::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1A54
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x288
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035BC04
 * Size:	0002EC
 */
void Game::KingChappy::StateAppear::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stfd      f31, 0x80(r1)
      psq_st    f31,0x88(r1),0,0
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      mr        r31, r4
      mr        r30, r3
      mr        r3, r31
      li        r4, 0x9
      li        r5, 0
      bl        0x5590
      mr        r3, r31
      bl        0x3DAC
      mr        r3, r31
      bl        -0x25A278
      lwz       r4, 0x1E0(r31)
      li        r0, 0x1
      mr        r3, r31
      rlwinm    r4,r4,0,10,8
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      oris      r4, r4, 0x20
      stw       r4, 0x1E0(r31)
      stb       r0, 0x10(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      fmr       f31, f1
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      lis       r4, 0x804B
      lfs       f1, 0xC(r1)
      lis       r3, 0x804E
      lfs       f0, 0x10(r1)
      subi      r4, r4, 0x5814
      stfs      f2, 0x14(r1)
      addi      r0, r3, 0x1B50
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lfs       f3, 0x1F8(r31)
      stw       r4, 0x38(r1)
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x40(r1)
      stfs      f0, 0x44(r1)
      stw       r0, 0x38(r1)
      stfs      f31, 0x48(r1)
      stfs      f3, 0x4C(r1)
      lwz       r0, 0x280(r31)
      cmplwi    r0, 0
      beq-      .loc_0x178
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x50(r1)
      addi      r0, r3, 0x6A28
      lis       r3, 0x804F
      li        r4, 0x211
      stw       r0, 0x50(r1)
      subi      r0, r3, 0x5F20
      li        r9, 0x212
      li        r8, 0x213
      li        r7, 0x214
      li        r6, 0x215
      sth       r4, 0x54(r1)
      addi      r3, r1, 0x50
      addi      r4, r1, 0x38
      sth       r9, 0x56(r1)
      sth       r8, 0x58(r1)
      sth       r7, 0x5A(r1)
      sth       r6, 0x5C(r1)
      stw       r5, 0x60(r1)
      stw       r5, 0x64(r1)
      stw       r5, 0x68(r1)
      stw       r5, 0x6C(r1)
      stw       r5, 0x70(r1)
      stw       r0, 0x50(r1)
      bl        0x8FF94
      lwz       r3, 0x28C(r31)
      li        r4, 0x5806
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1EC

    .loc_0x178:
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x20(r1)
      addi      r0, r3, 0x6A50
      lis       r3, 0x804F
      li        r4, 0x20E
      stw       r0, 0x20(r1)
      subi      r0, r3, 0x5F0C
      li        r7, 0x20F
      li        r6, 0x210
      sth       r4, 0x24(r1)
      addi      r3, r1, 0x20
      addi      r4, r1, 0x38
      sth       r7, 0x26(r1)
      sth       r6, 0x28(r1)
      stw       r5, 0x2C(r1)
      stw       r5, 0x30(r1)
      stw       r5, 0x34(r1)
      stw       r0, 0x20(r1)
      bl        0x8FDC8
      lwz       r3, 0x28C(r31)
      li        r4, 0x585A
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl

    .loc_0x1EC:
      mr        r3, r31
      li        r4, 0
      bl        0x5960
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x250(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x14
      li        r4, 0xF
      li        r6, 0x2
      bl        -0x109BE4
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xC
      li        r6, 0x2
      bl        -0x1086B4
      lwz       r30, 0x28C(r31)
      li        r31, 0
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x290
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x290
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x294

    .loc_0x290:
      li        r31, 0x1

    .loc_0x294:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x2B8
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x10F0
      li        r4, 0x454
      addi      r5, r5, 0x1108
      crclr     6, 0x6
      bl        -0x331878

    .loc_0x2B8:
      cmplwi    r30, 0
      beq-      .loc_0x2CC
      mr        r3, r30
      li        r4, 0x1
      bl        0x103B24

    .loc_0x2CC:
      psq_l     f31,0x88(r1),0,0
      lwz       r0, 0x94(r1)
      lfd       f31, 0x80(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	8035BEF0
 * Size:	00019C
 */
void Game::KingChappy::StateAppear::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stfd      f29, 0x30(r1)
      psq_st    f29,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      mr        r31, r4
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x170
      lwz       r0, 0x1C(r5)
      cmpwi     r0, 0x3E8
      beq-      .loc_0x138
      bge-      .loc_0x68
      cmpwi     r0, 0x3
      beq-      .loc_0x80
      bge-      .loc_0x5C
      b         .loc_0x170

    .loc_0x5C:
      cmpwi     r0, 0x5
      bge-      .loc_0x170
      b         .loc_0xD4

    .loc_0x68:
      cmpwi     r0, 0x7D0
      beq-      .loc_0x74
      b         .loc_0x170

    .loc_0x74:
      mr        r3, r31
      bl        0x5398
      b         .loc_0x170

    .loc_0x80:
      li        r0, 0
      lfs       f4, 0x244(r2)
      stb       r0, 0x10(r3)
      mr        r3, r31
      li        r4, 0
      lwz       r5, 0xC0(r31)
      lfs       f31, 0x984(r5)
      lfs       f30, 0x4EC(r5)
      lfs       f29, 0x95C(r5)
      fmr       f2, f31
      fmr       f3, f30
      fmr       f1, f29
      bl        -0x248ACC
      fmr       f1, f29
      lfs       f4, 0x244(r2)
      fmr       f2, f31
      mr        r3, r31
      fmr       f3, f30
      li        r4, 0
      bl        -0x24882C
      b         .loc_0x170

    .loc_0xD4:
      mr        r3, r31
      bl        0x5D44
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r5, r1, 0x14
      lfs       f1, 0xC(r1)
      li        r4, 0x6
      lfs       f0, 0x10(r1)
      li        r6, 0x2
      stfs      f2, 0x14(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x109DD0
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xB
      li        r6, 0x2
      bl        -0x1088A0
      b         .loc_0x170

    .loc_0x138:
      lwz       r12, 0x0(r3)
      li        r5, 0xB
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x2548B0
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x800
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,11,9
      stw       r0, 0x1E0(r31)

    .loc_0x170:
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r0, 0x64(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C08C
 * Size:	00003C
 */
void Game::KingChappy::StateCaution::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1A30
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x290
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C0C8
 * Size:	00002C
 */
void Game::KingChappy::StateCaution::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0xC
      stw       r0, 0x14(r1)
      li        r5, 0
      bl        0x50E4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C0F4
 * Size:	000064
 */
void Game::KingChappy::StateCaution::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x54
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x7D0
      bne-      .loc_0x34
      mr        r3, r4
      bl        0x51E0
      b         .loc_0x54

    .loc_0x34:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x54
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x54:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C158
 * Size:	00003C
 */
void Game::KingChappy::StateSwallow::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x1BEC
      addi      r5, r5, 0x1A0C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x298
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C194
 * Size:	00002C
 */
void Game::KingChappy::StateSwallow::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0x7
      stw       r0, 0x14(r1)
      li        r5, 0
      bl        0x5018
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C1C0
 * Size:	000094
 */
void Game::KingChappy::StateSwallow::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x7C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x7D0
      bne-      .loc_0x44
      mr        r3, r31
      bl        0x5104
      b         .loc_0x7C

    .loc_0x44:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x7C
      lfs       f1, 0x2A0(r2)
      mr        r3, r31
      li        r4, 0
      bl        -0x248394
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x7C:
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
 * Address:	8035C254
 * Size:	00000C
 */
void efx::ArgRotYScale::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x1120
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C260
 * Size:	000028
 */
void __sinit_kingChappyState_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x6740(r13)
      stfsu     f0, 0x1A00(r3)
      stfs      f0, -0x673C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
