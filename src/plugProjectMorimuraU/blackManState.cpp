

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
 * Address:	803A3AF0
 * Size:	000174
 */
void Game::BlackMan::FSM::init((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x9
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2732A4
      li        r3, 0x10
      bl        -0x37FC6C
      mr.       r4, r3
      beq-      .loc_0x38
      li        r4, 0
      bl        .loc_0x174
      mr        r4, r3

    .loc_0x38:
      mr        r3, r31
      bl        -0x273224
      li        r3, 0x14
      bl        -0x37FC90
      mr.       r4, r3
      beq-      .loc_0x5C
      li        r4, 0x1
      bl        0x3D4
      mr        r4, r3

    .loc_0x5C:
      mr        r3, r31
      bl        -0x273248
      li        r3, 0x10
      bl        -0x37FCB4
      mr.       r4, r3
      beq-      .loc_0x80
      li        r4, 0x2
      bl        0x54C
      mr        r4, r3

    .loc_0x80:
      mr        r3, r31
      bl        -0x27326C
      li        r3, 0x10
      bl        -0x37FCD8
      mr.       r4, r3
      beq-      .loc_0xA4
      li        r4, 0x3
      bl        0x90C
      mr        r4, r3

    .loc_0xA4:
      mr        r3, r31
      bl        -0x273290
      li        r3, 0x10
      bl        -0x37FCFC
      mr.       r4, r3
      beq-      .loc_0xC8
      li        r4, 0x4
      bl        0xBA4
      mr        r4, r3

    .loc_0xC8:
      mr        r3, r31
      bl        -0x2732B4
      li        r3, 0x10
      bl        -0x37FD20
      mr.       r4, r3
      beq-      .loc_0xEC
      li        r4, 0x5
      bl        0xF20
      mr        r4, r3

    .loc_0xEC:
      mr        r3, r31
      bl        -0x2732D8
      li        r3, 0x10
      bl        -0x37FD44
      mr.       r4, r3
      beq-      .loc_0x110
      li        r4, 0x7
      bl        0x10FC
      mr        r4, r3

    .loc_0x110:
      mr        r3, r31
      bl        -0x2732FC
      li        r3, 0x10
      bl        -0x37FD68
      mr.       r4, r3
      beq-      .loc_0x134
      li        r4, 0x6
      bl        0x1348
      mr        r4, r3

    .loc_0x134:
      mr        r3, r31
      bl        -0x273320
      li        r3, 0x14
      bl        -0x37FD8C
      mr.       r4, r3
      beq-      .loc_0x158
      li        r4, 0x8
      bl        0x1594
      mr        r4, r3

    .loc_0x158:
      mr        r3, r31
      bl        -0x273344
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x174:
    */
}

/*
 * --INFO--
 * Address:	803A3C64
 * Size:	00003C
 */
void Game::BlackMan::StateWalk::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5B7C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1010
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A3CA0
 * Size:	000080
 */
void Game::BlackMan::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r0, 0x364(r4)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      lwz       r0, 0x2E0(r31)
      cmpwi     r0, 0x2
      bne-      .loc_0x34

    .loc_0x2C:
      li        r0, 0
      b         .loc_0x38

    .loc_0x34:
      li        r0, 0x1

    .loc_0x38:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x54
      mr        r3, r31
      li        r4, 0x6
      li        r5, 0
      bl        -0x29ECE8
      b         .loc_0x64

    .loc_0x54:
      mr        r3, r31
      li        r4, 0x8
      li        r5, 0
      bl        -0x29ECFC

    .loc_0x64:
      mr        r3, r31
      bl        0x7320
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A3D20
 * Size:	0001D4
 */
void Game::BlackMan::StateWalk::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      mr        r3, r31
      bl        0x45F4
      lfs       f1, 0x200(r31)
      lfs       f0, 0x1018(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x5C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1BC

    .loc_0x5C:
      mr        r3, r31
      bl        0x695C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1BC

    .loc_0x90:
      mr        r3, r31
      li        r4, 0
      bl        -0x28F760
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD0
      li        r0, 0
      mr        r3, r30
      stw       r0, 0x2DC(r31)
      mr        r4, r31
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1BC

    .loc_0xD0:
      lwz       r4, 0xC0(r31)
      mr        r3, r31
      lfs       f1, 0xA1C(r4)
      bl        0x4D80
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF4
      mr        r3, r31
      bl        0x4DA4
      b         .loc_0x1BC

    .loc_0xF4:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1BC
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x4
      bge-      .loc_0x1BC
      cmpwi     r0, 0x2
      bge-      .loc_0x11C
      b         .loc_0x1BC

    .loc_0x11C:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r31
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x29CB28
      cmpwi     r3, 0xB
      bne-      .loc_0x184
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x14
      li        r4, 0x3
      li        r6, 0x2
      bl        -0x151C50
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0x8
      li        r6, 0x2
      bl        -0x150720

    .loc_0x184:
      mr        r3, r31
      bl        -0x29CB60
      cmpwi     r3, 0x8
      bne-      .loc_0x1BC
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x14
      li        r4, 0x6
      li        r6, 0x2
      bl        -0x151C88
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0x8
      li        r6, 0x2
      bl        -0x150758

    .loc_0x1BC:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803A3EF4
 * Size:	000024
 */
void Game::BlackMan::StateWalk::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x7180
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A3F18
 * Size:	00003C
 */
void Game::BlackMan::StateDead::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5B58
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x101C
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A3F54
 * Size:	000064
 */
void Game::BlackMan::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x1018(r2)
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      li        r4, 0x2
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        -0x29EF8C
      mr        r3, r31
      bl        0x6F04
      mr        r3, r31
      bl        -0x29E880
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A3FB8
 * Size:	0000FC
 */
void Game::BlackMan::StateDead::exec((Game::EnemyBase*))
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
      beq-      .loc_0xE8
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r3, 0x188(r31)
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x5
      beq-      .loc_0xA8
      bge-      .loc_0x70
      cmpwi     r0, 0x2
      bge-      .loc_0x7C
      b         .loc_0xE8

    .loc_0x70:
      cmpwi     r0, 0x3E8
      beq-      .loc_0xB4
      b         .loc_0xE8

    .loc_0x7C:
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x14
      li        r4, 0xC
      li        r6, 0x2
      bl        -0x151E08
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xE
      li        r6, 0x2
      bl        -0x1508D8
      b         .loc_0xE8

    .loc_0xA8:
      mr        r3, r31
      bl        0x6D68
      b         .loc_0xE8

    .loc_0xB4:
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x14
      li        r4, 0x11
      li        r6, 0x2
      bl        -0x151E40
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xF
      li        r6, 0x2
      bl        -0x150910
      mr        r3, r31
      li        r4, 0
      bl        -0x268FAC

    .loc_0xE8:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803A40B4
 * Size:	00003C
 */
void Game::BlackMan::StateFreeze::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5B34
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1024
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A40F0
 * Size:	000090
 */
void Game::BlackMan::StateFreeze::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      mr        r3, r30
      bl        0x68C8
      mr        r3, r30
      li        r31, 0
      bl        -0x29CDD0
      cmpwi     r3, 0x4
      bne-      .loc_0x38
      li        r31, 0x1

    .loc_0x38:
      mr        r3, r30
      li        r4, 0x1
      li        r5, 0
      bl        -0x29F130
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x5C
      lfs       f1, 0x102C(r2)
      mr        r3, r30
      bl        -0x29EF20

    .loc_0x5C:
      lfs       f0, 0x1018(r2)
      stfs      f0, 0x1C8(r30)
      stfs      f0, 0x1CC(r30)
      stfs      f0, 0x1D0(r30)
      stfs      f0, 0x1D4(r30)
      stfs      f0, 0x1D8(r30)
      stfs      f0, 0x1DC(r30)
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
 * Address:	803A4180
 * Size:	0002F4
 */
void Game::BlackMan::StateFreeze::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      lfs       f0, 0x1018(r2)
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r4
      stw       r30, 0x58(r1)
      mr        r30, r3
      lwz       r5, 0x2CC(r4)
      addi      r0, r5, 0x1
      stw       r0, 0x2CC(r4)
      lfs       f1, 0x200(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x58
      lwz       r12, 0x0(r3)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2DC

    .loc_0x58:
      mr        r3, r31
      li        r4, 0
      bl        -0x28FB88
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x98
      li        r0, 0x2
      mr        r3, r30
      stw       r0, 0x2DC(r31)
      mr        r4, r31
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2DC

    .loc_0x98:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2C0
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x28C
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
      bl        -0x152038
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xE
      li        r6, 0x2
      bl        -0x150B08
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x1018(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x158
      lfs       f0, 0x1030(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f5, f0
      b         .loc_0x17C

    .loc_0x158:
      lfs       f0, 0x1034(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f5, r3, r0

    .loc_0x17C:
      lfs       f0, 0x1018(r2)
      fmr       f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x190
      fneg      f3, f1

    .loc_0x190:
      lfs       f2, 0x1034(r2)
      lis       r3, 0x8050
      lfs       f0, 0x1018(r2)
      addi      r3, r3, 0x71A0
      fmuls     f4, f3, f2
      addi      r3, r3, 0x4
      fcmpo     cr0, f1, f0
      lfs       f2, 0x103C(r2)
      lfs       f3, 0x1038(r2)
      fmr       f7, f1
      fctiwz    f0, f4
      lfs       f4, 0x14(r1)
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fmuls     f0, f2, f0
      fmsubs    f0, f3, f5, f0
      fadds     f0, f4, f0
      stfs      f0, 0x14(r1)
      bge-      .loc_0x1E8
      fneg      f7, f1

    .loc_0x1E8:
      lfs       f6, 0x1034(r2)
      lfs       f0, 0x1018(r2)
      fmuls     f5, f7, f6
      lfs       f4, 0x1C(r1)
      fcmpo     cr0, f1, f0
      lfs       f3, 0x1038(r2)
      lfs       f2, 0x103C(r2)
      fctiwz    f0, f5
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f5, r3, r0
      bge-      .loc_0x248
      lfs       f0, 0x1030(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x268

    .loc_0x248:
      fmuls     f0, f1, f6
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r0, 0x4C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x268:
      fmuls     f0, f2, f0
      lfs       f1, 0x1040(r2)
      mr        r3, r31
      addi      r4, r1, 0x14
      fmsubs    f0, f3, f5, f0
      fadds     f0, f4, f0
      stfs      f0, 0x1C(r1)
      bl        -0x2A08B4
      b         .loc_0x2DC

    .loc_0x28C:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x2DC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x663C
      b         .loc_0x2DC

    .loc_0x2C0:
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x2CC(r31)
      lwz       r0, 0x9AC(r3)
      cmpw      r4, r0
      ble-      .loc_0x2DC
      mr        r3, r31
      bl        -0x29F1B8

    .loc_0x2DC:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4474
 * Size:	000024
 */
void Game::BlackMan::StateFreeze::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x65F0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4498
 * Size:	00003C
 */
void Game::BlackMan::StateBend::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5B10
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1044
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A44D4
 * Size:	000074
 */
void Game::BlackMan::StateBend::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      mr        r3, r30
      bl        0x64E4
      mr        r3, r30
      li        r31, 0
      bl        -0x29D1B4
      cmpwi     r3, 0x3
      bne-      .loc_0x38
      li        r31, 0x1

    .loc_0x38:
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      bl        -0x29F514
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x5C
      lfs       f1, 0x104C(r2)
      mr        r3, r30
      bl        -0x29F304

    .loc_0x5C:
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
 * Address:	803A4548
 * Size:	0001E8
 */
void Game::BlackMan::StateBend::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f0, 0x1018(r2)
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      lfs       f1, 0x200(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4C
      lwz       r12, 0x0(r3)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D0

    .loc_0x4C:
      mr        r3, r31
      bl        0x6144
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D0

    .loc_0x80:
      mr        r3, r31
      li        r4, 0
      bl        -0x28FF78
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC0
      li        r0, 0x3
      mr        r3, r30
      stw       r0, 0x2DC(r31)
      mr        r4, r31
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D0

    .loc_0xC0:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1A8
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x140
      mr        r3, r31
      bl        0x696C
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
      bl        -0x152430
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xE
      li        r6, 0x2
      bl        -0x150F00
      b         .loc_0x1D0

    .loc_0x140:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x1D0
      mr        r3, r31
      bl        0x63E0
      mr        r3, r31
      bl        0x6040
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x184
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D0

    .loc_0x184:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x7
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D0

    .loc_0x1A8:
      lwz       r3, 0x2CC(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x2CC(r31)
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x2CC(r31)
      lwz       r0, 0x984(r3)
      cmpw      r4, r0
      ble-      .loc_0x1D0
      mr        r3, r31
      bl        -0x29F474

    .loc_0x1D0:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4730
 * Size:	000024
 */
void Game::BlackMan::StateBend::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x6334
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4754
 * Size:	00003C
 */
void Game::BlackMan::StateEscape::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5AEC
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1050
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4790
 * Size:	0000B0
 */
void Game::BlackMan::StateEscape::init((Game::EnemyBase*, Game::StateArg*))
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
      bl        -0x29F7AC
      mr        r3, r31
      bl        0x6208
      mr        r3, r31
      bl        0x62B4
      lwz       r31, 0x28C(r31)
      mr        r3, r31
      lwz       r12, 0x28(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x70
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5230
      li        r4, 0x45A
      addi      r5, r5, 0x5248
      crclr     6, 0x6
      bl        -0x37A1BC

    .loc_0x70:
      cmplwi    r31, 0
      beq-      .loc_0x9C
      lbz       r0, 0xFC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x9C
      mr        r3, r31
      li        r4, 0xB
      lwz       r12, 0x28(r31)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0x9C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4840
 * Size:	0002B4
 */
void Game::BlackMan::StateEscape::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stw       r31, 0x6C(r1)
      mr        r31, r4
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x2A0
      lwz       r0, 0x1C(r5)
      cmpwi     r0, 0x5
      beq-      .loc_0x230
      bge-      .loc_0x44
      cmpwi     r0, 0x2
      beq-      .loc_0x50
      bge-      .loc_0x5C
      b         .loc_0x2A0

    .loc_0x44:
      cmpwi     r0, 0x3E8
      beq-      .loc_0x288
      b         .loc_0x2A0

    .loc_0x50:
      mr        r3, r31
      bl        0x6278
      b         .loc_0x2A0

    .loc_0x5C:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x14
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      addi      r5, r1, 0x20
      lfs       f1, 0x18(r1)
      li        r4, 0x11
      lfs       f0, 0x1C(r1)
      li        r6, 0x2
      stfs      f2, 0x20(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x15269C
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x20
      li        r4, 0x10
      li        r6, 0x2
      bl        -0x15116C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x1018(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xFC
      lfs       f0, 0x1030(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f5, f0
      b         .loc_0x120

    .loc_0xFC:
      lfs       f0, 0x1034(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f5, r3, r0

    .loc_0x120:
      lfs       f0, 0x1018(r2)
      fmr       f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x134
      fneg      f3, f1

    .loc_0x134:
      lfs       f2, 0x1034(r2)
      lis       r3, 0x8050
      lfs       f0, 0x1018(r2)
      addi      r3, r3, 0x71A0
      fmuls     f4, f3, f2
      addi      r3, r3, 0x4
      fcmpo     cr0, f1, f0
      lfs       f2, 0x105C(r2)
      lfs       f3, 0x1058(r2)
      fmr       f7, f1
      fctiwz    f0, f4
      lfs       f4, 0x20(r1)
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fmuls     f0, f2, f0
      fmsubs    f0, f3, f5, f0
      fadds     f0, f4, f0
      stfs      f0, 0x20(r1)
      bge-      .loc_0x18C
      fneg      f7, f1

    .loc_0x18C:
      lfs       f6, 0x1034(r2)
      lfs       f0, 0x1018(r2)
      fmuls     f5, f7, f6
      lfs       f4, 0x28(r1)
      fcmpo     cr0, f1, f0
      lfs       f3, 0x1058(r2)
      lfs       f2, 0x105C(r2)
      fctiwz    f0, f5
      stfd      f0, 0x48(r1)
      lwz       r0, 0x4C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f5, r3, r0
      bge-      .loc_0x1EC
      lfs       f0, 0x1030(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x50(r1)
      lwz       r0, 0x54(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x20C

    .loc_0x1EC:
      fmuls     f0, f1, f6
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x58(r1)
      lwz       r0, 0x5C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x20C:
      fmuls     f0, f2, f0
      lfs       f1, 0x1060(r2)
      mr        r3, r31
      addi      r4, r1, 0x20
      fmsubs    f0, f3, f5, f0
      fadds     f0, f4, f0
      stfs      f0, 0x28(r1)
      bl        -0x2A0F18
      b         .loc_0x2A0

    .loc_0x230:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r5, r1, 0x20
      lfs       f1, 0xC(r1)
      li        r4, 0x11
      lfs       f0, 0x10(r1)
      li        r6, 0x2
      stfs      f2, 0x20(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x152870
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x20
      li        r4, 0x10
      li        r6, 0x2
      bl        -0x151340
      b         .loc_0x2A0

    .loc_0x288:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x2A0:
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4AF4
 * Size:	00003C
 */
void Game::BlackMan::StateFall::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5AC8
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1064
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4B30
 * Size:	00004C
 */
void Game::BlackMan::StateFall::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0xD
      mr        r3, r31
      bl        -0x29FB4C
      mr        r3, r31
      bl        -0x29D3DC
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
 * Address:	803A4B7C
 * Size:	000178
 */
void Game::BlackMan::StateFall::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r31, r4
      mr        r30, r3
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xE8
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0xA4
      mr        r3, r31
      bl        0x6680
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      addi      r5, r1, 0x2C
      lfs       f1, 0x18(r1)
      li        r4, 0x11
      lfs       f0, 0x1C(r1)
      li        r6, 0x2
      stfs      f2, 0x2C(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        -0x1529C8
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x2C
      li        r4, 0xE
      li        r6, 0x2
      bl        -0x151498
      b         .loc_0xE8

    .loc_0xA4:
      cmplwi    r0, 0x3E8
      bne-      .loc_0xE8
      mr        r3, r31
      bl        0x5B4C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE8
      lwz       r0, 0x1E0(r31)
      mr        r3, r30
      mr        r4, r31
      li        r5, 0x7
      rlwinm    r0,r0,0,11,9
      li        r6, 0
      stw       r0, 0x1E0(r31)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xE8:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0xC(r1)
      addi      r4, r1, 0x20
      lfs       f0, 0x106C(r2)
      lfs       f2, 0x8(r1)
      lfs       f1, 0x10(r1)
      fadds     f0, f31, f0
      stfs      f31, 0x24(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f2, 0x20(r1)
      stfs      f1, 0x28(r1)
      stfs      f0, 0x24(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC0(r31)
      lfs       f0, 0xA48(r3)
      fadds     f0, f0, f1
      fcmpo     cr0, f31, f0
      bge-      .loc_0x158
      mr        r3, r31
      bl        -0x29FA30

    .loc_0x158:
      psq_l     f31,0x48(r1),0,0
      lwz       r0, 0x54(r1)
      lfd       f31, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4CF4
 * Size:	00003C
 */
void Game::BlackMan::StateRecover::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5AA4
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1070
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4D30
 * Size:	0000C8
 */
void Game::BlackMan::StateRecover::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      mr        r3, r30
      bl        -0x29DA04
      cmpwi     r3, 0xD
      beq-      .loc_0x90
      lwz       r31, 0x28C(r30)
      mr        r3, r31
      lwz       r12, 0x28(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5230
      li        r4, 0x45A
      addi      r5, r5, 0x5248
      crclr     6, 0x6
      bl        -0x37A750

    .loc_0x64:
      cmplwi    r31, 0
      beq-      .loc_0x90
      lbz       r0, 0xFC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x90
      mr        r3, r31
      li        r4, 0x3
      lwz       r12, 0x28(r31)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0x90:
      mr        r3, r30
      li        r4, 0x7
      li        r5, 0
      bl        -0x29FDC8
      mr        r3, r30
      bl        0x5ED4
      mr        r3, r30
      bl        0x60F4
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
 * Address:	803A4DF8
 * Size:	00016C
 */
void Game::BlackMan::StateRecover::exec((Game::EnemyBase*))
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
      mr        r3, r31
      bl        0x5D40
      mr        r3, r31
      bl        0x58BC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x58
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x154

    .loc_0x58:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x154
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x5
      beq-      .loc_0xC8
      bge-      .loc_0x90
      cmpwi     r0, 0x3
      beq-      .loc_0xA8
      bge-      .loc_0xBC
      cmpwi     r0, 0x2
      bge-      .loc_0x9C
      b         .loc_0x154

    .loc_0x90:
      cmpwi     r0, 0x3E8
      beq-      .loc_0x12C
      b         .loc_0x154

    .loc_0x9C:
      mr        r3, r31
      bl        0x5C74
      b         .loc_0x154

    .loc_0xA8:
      mr        r3, r31
      bl        0x5C68
      mr        r3, r31
      bl        0x5EF4
      b         .loc_0x154

    .loc_0xBC:
      mr        r3, r31
      bl        0x608C
      b         .loc_0x154

    .loc_0xC8:
      mr        r3, r31
      bl        0x62B8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x154
      lwz       r31, 0x28C(r31)
      mr        r3, r31
      lwz       r12, 0x28(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x114
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5230
      li        r4, 0x45A
      addi      r5, r5, 0x5248
      crclr     6, 0x6
      bl        -0x37A8C8

    .loc_0x114:
      cmplwi    r31, 0
      beq-      .loc_0x154
      mr        r3, r31
      li        r4, 0x1
      bl        0xBAAD4
      b         .loc_0x154

    .loc_0x12C:
      mr        r3, r31
      bl        0x58C4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x154:
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
 * Address:	803A4F64
 * Size:	00003C
 */
void Game::BlackMan::StateFlick::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5A80
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1078
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A4FA0
 * Size:	000158
 */
void Game::BlackMan::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r0, 0x364(r4)
      cmplwi    r0, 0
      beq-      .loc_0x30
      lwz       r0, 0x2E0(r30)
      cmpwi     r0, 0x2
      bne-      .loc_0x38

    .loc_0x30:
      li        r0, 0
      b         .loc_0x3C

    .loc_0x38:
      li        r0, 0x1

    .loc_0x3C:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0xC0
      mr        r3, r30
      li        r4, 0x3
      li        r5, 0
      bl        -0x29FFEC
      lwz       r31, 0x28C(r30)
      mr        r3, r31
      lwz       r12, 0x28(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x90
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5230
      li        r4, 0x45A
      addi      r5, r5, 0x5248
      crclr     6, 0x6
      bl        -0x37A9EC

    .loc_0x90:
      cmplwi    r31, 0
      beq-      .loc_0x138
      lbz       r0, 0xFC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x138
      mr        r3, r31
      li        r4, 0x4
      lwz       r12, 0x28(r31)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x138

    .loc_0xC0:
      mr        r3, r30
      li        r4, 0x4
      li        r5, 0
      bl        -0x2A0068
      lwz       r31, 0x28C(r30)
      mr        r3, r31
      lwz       r12, 0x28(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x10C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5230
      li        r4, 0x45A
      addi      r5, r5, 0x5248
      crclr     6, 0x6
      bl        -0x37AA68

    .loc_0x10C:
      cmplwi    r31, 0
      beq-      .loc_0x138
      lbz       r0, 0xFC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x138
      mr        r3, r31
      li        r4, 0xC
      lwz       r12, 0x28(r31)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0x138:
      mr        r3, r30
      bl        0x5FF8
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
 * Address:	803A50F8
 * Size:	0000B8
 */
void Game::BlackMan::StateFlick::exec((Game::EnemyBase*))
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
      mr        r3, r31
      bl        0x55C4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x50
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA0

    .loc_0x50:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x78
      mr        r3, r31
      bl        0x59A4
      b         .loc_0xA0

    .loc_0x78:
      cmplwi    r0, 0x3E8
      bne-      .loc_0xA0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2DC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xA0:
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
 * Address:	803A51B0
 * Size:	000024
 */
void Game::BlackMan::StateFlick::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x5F6C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A51D4
 * Size:	00003C
 */
void Game::BlackMan::StateTired::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x5BA0
      addi      r5, r5, 0x5A5C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x1080
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5210
 * Size:	00005C
 */
void Game::BlackMan::StateTired::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0xA
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x2A0234
      lfs       f0, 0x1018(r2)
      li        r0, 0
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stw       r0, 0x10(r30)
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
 * Address:	803A526C
 * Size:	0000C0
 */
void Game::BlackMan::StateTired::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x1018(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      stfs      f0, 0x1D4(r4)
      stfs      f0, 0x1D8(r4)
      stfs      f0, 0x1DC(r4)
      stfs      f0, 0x1C8(r4)
      stfs      f0, 0x1CC(r4)
      stfs      f0, 0x1D0(r4)
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x80
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0xA8
      mr        r3, r31
      bl        0x5848
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA8

    .loc_0x80:
      lwz       r3, 0x10(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x10(r30)
      lwz       r0, 0x9FC(r3)
      cmpw      r4, r0
      ble-      .loc_0xA8
      mr        r3, r31
      bl        -0x2A0070

    .loc_0xA8:
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
 * Address:	803A532C
 * Size:	000028
 */
void __sinit_blackManState_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x6630(r13)
      stfsu     f0, 0x5A50(r3)
      stfs      f0, -0x662C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
