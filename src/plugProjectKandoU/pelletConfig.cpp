#include "PrimTagParm.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 *=
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B3EEC
 * Size:	000048

void Game::PelletConfigList::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x25D490
      lis       r3, 0x804B
      li        r0, 0
      addi      r4, r3, 0x5B40
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x1C(r31)
      stw       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	801B3F34
 * Size:	0000AC

void Game::PelletConfig::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x25D448
      lis       r4, 0x804B
      addi      r3, r31, 0x18
      addi      r0, r4, 0x5B30
      stw       r0, 0x0(r31)
      bl        0xF4
      li        r0, -0x1
      subi      r4, r2, 0x4FF0
      sth       r0, 0x258(r31)
      li        r0, 0
      lfs       f4, -0x4FEC(r2)
      mr        r3, r31
      stw       r4, 0x180(r31)
      lfs       f3, -0x4FE8(r2)
      stw       r4, 0x190(r31)
      lfs       f2, -0x4FE4(r2)
      stw       r0, 0x60(r31)
      lfs       f1, -0x4FE0(r2)
      stfs      f4, 0x1B0(r31)
      lfs       f0, -0x4FDC(r2)
      stfs      f3, 0x1D0(r31)
      stfs      f2, 0x1E0(r31)
      stfs      f1, 0x1F0(r31)
      stfs      f0, 0x200(r31)
      stw       r0, 0x1A0(r31)
      stw       r0, 0x234(r31)
      stw       r0, 0x230(r31)
      stfs      f4, 0x210(r31)
      stfs      f4, 0x214(r31)
      stfs      f4, 0x218(r31)
      sth       r0, 0x244(r31)
      sth       r0, 0x254(r31)
      stb       r0, 0x25A(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	801B3FE0
 * Size:	000070

void Game::PelletConfig::TParms::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr.       r30, r3
      beq-      .loc_0x54
      lis       r4, 0x804B
      addi      r0, r4, 0x5B20
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0x5B10
      stw       r0, 0x0(r30)
      bl        0x25D568

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x18FF7C

    .loc_0x54:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	801B4050
 * Size:	000374

void Game::PelletConfig::TParms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x558
      addi      r4, r31, 0x10
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        0x267FD4
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5B20
      addi      r3, r30, 0x1C
      stw       r0, 0x0(r30)
      subi      r5, r2, 0x4FD8
      bl        0x267F04
      mr        r4, r30
      addi      r3, r30, 0x2C
      subi      r5, r2, 0x4FD0
      bl        0x267EF4
      mr        r4, r30
      addi      r3, r30, 0x3C
      addi      r5, r31, 0x20
      bl        0x267EE4
      mr        r4, r30
      addi      r3, r30, 0x4C
      subi      r5, r2, 0x4FC8
      bl        0x267ED4
      mr        r4, r30
      addi      r3, r30, 0x5C
      subi      r5, r2, 0x4FC4
      bl        0x267EC4
      mr        r4, r30
      addi      r3, r30, 0x6C
      addi      r5, r31, 0x2C
      bl        0x267EB4
      mr        r4, r30
      addi      r3, r30, 0x7C
      subi      r5, r2, 0x4FBC
      bl        0x267FAC
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x8C
      stw       r0, 0x7C(r30)
      addi      r5, r31, 0x38
      bl        0x267F90
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x9C
      stw       r0, 0x8C(r30)
      subi      r5, r2, 0x4FB4
      bl        0x267F74
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0xAC
      stw       r0, 0x9C(r30)
      addi      r5, r31, 0x44
      bl        0x267F58
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0xBC
      stw       r0, 0xAC(r30)
      addi      r5, r31, 0x54
      bl        0x267E34
      mr        r4, r30
      addi      r3, r30, 0xCC
      addi      r5, r31, 0x64
      bl        0x267F2C
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0xDC
      stw       r0, 0xCC(r30)
      addi      r5, r31, 0x74
      bl        0x267F10
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0xEC
      stw       r0, 0xDC(r30)
      addi      r5, r31, 0x84
      bl        0x267EF4
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0xFC
      stw       r0, 0xEC(r30)
      subi      r5, r2, 0x4FAC
      bl        0x267ED8
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0x10C
      stw       r0, 0xFC(r30)
      subi      r5, r2, 0x4FA8
      bl        0x267EBC
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0x11C
      stw       r0, 0x10C(r30)
      addi      r5, r31, 0x90
      bl        0x267EA0
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0x12C
      stw       r0, 0x11C(r30)
      addi      r5, r31, 0xA0
      bl        0x267E84
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0x13C
      stw       r0, 0x12C(r30)
      addi      r5, r31, 0xB0
      bl        0x267D60
      mr        r4, r30
      addi      r3, r30, 0x14C
      subi      r5, r2, 0x4FA4
      bl        0x267E58
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0x15C
      stw       r0, 0x14C(r30)
      subi      r5, r2, 0x4F9C
      bl        0x267D34
      mr        r4, r30
      addi      r3, r30, 0x16C
      addi      r5, r31, 0xBC
      bl        0x267D24
      mr        r4, r30
      addi      r3, r30, 0x17C
      addi      r5, r31, 0xC8
      bl        0x267E1C
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AE0
      addi      r3, r30, 0x18C
      stw       r0, 0x17C(r30)
      subi      r5, r2, 0x4F94
      bl        0x267E00
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x19C
      stw       r0, 0x18C(r30)
      addi      r5, r31, 0xD8
      bl        0x267DE4
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x1AC
      stw       r0, 0x19C(r30)
      subi      r5, r2, 0x4F8C
      bl        0x267DC8
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x1BC
      stw       r0, 0x1AC(r30)
      subi      r5, r2, 0x4F84
      bl        0x267DAC
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x1CC
      stw       r0, 0x1BC(r30)
      subi      r5, r2, 0x4F7C
      bl        0x267D90
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x1DC
      stw       r0, 0x1CC(r30)
      subi      r5, r2, 0x4F74
      bl        0x267D74
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AF8
      addi      r3, r30, 0x1EC
      stw       r0, 0x1DC(r30)
      subi      r5, r2, 0x4F6C
      bl        0x267D58
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AC8
      addi      r3, r30, 0x208
      stw       r0, 0x1EC(r30)
      subi      r5, r2, 0x4F64
      bl        0x267D3C
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5AB0
      addi      r3, r30, 0x220
      stw       r0, 0x208(r30)
      subi      r5, r2, 0x4F5C
      bl        0x267D20
      lis       r3, 0x804B
      mr        r4, r30
      addi      r0, r3, 0x5A98
      addi      r3, r30, 0x230
      stw       r0, 0x220(r30)
      addi      r5, r31, 0xE4
      bl        0x267D04
      lis       r4, 0x804B
      mr        r3, r30
      addi      r0, r4, 0x5A98
      stw       r0, 0x230(r30)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	801B43C4
 * Size:	000060

void TagParameters::~TagParameters()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr.       r30, r3
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0x5B10
      stw       r0, 0x0(r30)
      bl        0x25D194
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x190350

    .loc_0x44:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	801B4424
 * Size:	000084

void Game::PelletConfigList::getPelletConfig((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      li        r30, 0
      li        r31, 0
      b         .loc_0x60

    .loc_0x24:
      lwz       r0, 0x1C(r27)
      mr        r3, r28
      add       r29, r0, r31
      bl        -0xE9B44
      mr        r0, r3
      lwz       r3, 0x40(r29)
      mr        r5, r0
      mr        r4, r28
      bl        -0xE9DE8
      cmpwi     r3, 0
      bne-      .loc_0x58
      mr        r3, r29
      b         .loc_0x70

    .loc_0x58:
      addi      r31, r31, 0x260
      addi      r30, r30, 0x1

    .loc_0x60:
      lwz       r0, 0x18(r27)
      cmpw      r30, r0
      blt+      .loc_0x24
      li        r3, 0

    .loc_0x70:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

}

/*
 * --INFO--
 * Address:	801B44A8
 * Size:	00007C

void Game::PelletConfigList::getPelletConfig((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0
      blt-      .loc_0x34
      lwz       r0, 0x18(r30)
      cmpw      r31, r0
      bge-      .loc_0x34
      li        r3, 0x1

    .loc_0x34:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x58
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x468
      li        r4, 0x7D
      subi      r5, r5, 0x454
      crclr     6, 0x6
      bl        -0x189EBC

    .loc_0x58:
      mulli     r0, r31, 0x260
      lwz       r3, 0x1C(r30)
      add       r3, r3, r0
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	801B4524
 * Size:	000044

void Game::PelletConfigList::getPelletConfig_ByDictionaryNo((int))
{
    /*
    .loc_0x0:
      lwz       r0, 0x18(r3)
      addi      r4, r4, 0x1
      li        r5, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x3C

    .loc_0x18:
      lwz       r0, 0x1C(r3)
      add       r6, r0, r5
      lhz       r0, 0x254(r6)
      cmpw      r4, r0
      bne-      .loc_0x34
      mr        r3, r6
      blr

    .loc_0x34:
      addi      r5, r5, 0x260
      bdnz+     .loc_0x18

    .loc_0x3C:
      li        r3, 0
      blr

}

/*
 * --INFO--
 * Address:	........
 * Size:	000068

void Game::PelletConfigList::dump(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C

void Game::PelletConfigList::load((char*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B4568
 * Size:	000130

void Game::PelletConfigList::read((Stream&))
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
      mr        r3, r29
      bl        0x260500
      stw       r3, 0x18(r28)
      lwz       r30, 0x18(r28)
      mulli     r3, r30, 0x260
      addi      r3, r3, 0x10
      bl        -0x1905F8
      lis       r4, 0x801B
      lis       r5, 0x801B
      addi      r4, r4, 0x3F34
      mr        r7, r30
      addi      r5, r5, 0x4698
      li        r6, 0x260
      bl        -0xF2BD0
      stw       r3, 0x1C(r28)
      li        r30, 0
      li        r31, 0
      b         .loc_0x104

    .loc_0x6C:
      lwz       r0, 0x1C(r28)
      addi      r3, r31, 0x18
      mr        r4, r29
      add       r3, r0, r3
      bl        0x267AF0
      lwz       r4, 0x1C(r28)
      addi      r3, r31, 0x258
      addi      r0, r31, 0x190
      sthx      r30, r4, r3
      subi      r3, r2, 0x4F54
      lwz       r4, 0x1C(r28)
      lwzx      r4, r4, r0
      bl        -0xE9F44
      cmpwi     r3, 0
      bne-      .loc_0xBC
      lwz       r3, 0x1C(r28)
      addi      r0, r31, 0x25A
      li        r4, 0x2
      stbx      r4, r3, r0
      b         .loc_0xFC

    .loc_0xBC:
      lwz       r4, 0x1C(r28)
      addi      r0, r31, 0x190
      subi      r3, r2, 0x4F50
      lwzx      r4, r4, r0
      bl        -0xE9F74
      cmpwi     r3, 0
      bne-      .loc_0xEC
      lwz       r3, 0x1C(r28)
      addi      r0, r31, 0x25A
      li        r4, 0x1
      stbx      r4, r3, r0
      b         .loc_0xFC

    .loc_0xEC:
      lwz       r3, 0x1C(r28)
      addi      r0, r31, 0x25A
      li        r4, 0
      stbx      r4, r3, r0

    .loc_0xFC:
      addi      r31, r31, 0x260
      addi      r30, r30, 0x1

    .loc_0x104:
      lwz       r0, 0x18(r28)
      cmpw      r30, r0
      blt+      .loc_0x6C
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

}

/*
 * --INFO--
 * Address:	801B4698
 * Size:	000098

void Game::PelletConfig::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr.       r30, r3
      beq-      .loc_0x7C
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r0, r3, 0x5B30
      stw       r0, 0x0(r30)
      beq-      .loc_0x60
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r0, r3, 0x5B20
      stw       r0, 0x18(r30)
      beq-      .loc_0x60
      lis       r4, 0x804B
      addi      r3, r30, 0x18
      addi      r0, r4, 0x5B10
      li        r4, 0
      stw       r0, 0x18(r30)
      bl        0x25CE94

    .loc_0x60:
      mr        r3, r30
      li        r4, 0
      bl        0x25CE88
      extsh.    r0, r31
      ble-      .loc_0x7C
      mr        r3, r30
      bl        -0x19065C

    .loc_0x7C:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}

/*
 * --INFO--
 * Address:	........
 * Size:	000004

void Game::PelletConfigList::write((Stream&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B4730
 * Size:	000004
 */
void TagParm::flushValue()
{
    return;
}

/*
 * --INFO--
 * Address:	801B4734
 * Size:	000060
 */
/*
void Game::PelletConfigList::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr.       r30, r3
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0x5B40
      stw       r0, 0x0(r30)
      bl        0x25CE24
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x1906C0

    .loc_0x44:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

}
*/