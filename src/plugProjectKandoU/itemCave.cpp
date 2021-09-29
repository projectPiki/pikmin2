

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E9FB8
 * Size:	0000D8
 */
void init__Q34Game8ItemCave3FSMFPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1EAC
  li        r3, 0x10
  bl        -0x1C6134
  mr.       r4, r3
  beq-      .loc_0x68
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x5630
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r7, 0
  lis       r3, 0x804C
  subi      r6, r6, 0x5664
  stw       r7, 0x4(r4)
  subi      r5, r5, 0x5698
  subi      r0, r3, 0x56CC
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x68:
  mr        r3, r31
  bl        0x1F60
  li        r3, 0x10
  bl        -0x1C6188
  mr.       r4, r3
  beq-      .loc_0xBC
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x5630
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r7, 0
  lis       r3, 0x804C
  subi      r6, r6, 0x5664
  stw       r7, 0x4(r4)
  subi      r5, r5, 0x5698
  subi      r0, r3, 0x5700
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0xBC:
  mr        r3, r31
  bl        0x1F0C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA090
 * Size:	000004
 */
void init__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA094
 * Size:	000004
 */
void exec__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA098
 * Size:	000004
 */
void cleanup__Q34Game8ItemCave11NormalStateFPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA09C
 * Size:	000004
 */
void init__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA0A0
 * Size:	000004
 */
void exec__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA0A4
 * Size:	000004
 */
void cleanup__Q34Game8ItemCave9OpenStateFPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA0A8
 * Size:	0000E4
 */
void __ct__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x40A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1E0D8
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x5924
  li        r3, 0x1C
  stw       r4, 0x0(r31)
  addi      r4, r4, 0x1B0
  stw       r4, 0x178(r31)
  stw       r0, 0x1D8(r31)
  stw       r0, 0x1DC(r31)
  bl        -0x1C6244
  cmplwi    r3, 0
  beq-      .loc_0x78
  lis       r4, 0x804C
  lis       r5, 0x804C
  subi      r0, r4, 0x593C
  lis       r4, 0x804C
  stw       r0, 0x0(r3)
  li        r6, -0x1
  subi      r5, r5, 0x5954
  subi      r0, r4, 0x5610
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)

.loc_0x78:
  stw       r3, 0x1D8(r31)
  mr        r4, r31
  lwz       r3, 0x1D8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804C
  addi      r3, r31, 0x1E8
  subi      r4, r4, 0x5B8C
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x1B0
  stw       r0, 0x178(r31)
  bl        0x22911C
  addi      r3, r31, 0x204
  li        r4, 0x1
  bl        .loc_0xE4
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x1E0(r31)
  stw       r0, 0x1E4(r31)
  stw       r0, 0x200(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xE4:
*/
}

/*
 * --INFO--
 * Address:	801EA18C
 * Size:	0002B4
 */
void __ct__Q34Game8ItemCave7FogParmFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  lis       r4, 0x8048
  stw       r31, 0xC(r1)
  addi      r31, r4, 0xF98
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x30
  addi      r0, r30, 0x178
  stw       r0, 0x0(r30)

.loc_0x30:
  li        r0, 0
  lis       r5, 0x6667
  stw       r0, 0x4(r30)
  subi      r0, r2, 0x4980
  mr        r4, r30
  addi      r3, r30, 0xC
  stw       r0, 0x8(r30)
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x4978
  bl        0x229478
  lis       r3, 0x804B
  lis       r5, 0x6667
  subi      r0, r3, 0x5344
  lfs       f0, -0x4970(r2)
  stw       r0, 0xC(r30)
  mr        r4, r30
  lfs       f1, -0x496C(r2)
  addi      r3, r30, 0x34
  stfs      f0, 0x24(r30)
  addi      r5, r5, 0x3031
  lfs       f0, -0x4968(r2)
  subi      r6, r2, 0x4964
  stfs      f1, 0x2C(r30)
  stfs      f0, 0x30(r30)
  bl        0x22943C
  lis       r3, 0x804B
  lis       r5, 0x6667
  subi      r0, r3, 0x5344
  lfs       f0, -0x495C(r2)
  stw       r0, 0x34(r30)
  mr        r4, r30
  lfs       f1, -0x496C(r2)
  addi      r3, r30, 0x5C
  stfs      f0, 0x4C(r30)
  addi      r5, r5, 0x3032
  lfs       f0, -0x4968(r2)
  addi      r6, r31, 0x18
  stfs      f1, 0x54(r30)
  stfs      f0, 0x58(r30)
  bl        0x229400
  lis       r3, 0x804B
  lis       r5, 0x6667
  subi      r0, r3, 0x5344
  lfs       f0, -0x4958(r2)
  stw       r0, 0x5C(r30)
  mr        r4, r30
  lfs       f1, -0x4954(r2)
  addi      r3, r30, 0x84
  stfs      f0, 0x74(r30)
  addi      r5, r5, 0x3033
  lfs       f0, -0x4950(r2)
  subi      r6, r2, 0x494C
  stfs      f1, 0x7C(r30)
  stfs      f0, 0x80(r30)
  bl        0x2293C4
  lis       r3, 0x804B
  lis       r5, 0x6667
  subi      r0, r3, 0x5344
  lfs       f0, -0x4958(r2)
  stw       r0, 0x84(r30)
  mr        r4, r30
  lfs       f1, -0x4954(r2)
  addi      r3, r30, 0xAC
  stfs      f0, 0x9C(r30)
  addi      r5, r5, 0x3034
  lfs       f0, -0x4950(r2)
  subi      r6, r2, 0x4944
  stfs      f1, 0xA4(r30)
  stfs      f0, 0xA8(r30)
  bl        0x229388
  lis       r3, 0x804C
  lis       r5, 0x6667
  subi      r0, r3, 0x5968
  li        r3, 0xA
  stw       r0, 0xAC(r30)
  li        r7, 0
  li        r0, 0xFF
  mr        r4, r30
  stb       r3, 0xC4(r30)
  addi      r3, r30, 0xC8
  addi      r5, r5, 0x3035
  subi      r6, r2, 0x4940
  stb       r7, 0xC6(r30)
  stb       r0, 0xC7(r30)
  bl        0x22934C
  lis       r3, 0x804C
  lis       r5, 0x6667
  subi      r0, r3, 0x5968
  li        r3, 0x6E
  stw       r0, 0xC8(r30)
  li        r7, 0
  li        r0, 0xFF
  mr        r4, r30
  stb       r3, 0xE0(r30)
  addi      r3, r30, 0xE4
  addi      r5, r5, 0x3036
  subi      r6, r2, 0x4938
  stb       r7, 0xE2(r30)
  stb       r0, 0xE3(r30)
  bl        0x229310
  lis       r3, 0x804C
  lis       r5, 0x6667
  subi      r0, r3, 0x5968
  li        r3, 0x76
  stw       r0, 0xE4(r30)
  li        r7, 0
  li        r0, 0xFF
  mr        r4, r30
  stb       r3, 0xFC(r30)
  addi      r3, r30, 0x100
  addi      r5, r5, 0x3037
  addi      r6, r31, 0x24
  stb       r7, 0xFE(r30)
  stb       r0, 0xFF(r30)
  bl        0x2292D4
  lis       r3, 0x804B
  lis       r5, 0x6667
  subi      r0, r3, 0x5344
  lfs       f0, -0x4930(r2)
  stw       r0, 0x100(r30)
  mr        r4, r30
  lfs       f1, -0x4954(r2)
  addi      r3, r30, 0x128
  stfs      f0, 0x118(r30)
  addi      r5, r5, 0x3038
  lfs       f0, -0x4968(r2)
  addi      r6, r31, 0x30
  stfs      f1, 0x120(r30)
  stfs      f0, 0x124(r30)
  bl        0x229298
  lis       r3, 0x804B
  lis       r5, 0x6667
  subi      r0, r3, 0x5344
  lfs       f0, -0x492C(r2)
  stw       r0, 0x128(r30)
  mr        r4, r30
  lfs       f1, -0x4954(r2)
  addi      r3, r30, 0x150
  stfs      f0, 0x140(r30)
  addi      r5, r5, 0x3039
  lfs       f0, -0x4968(r2)
  addi      r6, r31, 0x3C
  stfs      f1, 0x148(r30)
  stfs      f0, 0x14C(r30)
  bl        0x22925C
  lis       r3, 0x804B
  lfs       f2, -0x4928(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x4954(r2)
  stw       r0, 0x150(r30)
  mr        r3, r30
  lfs       f0, -0x4968(r2)
  stfs      f2, 0x168(r30)
  stfs      f1, 0x170(r30)
  stfs      f0, 0x174(r30)
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
 * Address:	801EA440
 * Size:	000078
 */
void onInit__Q34Game8ItemCave4ItemFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, 0x180(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1D8(r31)
  mr        r4, r31
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
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
 * Address:	801EA4B8
 * Size:	000034
 */
void start__Q24Game35StateMachine<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r0, 0x1DC(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA4EC
 * Size:	000044
 */
void makeTrMatrix__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f0, -0x4954(r2)
  mr        r4, r3
  stw       r0, 0x24(r1)
  addi      r5, r1, 0x8
  lfs       f1, 0x1FC(r3)
  addi      r3, r4, 0x138
  addi      r4, r4, 0x19C
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        0x23E36C
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA530
 * Size:	000264
 */
void onSetPosition__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  lfs       f0, -0x4924(r2)
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r3
  stw       r30, 0x68(r1)
  lfs       f1, 0x19C(r3)
  li        r3, 0x44
  stfs      f1, 0x1C4(r31)
  lfs       f1, 0x1A0(r31)
  stfs      f1, 0x1C8(r31)
  lfs       f1, 0x1A4(r31)
  stfs      f1, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  bl        -0x1C66C8
  mr.       r30, r3
  beq-      .loc_0x68
  li        r4, 0xAF
  li        r5, 0xB0
  li        r6, 0xB1
  li        r7, 0xB2
  bl        0x1C5C20
  lis       r3, 0x804B
  addi      r0, r3, 0x7CC8
  stw       r0, 0x0(r30)

.loc_0x68:
  stw       r30, 0x1F8(r31)
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x104
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x48(r3)
  addi      r5, r31, 0x1E8
  lwz       r3, -0x6B70(r13)
  bl        -0x1E18
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD0
  lwz       r5, 0x1F0(r31)
  mr        r3, r31
  li        r4, 0x13
  bl        0x33F8C
  b         .loc_0x104

.loc_0xD0:
  mr        r3, r31
  bl        0x9C0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  lwz       r5, 0x1F0(r31)
  mr        r3, r31
  li        r4, 0x14
  bl        0x33F68
  b         .loc_0x104

.loc_0xF4:
  lwz       r5, 0x1F0(r31)
  mr        r3, r31
  li        r4, 0xB
  bl        0x33F54

.loc_0x104:
  mr        r3, r31
  bl        0x98C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  lfs       f0, -0x4920(r2)
  stfs      f0, 0x1D0(r31)

.loc_0x11C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x174(r31)
  addi      r3, r31, 0x138
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0x1003A4
  lwz       r3, 0x174(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r31)
  lwz       r3, 0x10(r3)
  bl        0x23F20C
  lis       r4, 0x6675
  mr        r30, r3
  addi      r3, r1, 0x14
  addi      r4, r4, 0x7461
  bl        0x228C00
  addi      r3, r1, 0x40
  bl        -0x24DF0
  stw       r31, 0x40(r1)
  addi      r3, r1, 0x44
  addi      r4, r1, 0x14
  li        r5, 0x5
  bl        -0x128FAC
  lwz       r0, 0x1C(r1)
  lis       r3, 0x8048
  addi      r4, r3, 0xFE0
  lwz       r5, -0x6B60(r13)
  stw       r0, 0x4C(r1)
  mr        r3, r30
  lfs       f0, -0x491C(r2)
  lwz       r0, 0x88(r5)
  stw       r0, 0x50(r1)
  stw       r30, 0x54(r1)
  stfs      f0, 0x5C(r1)
  bl        0x23DBE0
  lwz       r3, -0x6BE0(r13)
  addi      r4, r1, 0x40
  bl        -0x24DDC
  stw       r3, 0x380(r31)
  lis       r4, 0x7369
  addi      r3, r1, 0x8
  addi      r4, r4, 0x6465
  bl        0x228B94
  addi      r3, r1, 0x20
  bl        -0x24E5C
  stw       r31, 0x20(r1)
  addi      r3, r1, 0x24
  addi      r4, r1, 0x8
  li        r5, 0x5
  bl        -0x129018
  lwz       r0, 0x10(r1)
  addi      r4, r1, 0x20
  lwz       r3, -0x6B60(r13)
  stw       r0, 0x2C(r1)
  lfs       f0, -0x491C(r2)
  lwz       r0, 0x8C(r3)
  lwz       r3, -0x6BE0(r13)
  stw       r0, 0x30(r1)
  stw       r30, 0x34(r1)
  stfs      f0, 0x3C(r1)
  bl        -0x24E38
  stw       r3, 0x384(r31)
  li        r4, 0x1
  lwz       r3, 0x380(r31)
  bl        -0x25B98
  lwz       r3, 0x384(r31)
  li        r4, 0x1
  bl        -0x25BA4
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	801EA794
 * Size:	000314
 */
void initDependency__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  lwz       r4, -0x6B10(r13)
  cmplwi    r4, 0
  beq-      .loc_0x28
  addi      r4, r4, 0x30

.loc_0x28:
  li        r0, 0
  lis       r3, 0x804B
  addi      r3, r3, 0x560
  stw       r0, 0x3C(r1)
  cmplwi    r0, 0
  stw       r3, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r4, 0x38(r1)
  bne-      .loc_0x68
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x26C

.loc_0x68:
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0xD8

.loc_0x84:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x26C
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0xD8:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x84
  b         .loc_0x26C

.loc_0xF8:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r0, r3
  mr        r30, r0
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1C(r1)
  lfs       f0, 0x10(r1)
  lfs       f2, 0x14(r1)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r1)
  lfs       f0, -0x4954(r2)
  fsubs     f1, f2, f1
  fmuls     f2, f3, f3
  fmadds    f1, f1, f1, f2
  fcmpo     cr0, f1, f0
  ble-      .loc_0x198
  ble-      .loc_0x19C
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x19C

.loc_0x198:
  fmr       f1, f0

.loc_0x19C:
  lfs       f0, -0x4918(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1B0
  stw       r30, 0x1F4(r31)
  b         .loc_0x2FC

.loc_0x1B0:
  lwz       r0, 0x3C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1DC
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x26C

.loc_0x1DC:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x250

.loc_0x1FC:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x26C
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0x250:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1FC

.loc_0x26C:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x34(r1)
  cmplw     r4, r3
  bne+      .loc_0xF8
  mr        r3, r31
  bl        0x5A0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2F4
  lis       r3, 0x8051
  lfsu      f2, 0x41E4(r3)
  lis       r5, 0x804B
  addi      r4, r1, 0x20
  lfs       f1, 0x4(r3)
  subi      r0, r5, 0x5814
  lfs       f0, 0x8(r3)
  stw       r0, 0x20(r1)
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x1A4(r31)
  stfs      f0, 0x2C(r1)
  lwz       r3, 0x1F8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2F4:
  li        r0, 0
  stw       r0, 0x1F4(r31)

.loc_0x2FC:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	801EAAA8
 * Size:	00008C
 */
void sound_culling__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r3, -0x6D20(r13)
  bl        -0x8FEA0
  cmplwi    r3, 0
  beq-      .loc_0x74
  mr        r4, r3
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x10(r1)
  lfs       f0, 0x1A4(r31)
  lfs       f2, 0x8(r1)
  fsubs     f3, f1, f0
  lfs       f1, 0x19C(r31)
  lfs       f0, -0x4914(r2)
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x74
  li        r3, 0x1
  b         .loc_0x78

.loc_0x74:
  li        r3, 0

.loc_0x78:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801EAB34
 * Size:	00005C
 */
void changeMaterial__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x47C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48
  lwz       r3, 0x174(r31)
  subi      r4, r2, 0x4910
  bl        0x254488
  lhz       r5, 0x38(r3)
  li        r4, 0
  lwz       r3, 0x174(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EAB90
 * Size:	00014C
 */
void createLightEvent__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lwz       r0, 0x200(r3)
  cmplwi    r0, 0
  bne-      .loc_0x138
  li        r10, 0
  lfs       f6, -0x4908(r2)
  stb       r10, 0x8(r1)
  lis       r8, 0x4330
  ori       r9, r10, 0x3
  lfs       f5, -0x4904(r2)
  stb       r10, 0x9(r1)
  ori       r3, r10, 0x1
  lfs       f4, -0x4958(r2)
  rlwinm    r0,r3,0,24,31
  stb       r10, 0x8(r1)
  ori       r7, r0, 0x10
  lfs       f3, -0x4954(r2)
  rlwinm    r5,r9,0,24,29
  stb       r10, 0x9(r1)
  rlwinm    r6,r9,0,24,30
  lfs       f1, -0x4900(r2)
  ori       r4, r5, 0xC
  lfs       f0, -0x48FC(r2)
  addi      r0, r31, 0x19C
  stb       r3, 0x9(r1)
  lfd       f2, -0x48F8(r2)
  stb       r9, 0x8(r1)
  lwz       r3, -0x6C18(r13)
  stfs      f6, 0xC(r1)
  stfs      f6, 0x10(r1)
  stfs      f6, 0x14(r1)
  stfs      f5, 0x18(r1)
  stfs      f4, 0x1C(r1)
  stfs      f3, 0x20(r1)
  stfs      f1, 0x24(r1)
  stw       r10, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lfs       f1, 0x250(r31)
  lfs       f0, 0x228(r31)
  stw       r8, 0x30(r1)
  stb       r7, 0x9(r1)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x24(r1)
  lfs       f1, 0x2A0(r31)
  lfs       f0, 0x278(r31)
  stw       r8, 0x38(r1)
  stb       r6, 0x8(r1)
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  lbz       r9, 0x300(r31)
  lbz       r7, 0x2E4(r31)
  lbz       r6, 0x2C8(r31)
  stw       r9, 0x34(r1)
  stw       r7, 0x3C(r1)
  lfd       f1, 0x30(r1)
  lfd       f0, 0x38(r1)
  fsubs     f3, f1, f2
  stw       r6, 0x44(r1)
  fsubs     f1, f0, f2
  stw       r8, 0x40(r1)
  lfd       f0, 0x40(r1)
  stb       r5, 0x8(r1)
  fsubs     f0, f0, f2
  stfs      f1, 0x10(r1)
  stfs      f0, 0xC(r1)
  stfs      f3, 0x14(r1)
  lfs       f0, 0x31C(r31)
  stb       r4, 0x8(r1)
  stw       r0, 0x28(r1)
  stfs      f0, 0x2C(r1)
  bl        -0x35C4C
  addi      r4, r1, 0x8
  bl        -0xCB7DC
  stw       r3, 0x200(r31)

.loc_0x138:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void killLightEvent__Q34Game8ItemCave4ItemFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801EACDC
 * Size:	000014
 */
void do_setLODParm__Q34Game8ItemCave4ItemFRQ24Game9AILODParm(void)
{
/*
.loc_0x0:
  lfs       f1, -0x48F0(r2)
  lfs       f0, -0x48EC(r2)
  stfs      f1, 0x0(r4)
  stfs      f0, 0x4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801EACF0
 * Size:	000214
 */
void doAI__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  lbz       r0, 0xD8(r3)
  lwz       r3, 0x1F8(r3)
  rlwinm    r4,r0,0,30,31
  bl        0x1CB698
  lwz       r3, 0x1D8(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1F4(r31)
  cmplwi    r3, 0
  beq-      .loc_0xD8
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD8
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x1F4(r31)
  bl        0x260
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD8
  lis       r3, 0x8051
  lfsu      f2, 0x41E4(r3)
  lis       r5, 0x804B
  addi      r4, r1, 0x14
  lfs       f1, 0x4(r3)
  subi      r0, r5, 0x5814
  lfs       f0, 0x8(r3)
  stw       r0, 0x14(r1)
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x1A4(r31)
  stfs      f0, 0x20(r1)
  lwz       r3, 0x1F8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xD8:
  mr        r3, r31
  bl        0x1F8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1FC
  lwz       r3, -0x6D20(r13)
  bl        -0x901BC
  mr.       r30, r3
  beq-      .loc_0x1DC
  lwz       r3, 0x17C(r31)
  bl        0x2843B4
  mr        r4, r30
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f0, 0x1A0(r31)
  lfs       f3, 0x10(r1)
  fsubs     f4, f1, f0
  lfs       f0, 0x1A4(r31)
  lfs       f2, 0x8(r1)
  lfs       f1, 0x19C(r31)
  fsubs     f5, f3, f0
  fmuls     f3, f4, f4
  fsubs     f1, f2, f1
  lfs       f0, -0x4954(r2)
  fmuls     f2, f5, f5
  fmadds    f1, f1, f1, f3
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x168
  ble-      .loc_0x16C
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x16C

.loc_0x168:
  fmr       f1, f0

.loc_0x16C:
  lwz       r3, -0x6C18(r13)
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x1AC
  lfs       f0, 0x344(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1AC
  mr        r3, r31
  li        r4, 0x307B
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        -0x304
  b         .loc_0x1FC

.loc_0x1AC:
  lfs       f0, 0x36C(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1FC
  lwz       r4, 0x200(r31)
  cmplwi    r4, 0
  beq-      .loc_0x1FC
  lbz       r3, 0x18(r4)
  li        r0, 0
  ori       r3, r3, 0x1
  stb       r3, 0x18(r4)
  stw       r0, 0x200(r31)
  b         .loc_0x1FC

.loc_0x1DC:
  lwz       r4, 0x200(r31)
  cmplwi    r4, 0
  beq-      .loc_0x1FC
  lbz       r3, 0x18(r4)
  li        r0, 0
  ori       r3, r3, 0x1
  stb       r3, 0x18(r4)
  stw       r0, 0x200(r31)

.loc_0x1FC:
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
 * Address:	801EAF04
 * Size:	000060
 */
void getCaveOtakaraNum__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6C18(r13)
  lwz       r3, 0x58(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x48
  lwz       r3, -0x6B70(r13)
  addi      r5, r31, 0x1E8
  lwz       r4, 0x48(r4)
  bl        -0x252C
  b         .loc_0x4C

.loc_0x48:
  li        r3, -0x1

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EAF64
 * Size:	000060
 */
void getCaveOtakaraMax__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6C18(r13)
  lwz       r3, 0x58(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x48
  lwz       r3, -0x6B70(r13)
  addi      r5, r31, 0x1E8
  lwz       r4, 0x48(r4)
  bl        -0x24D4
  b         .loc_0x4C

.loc_0x48:
  li        r3, -0x1

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EAFC4
 * Size:	0000B4
 */
void complete__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r4, -0x6C18(r13)
  lwz       r3, 0x58(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x50
  lwz       r3, -0x6B70(r13)
  addi      r5, r30, 0x1E8
  lwz       r4, 0x48(r4)
  bl        -0x25F0
  mr        r31, r3
  b         .loc_0x54

.loc_0x50:
  li        r31, -0x1

.loc_0x54:
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x88
  lwz       r3, -0x6B70(r13)
  addi      r5, r30, 0x1E8
  lwz       r4, 0x48(r4)
  bl        -0x2574
  b         .loc_0x8C

.loc_0x88:
  li        r3, -0x1

.loc_0x8C:
  srawi     r5, r31, 0x1F
  rlwinm    r4,r3,1,31,31
  subc      r0, r31, r3
  adde      r3, r5, r4
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
 * Address:	801EB078
 * Size:	0001F0
 */
void doDirectDraw__Q34Game8ItemCave4ItemFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x78(r1)
  mr        r30, r3
  mr        r3, r31
  stw       r29, 0x74(r1)
  bl        0x23A77C
  addi      r3, r30, 0x138
  addi      r4, r1, 0x3C
  bl        -0x100DE0
  lfs       f1, 0x58(r1)
  li        r3, 0x28
  lfs       f0, -0x48E8(r2)
  li        r4, 0
  fadds     f1, f1, f0
  lfs       f0, 0x48(r1)
  stfs      f0, 0x48(r1)
  stfs      f1, 0x58(r1)
  bl        -0x1055F0
  lfs       f1, -0x4924(r2)
  mr        r3, r31
  addi      r4, r1, 0x3C
  bl        0x23B52C
  lwz       r3, -0x7628(r13)
  li        r6, 0
  li        r0, 0xFF
  li        r5, 0x66
  lfs       f0, -0x496C(r2)
  li        r4, 0x99
  stw       r3, 0x20(r1)
  mr        r3, r31
  stw       r6, 0x24(r1)
  stw       r6, 0x28(r1)
  stw       r6, 0x2C(r1)
  stfs      f0, 0x30(r1)
  stb       r5, 0x34(r1)
  stb       r4, 0x35(r1)
  stb       r0, 0x36(r1)
  stb       r0, 0x37(r1)
  stb       r6, 0x38(r1)
  stb       r5, 0x39(r1)
  stb       r0, 0x3A(r1)
  stb       r0, 0x3B(r1)
  lwz       r4, 0x25C(r31)
  bl        0x23C770
  lfs       f0, -0x496C(r2)
  li        r7, 0xA
  li        r6, 0xC8
  li        r5, 0xFF
  li        r0, 0
  stb       r7, 0x34(r1)
  mr        r4, r30
  addi      r3, r1, 0x8
  stb       r6, 0x35(r1)
  stb       r7, 0x36(r1)
  stb       r5, 0x37(r1)
  stb       r0, 0x38(r1)
  stb       r6, 0x39(r1)
  stb       r0, 0x3A(r1)
  stb       r5, 0x3B(r1)
  stfs      f0, 0x30(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0xC(r1)
  lfs       f0, -0x48E4(r2)
  lfs       f3, 0x8(r1)
  lfs       f1, 0x10(r1)
  fadds     f0, f2, f0
  stfs      f2, 0x18(r1)
  lwz       r3, -0x6C18(r13)
  stfs      f3, 0x14(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x18(r1)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x170
  lwz       r3, -0x6B70(r13)
  addi      r5, r30, 0x1E8
  lwz       r4, 0x48(r4)
  bl        -0x27C4
  mr        r29, r3
  b         .loc_0x174

.loc_0x170:
  li        r29, -0x1

.loc_0x174:
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x1AC
  lwz       r3, -0x6B70(r13)
  addi      r5, r30, 0x1E8
  lwz       r4, 0x48(r4)
  bl        -0x2748
  mr        r9, r3
  b         .loc_0x1B0

.loc_0x1AC:
  li        r9, -0x1

.loc_0x1B0:
  lis       r4, 0x8048
  mr        r3, r31
  addi      r6, r4, 0xFF4
  mr        r8, r29
  addi      r4, r1, 0x20
  addi      r5, r1, 0x14
  addi      r7, r30, 0x1E8
  crclr     6, 0x6
  bl        0x23C894
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	801EB268
 * Size:	00007C
 */
void __ct__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x24
  addi      r0, r31, 0x90
  stw       r0, 0x4(r31)

.loc_0x24:
  mr        r3, r31
  li        r4, 0
  bl        -0x1DE74
  lis       r3, 0x804C
  subi      r0, r2, 0x48E0
  subi      r4, r3, 0x5C48
  mr        r3, r31
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x74
  li        r4, 0x1
  stw       r5, 0x30(r31)
  stw       r0, 0x8(r31)
  bl        -0x1E4F0
  lis       r4, 0x8048
  mr        r3, r31
  addi      r0, r4, 0x1000
  stw       r0, 0x28(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void testSetSlipCode_Platform(Platform *, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801EB2E4
 * Size:	0000E4
 */
void onLoadResources__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0xF98
  subi      r4, r2, 0x48D8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x1E438
  mr        r3, r29
  addi      r4, r31, 0x88
  li        r5, 0
  lis       r6, 0x2
  bl        -0x1E3D0
  mr        r3, r29
  addi      r4, r31, 0x9C
  bl        -0x1E160
  mr        r0, r3
  mr        r3, r29
  mr        r30, r0
  addi      r5, r31, 0xA8
  mr        r4, r30
  bl        -0x1E0A4
  stw       r3, 0x88(r29)
  mr        r3, r29
  mr        r4, r30
  addi      r5, r31, 0xBC
  bl        -0x1E0B8
  stw       r3, 0x8C(r29)
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0x2
  li        r6, 0x1
  bl        0x2310E8
  lwz       r3, 0x88(r29)
  addi      r4, r1, 0x8
  bl        -0xB7C88
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        0x2310C8
  lwz       r3, 0x8C(r29)
  addi      r4, r1, 0x8
  bl        -0xB7CA8
  mr        r3, r29
  mr        r4, r30
  bl        -0x1E158
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
 * Address:	801EB3C8
 * Size:	000074
 */
void setup__Q34Game8ItemCave3MgrFPQ24Game8BaseItem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x14
  bl        -0x1C7548
  mr.       r31, r3
  beq-      .loc_0x54
  mr        r3, r29
  li        r4, 0
  bl        -0x1E2B0
  mr        r4, r3
  mr        r3, r31
  lis       r5, 0x2
  li        r6, 0x2
  bl        0x252DC4
  mr        r31, r3

.loc_0x54:
  stw       r31, 0x174(r30)
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
 * Address:	801EB43C
 * Size:	000038
 */
void generatorNewItemParm__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x1CC
  stw       r0, 0x14(r1)
  bl        -0x1C75A8
  mr.       r0, r3
  beq-      .loc_0x24
  bl        .loc_0x38
  mr        r0, r3

.loc_0x24:
  mr        r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x38:
*/
}

/*
 * --INFO--
 * Address:	801EB474
 * Size:	00010C
 */
void GenCaveParm::GenCaveParm()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  addi      r0, r4, 0x2624
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x804C
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x5C54
  addi      r3, r31, 0x44
  stw       r0, 0x0(r31)
  bl        0x227DCC
  addi      r3, r31, 0x50
  li        r4, 0x1
  bl        -0x1324
  li        r0, 0x2
  li        r4, 0
  mtctr     r0

.loc_0x4C:
  add       r3, r31, r4
  li        r0, 0
  stb       r0, 0x24(r3)
  addi      r4, r4, 0x8
  stb       r0, 0x4(r3)
  stb       r0, 0x25(r3)
  stb       r0, 0x5(r3)
  stb       r0, 0x26(r3)
  stb       r0, 0x6(r3)
  stb       r0, 0x27(r3)
  stb       r0, 0x7(r3)
  stb       r0, 0x28(r3)
  stb       r0, 0x8(r3)
  stb       r0, 0x29(r3)
  stb       r0, 0x9(r3)
  stb       r0, 0x2A(r3)
  stb       r0, 0xA(r3)
  stb       r0, 0x2B(r3)
  stb       r0, 0xB(r3)
  add       r3, r31, r4
  addi      r4, r4, 0x8
  stb       r0, 0x24(r3)
  stb       r0, 0x4(r3)
  stb       r0, 0x25(r3)
  stb       r0, 0x5(r3)
  stb       r0, 0x26(r3)
  stb       r0, 0x6(r3)
  stb       r0, 0x27(r3)
  stb       r0, 0x7(r3)
  stb       r0, 0x28(r3)
  stb       r0, 0x8(r3)
  stb       r0, 0x29(r3)
  stb       r0, 0x9(r3)
  stb       r0, 0x2A(r3)
  stb       r0, 0xA(r3)
  stb       r0, 0x2B(r3)
  stb       r0, 0xB(r3)
  bdnz+     .loc_0x4C
  lis       r4, 0x6E6F
  addi      r3, r31, 0x44
  addi      r4, r4, 0x6E65
  bl        0x227D74
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EB580
 * Size:	0000E0
 */
void generatorWrite__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r3, 0xF98
  stw       r30, 0x18(r1)
  mr.       r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  bne-      .loc_0x40
  addi      r3, r31, 0xD0
  addi      r5, r31, 0xE0
  li        r4, 0x4A9
  crclr     6, 0x6
  bl        -0x1C0F7C

.loc_0x40:
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x228E6C
  mr        r3, r29
  addi      r4, r30, 0x4
  bl        0x229FF8
  mr        r3, r29
  subi      r4, r2, 0x48D0
  crclr     6, 0x6
  bl        0x228BF8
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x228E44
  mr        r3, r29
  addi      r4, r30, 0x24
  bl        0x229FD0
  mr        r3, r29
  subi      r4, r2, 0x48D0
  crclr     6, 0x6
  bl        0x228BD0
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x228E1C
  mr        r4, r29
  addi      r3, r30, 0x44
  bl        0x227E3C
  mr        r3, r29
  addi      r4, r31, 0xEC
  crclr     6, 0x6
  bl        0x228BA8
  mr        r4, r29
  addi      r3, r30, 0x50
  bl        0x2280C4
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
 * Address:	801EB660
 * Size:	000218
 */
void generatorRead__Q34Game8ItemCave3MgrFR6StreamPQ24Game11GenItemParmUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr.       r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  bne-      .loc_0x44
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1068
  li        r4, 0x4BC
  addi      r5, r5, 0x1078
  crclr     6, 0x6
  bl        -0x1C1060

.loc_0x44:
  mr        r3, r29
  li        r4, 0
  li        r5, 0
  bl        0x229A24
  li        r0, 0x2
  li        r6, 0
  mtctr     r0

.loc_0x60:
  add       r4, r3, r6
  addi      r5, r6, 0x4
  lbz       r0, 0x0(r4)
  add       r5, r30, r5
  addi      r6, r6, 0x8
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r5)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r5)
  lbz       r0, 0x3(r4)
  stb       r0, 0x3(r5)
  lbz       r0, 0x4(r4)
  stb       r0, 0x4(r5)
  lbz       r0, 0x5(r4)
  stb       r0, 0x5(r5)
  lbz       r0, 0x6(r4)
  stb       r0, 0x6(r5)
  lbz       r0, 0x7(r4)
  add       r4, r3, r6
  stb       r0, 0x7(r5)
  addi      r5, r6, 0x4
  add       r5, r30, r5
  addi      r6, r6, 0x8
  lbz       r0, 0x0(r4)
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r5)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r5)
  lbz       r0, 0x3(r4)
  stb       r0, 0x3(r5)
  lbz       r0, 0x4(r4)
  stb       r0, 0x4(r5)
  lbz       r0, 0x5(r4)
  stb       r0, 0x5(r5)
  lbz       r0, 0x6(r4)
  stb       r0, 0x6(r5)
  lbz       r0, 0x7(r4)
  stb       r0, 0x7(r5)
  bdnz+     .loc_0x60
  mr        r3, r29
  li        r4, 0
  li        r5, 0
  bl        0x229964
  li        r0, 0x2
  li        r6, 0
  mtctr     r0

.loc_0x120:
  add       r4, r3, r6
  addi      r5, r6, 0x24
  lbz       r0, 0x0(r4)
  add       r5, r30, r5
  addi      r6, r6, 0x8
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r5)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r5)
  lbz       r0, 0x3(r4)
  stb       r0, 0x3(r5)
  lbz       r0, 0x4(r4)
  stb       r0, 0x4(r5)
  lbz       r0, 0x5(r4)
  stb       r0, 0x5(r5)
  lbz       r0, 0x6(r4)
  stb       r0, 0x6(r5)
  lbz       r0, 0x7(r4)
  add       r4, r3, r6
  stb       r0, 0x7(r5)
  addi      r5, r6, 0x24
  add       r5, r30, r5
  addi      r6, r6, 0x8
  lbz       r0, 0x0(r4)
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r5)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r5)
  lbz       r0, 0x3(r4)
  stb       r0, 0x3(r5)
  lbz       r0, 0x4(r4)
  stb       r0, 0x4(r5)
  lbz       r0, 0x5(r4)
  stb       r0, 0x5(r5)
  lbz       r0, 0x6(r4)
  stb       r0, 0x6(r5)
  lbz       r0, 0x7(r4)
  stb       r0, 0x7(r5)
  bdnz+     .loc_0x120
  lis       r3, 0x3030
  addi      r0, r3, 0x3031
  cmplw     r31, r0
  blt-      .loc_0x1E0
  mr        r4, r29
  addi      r3, r30, 0x44
  bl        0x227CB4

.loc_0x1E0:
  lis       r3, 0x3030
  addi      r0, r3, 0x3032
  cmplw     r31, r0
  blt-      .loc_0x1FC
  mr        r4, r29
  addi      r3, r30, 0x50
  bl        0x227F9C

.loc_0x1FC:
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
 * Address:	801EB878
 * Size:	0000FC
 */
void generatorBirth__Q34Game8ItemCave3MgrFR10Vector3<float>R10Vector3<float>PQ24Game11GenItemParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr.       r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r4
  bne-      .loc_0x4C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1068
  li        r4, 0x4D4
  addi      r5, r5, 0x1078
  crclr     6, 0x6
  bl        -0x1C1280

.loc_0x4C:
  mr        r3, r31
  bl        -0x1E13C
  mr        r0, r3
  addi      r3, r30, 0x4
  mr        r31, r0
  bl        -0x120FC8
  addi      r3, r3, 0x1
  bl        -0x1C7934
  stw       r3, 0x1E0(r31)
  addi      r3, r30, 0x24
  bl        -0x120FDC
  addi      r3, r3, 0x1
  bl        -0x1C7948
  stw       r3, 0x1E4(r31)
  addi      r4, r30, 0x4
  lwz       r3, 0x1E0(r31)
  bl        -0x1210AC
  lwz       r3, 0x1E4(r31)
  addi      r4, r30, 0x24
  bl        -0x1210B8
  lwz       r4, 0x4C(r30)
  addi      r3, r31, 0x1E8
  bl        0x2279BC
  mr        r3, r31
  li        r4, 0
  bl        -0xB0960
  lfs       f0, 0x4(r29)
  mr        r3, r31
  mr        r4, r28
  li        r5, 0
  stfs      f0, 0x1FC(r31)
  bl        -0xB0798
  addi      r3, r31, 0x204
  addi      r4, r30, 0x50
  bl        .loc_0xFC
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xFC:
*/
}

/*
 * --INFO--
 * Address:	801EB974
 * Size:	0002E4
 */
void __as__Q34Game8ItemCave7FogParmFRCQ34Game8ItemCave7FogParm(void)
{
/*
.loc_0x0:
  lwz       r0, 0x4(r4)
  lwz       r5, 0x8(r4)
  stw       r0, 0x4(r3)
  lwz       r0, 0x10(r4)
  stw       r5, 0x8(r3)
  lwz       r5, 0x14(r4)
  stw       r0, 0x10(r3)
  lwz       r0, 0x18(r4)
  stw       r5, 0x14(r3)
  lwz       r5, 0x1C(r4)
  stw       r0, 0x18(r3)
  lwz       r0, 0x20(r4)
  stw       r5, 0x1C(r3)
  lfs       f1, 0x24(r4)
  stw       r0, 0x20(r3)
  lfs       f0, 0x28(r4)
  stfs      f1, 0x24(r3)
  lfs       f1, 0x2C(r4)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x30(r4)
  stfs      f1, 0x2C(r3)
  lwz       r0, 0x38(r4)
  stfs      f0, 0x30(r3)
  lwz       r5, 0x3C(r4)
  stw       r0, 0x38(r3)
  lwz       r0, 0x40(r4)
  stw       r5, 0x3C(r3)
  lwz       r5, 0x44(r4)
  stw       r0, 0x40(r3)
  lwz       r0, 0x48(r4)
  stw       r5, 0x44(r3)
  lfs       f1, 0x4C(r4)
  stw       r0, 0x48(r3)
  lfs       f0, 0x50(r4)
  stfs      f1, 0x4C(r3)
  lfs       f1, 0x54(r4)
  stfs      f0, 0x50(r3)
  lfs       f0, 0x58(r4)
  stfs      f1, 0x54(r3)
  lwz       r0, 0x60(r4)
  stfs      f0, 0x58(r3)
  lwz       r5, 0x64(r4)
  stw       r0, 0x60(r3)
  lwz       r0, 0x68(r4)
  stw       r5, 0x64(r3)
  lwz       r5, 0x6C(r4)
  stw       r0, 0x68(r3)
  lwz       r0, 0x70(r4)
  stw       r5, 0x6C(r3)
  lfs       f1, 0x74(r4)
  stw       r0, 0x70(r3)
  lfs       f0, 0x78(r4)
  stfs      f1, 0x74(r3)
  lfs       f1, 0x7C(r4)
  stfs      f0, 0x78(r3)
  lfs       f0, 0x80(r4)
  stfs      f1, 0x7C(r3)
  lwz       r0, 0x88(r4)
  stfs      f0, 0x80(r3)
  lwz       r5, 0x8C(r4)
  stw       r0, 0x88(r3)
  lwz       r0, 0x90(r4)
  stw       r5, 0x8C(r3)
  lwz       r5, 0x94(r4)
  stw       r0, 0x90(r3)
  lwz       r0, 0x98(r4)
  stw       r5, 0x94(r3)
  lfs       f1, 0x9C(r4)
  stw       r0, 0x98(r3)
  lfs       f0, 0xA0(r4)
  stfs      f1, 0x9C(r3)
  lfs       f1, 0xA4(r4)
  stfs      f0, 0xA0(r3)
  lfs       f0, 0xA8(r4)
  stfs      f1, 0xA4(r3)
  lwz       r0, 0xB0(r4)
  stfs      f0, 0xA8(r3)
  lwz       r5, 0xB4(r4)
  stw       r0, 0xB0(r3)
  lwz       r0, 0xB8(r4)
  stw       r5, 0xB4(r3)
  lwz       r5, 0xBC(r4)
  stw       r0, 0xB8(r3)
  lwz       r0, 0xC0(r4)
  stw       r5, 0xBC(r3)
  lbz       r5, 0xC4(r4)
  stw       r0, 0xC0(r3)
  lbz       r0, 0xC5(r4)
  stb       r5, 0xC4(r3)
  lbz       r5, 0xC6(r4)
  stb       r0, 0xC5(r3)
  lbz       r0, 0xC7(r4)
  stb       r5, 0xC6(r3)
  lwz       r5, 0xCC(r4)
  stb       r0, 0xC7(r3)
  lwz       r0, 0xD0(r4)
  stw       r5, 0xCC(r3)
  lwz       r5, 0xD4(r4)
  stw       r0, 0xD0(r3)
  lwz       r0, 0xD8(r4)
  stw       r5, 0xD4(r3)
  stw       r0, 0xD8(r3)
  lwz       r0, 0xDC(r4)
  lbz       r5, 0xE0(r4)
  stw       r0, 0xDC(r3)
  lbz       r0, 0xE1(r4)
  stb       r5, 0xE0(r3)
  lbz       r5, 0xE2(r4)
  stb       r0, 0xE1(r3)
  lbz       r0, 0xE3(r4)
  stb       r5, 0xE2(r3)
  lwz       r5, 0xE8(r4)
  stb       r0, 0xE3(r3)
  lwz       r0, 0xEC(r4)
  stw       r5, 0xE8(r3)
  lwz       r5, 0xF0(r4)
  stw       r0, 0xEC(r3)
  lwz       r0, 0xF4(r4)
  stw       r5, 0xF0(r3)
  lwz       r5, 0xF8(r4)
  stw       r0, 0xF4(r3)
  lbz       r0, 0xFC(r4)
  stw       r5, 0xF8(r3)
  lbz       r5, 0xFD(r4)
  stb       r0, 0xFC(r3)
  lbz       r0, 0xFE(r4)
  stb       r5, 0xFD(r3)
  lbz       r5, 0xFF(r4)
  stb       r0, 0xFE(r3)
  lwz       r0, 0x104(r4)
  stb       r5, 0xFF(r3)
  lwz       r5, 0x108(r4)
  stw       r0, 0x104(r3)
  lwz       r0, 0x10C(r4)
  stw       r5, 0x108(r3)
  lwz       r5, 0x110(r4)
  stw       r0, 0x10C(r3)
  lwz       r0, 0x114(r4)
  stw       r5, 0x110(r3)
  lfs       f1, 0x118(r4)
  stw       r0, 0x114(r3)
  lfs       f0, 0x11C(r4)
  stfs      f1, 0x118(r3)
  lfs       f1, 0x120(r4)
  stfs      f0, 0x11C(r3)
  lfs       f0, 0x124(r4)
  stfs      f1, 0x120(r3)
  lwz       r0, 0x12C(r4)
  stfs      f0, 0x124(r3)
  lwz       r5, 0x130(r4)
  stw       r0, 0x12C(r3)
  lwz       r0, 0x134(r4)
  stw       r5, 0x130(r3)
  lwz       r5, 0x138(r4)
  stw       r0, 0x134(r3)
  lwz       r0, 0x13C(r4)
  stw       r5, 0x138(r3)
  lfs       f1, 0x140(r4)
  stw       r0, 0x13C(r3)
  lfs       f0, 0x144(r4)
  stfs      f1, 0x140(r3)
  lfs       f1, 0x148(r4)
  stfs      f0, 0x144(r3)
  lfs       f0, 0x14C(r4)
  stfs      f1, 0x148(r3)
  lwz       r0, 0x154(r4)
  stfs      f0, 0x14C(r3)
  lwz       r5, 0x158(r4)
  stw       r0, 0x154(r3)
  lwz       r0, 0x15C(r4)
  stw       r5, 0x158(r3)
  lwz       r5, 0x160(r4)
  stw       r0, 0x15C(r3)
  lwz       r0, 0x164(r4)
  stw       r5, 0x160(r3)
  lfs       f1, 0x168(r4)
  stw       r0, 0x164(r3)
  lfs       f0, 0x16C(r4)
  stfs      f1, 0x168(r3)
  lfs       f1, 0x170(r4)
  stfs      f0, 0x16C(r3)
  lfs       f0, 0x174(r4)
  stfs      f1, 0x170(r3)
  stfs      f0, 0x174(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBC58
 * Size:	000134
 */
void __dt__Q34Game8ItemCave3MgrFv(void)
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
  beq-      .loc_0x118
  lis       r3, 0x804C
  subi      r3, r3, 0x5C48
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0x108
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r3, r3, 0x7180
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addic.    r3, r30, 0x6C
  addi      r4, r4, 0x724C
  stw       r4, 0x4C(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r0, r4, 0x723C
  stw       r0, 0x6C(r30)
  li        r4, 0
  bl        0x2258B0

.loc_0x84:
  addic.    r0, r30, 0x4C
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r3, r3, 0x72CC
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r0, r3, 0x7348
  stw       r0, 0x4C(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addi      r3, r30, 0x4C
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4C(r30)
  bl        0x225860

.loc_0xD4:
  addic.    r0, r30, 0x30
  beq-      .loc_0x108
  lis       r3, 0x804B
  addic.    r0, r30, 0x30
  addi      r0, r3, 0x7348
  stw       r0, 0x30(r30)
  beq-      .loc_0x108
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x30(r30)
  bl        0x22582C

.loc_0x108:
  extsh.    r0, r31
  ble-      .loc_0x118
  mr        r3, r30
  bl        -0x1C7CB8

.loc_0x118:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBD8C
 * Size:	000038
 */
void doNew__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x388
  stw       r0, 0x14(r1)
  bl        -0x1C7EF8
  mr.       r0, r3
  beq-      .loc_0x24
  bl        -0x1D00
  mr        r0, r3

.loc_0x24:
  mr        r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBDC4
 * Size:	00000C
 */
void generatorGetID__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x6361
  addi      r3, r3, 0x7665
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBDD0
 * Size:	00000C
 */
void generatorLocalVersion__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x3030
  addi      r3, r3, 0x3032
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBDDC
 * Size:	000008
 */
void getCreatureName__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  subi      r3, r2, 0x48E0
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBDE4
 * Size:	000008
 */
void getFaceDir__Q34Game8ItemCave4ItemFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1FC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBDEC
 * Size:	000034
 */
void doAI__Q24Game74FSMItem<Game::ItemCave::Item, Game::ItemCave::FSM, Game::ItemCave::State>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x1D8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE20
 * Size:	000004
 */
void onDamage__Q24Game32ItemState<Game::ItemCave::Item>FPQ34Game8ItemCave4Itemf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE24
 * Size:	000004
 */
void onKeyEvent__Q24Game32ItemState<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE28
 * Size:	000004
 */
void onBounce__Q24Game32ItemState<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE2C
 * Size:	000004
 */
void onPlatCollision__Q24Game32ItemState<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemRQ24Game9PlatEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE30
 * Size:	000004
 */
void onCollision__Q24Game32ItemState<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemRQ24Game9CollEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE34
 * Size:	000004
 */
void init__Q24Game31FSMState<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE38
 * Size:	000004
 */
void exec__Q24Game31FSMState<Game::ItemCave::Item>FPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE3C
 * Size:	000004
 */
void cleanup__Q24Game31FSMState<Game::ItemCave::Item>FPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE40
 * Size:	000004
 */
void resume__Q24Game31FSMState<Game::ItemCave::Item>FPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE44
 * Size:	000004
 */
void restart__Q24Game31FSMState<Game::ItemCave::Item>FPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE48
 * Size:	000030
 */
void transit__Q24Game31FSMState<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE78
 * Size:	000004
 */
void init__Q24Game35StateMachine<Game::ItemCave::Item>FPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBE7C
 * Size:	000064
 */
void create__Q24Game35StateMachine<Game::ItemCave::Item>Fi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0xC(r3)
  stw       r0, 0x8(r3)
  lwz       r0, 0xC(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x1C7EF8
  stw       r3, 0x4(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1C7F08
  stw       r3, 0x10(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1C7F18
  stw       r3, 0x14(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBEE0
 * Size:	000008
 */
void Parm<unsigned char>::size()
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBEE8
 * Size:	00009C
 */
void transit__Q24Game35StateMachine<Game::ItemCave::Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r5,2,0,29
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r6
  lwz       r30, 0x1DC(r4)
  lwz       r3, 0x14(r3)
  cmplwi    r30, 0
  lwzx      r31, r3, r0
  beq-      .loc_0x50
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r30)
  stw       r0, 0x18(r27)

.loc_0x50:
  lwz       r0, 0xC(r27)
  cmpw      r31, r0
  blt-      .loc_0x60

.loc_0x5C:
  b         .loc_0x5C

.loc_0x60:
  lwz       r3, 0x4(r27)
  rlwinm    r0,r31,2,0,29
  mr        r4, r28
  mr        r5, r29
  lwzx      r3, r3, r0
  stw       r3, 0x1DC(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801EBF84
 * Size:	000084
 */
void registerState__Q24Game35StateMachine<Game::ItemCave::Item>FPQ24Game31FSMState<Game::ItemCave::Item>(void)
{
/*
.loc_0x0:
  lwz       r6, 0x8(r3)
  lwz       r0, 0xC(r3)
  cmpw      r6, r0
  bgelr-    
  lwz       r5, 0x4(r3)
  rlwinm    r0,r6,2,0,29
  stwx      r4, r5, r0
  lwz       r5, 0x4(r4)
  cmpwi     r5, 0
  blt-      .loc_0x34
  lwz       r0, 0xC(r3)
  cmpw      r5, r0
  blt-      .loc_0x3C

.loc_0x34:
  li        r0, 0
  b         .loc_0x40

.loc_0x3C:
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  beqlr-    
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r3)
  lwz       r6, 0x4(r4)
  lwz       r5, 0x10(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r6, r5, r0
  lwz       r0, 0x4(r4)
  lwz       r5, 0x8(r3)
  lwz       r4, 0x14(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r5, r4, r0
  lwz       r4, 0x8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC008
 * Size:	000038
 */
void exec__Q24Game35StateMachine<Game::ItemCave::Item>FPQ34Game8ItemCave4Item(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r4)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC040
 * Size:	000044
 */
void onKeyEvent__Q24Game74FSMItem<Game::ItemCave::Item, Game::ItemCave::FSM, Game::ItemCave::State>FRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC084
 * Size:	000044
 */
void platCallback__Q24Game74FSMItem<Game::ItemCave::Item, Game::ItemCave::FSM, Game::ItemCave::State>FRQ24Game9PlatEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC0C8
 * Size:	000044
 */
void collisionCallback__Q24Game74FSMItem<Game::ItemCave::Item, Game::ItemCave::FSM, Game::ItemCave::State>FRQ24Game9CollEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC10C
 * Size:	000044
 */
void bounceCallback__Q24Game74FSMItem<Game::ItemCave::Item, Game::ItemCave::FSM, Game::ItemCave::State>FPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC150
 * Size:	000028
 */
void __sinit_itemCave_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6B68(r13)
  stfsu     f0, -0x5C60(r3)
  stfs      f0, -0x6B64(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801EC178
 * Size:	000008
 */
void @376@onKeyEvent__Q24Game74FSMItem<Game::ItemCave::Item, Game::ItemCave::FSM, Game::ItemCave::State>FRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x178
  b         -0x13C
*/
}

/*
 * --INFO--
 * Address:	801EC180
 * Size:	000008
 */
void @48@__dt__Q34Game8ItemCave3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x52C
*/
}