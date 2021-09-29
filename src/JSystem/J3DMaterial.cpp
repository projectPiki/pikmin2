

/*
 * --INFO--
 * Address:	800614E0
 * Size:	000200
 */
void J3DMaterial::createColorBlock(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r3, 0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  beq-      .loc_0x48
  bge-      .loc_0x38
  lis       r4, 0x8000
  addi      r0, r4, 0x1
  cmpw      r3, r0
  bge-      .loc_0x1E4
  b         .loc_0x144

.loc_0x38:
  lis       r0, 0x4000
  cmpw      r3, r0
  beq-      .loc_0xB8
  b         .loc_0x1E4

.loc_0x48:
  li        r3, 0x20
  bl        -0x3D688
  mr.       r31, r3
  beq-      .loc_0xB0
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x1788
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2BE4
  lis       r4, 0x8006
  addi      r3, r31, 0x4
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x17F0
  li        r6, 0x4
  li        r7, 0x2
  bl        0x602D4
  lis       r4, 0x8006
  addi      r3, r31, 0xE
  addi      r4, r4, 0x173C
  li        r5, 0
  li        r6, 0x2
  li        r7, 0x4
  bl        0x602B8
  mr        r3, r31
  bl        0x15C34

.loc_0xB0:
  mr        r5, r31
  b         .loc_0x1E4

.loc_0xB8:
  li        r3, 0x4C
  bl        -0x3D6F8
  mr.       r31, r3
  beq-      .loc_0x13C
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x1788
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2838
  lis       r4, 0x8006
  addi      r3, r31, 0x4
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x17F0
  li        r6, 0x4
  li        r7, 0x2
  bl        0x60264
  lis       r4, 0x8006
  addi      r3, r31, 0xC
  addi      r4, r4, 0x17F0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x2
  bl        0x60248
  lis       r4, 0x8006
  addi      r3, r31, 0x16
  addi      r4, r4, 0x173C
  li        r5, 0
  li        r6, 0x2
  li        r7, 0x4
  bl        0x6022C
  mr        r3, r31
  bl        0x15C6C

.loc_0x13C:
  mr        r5, r31
  b         .loc_0x1E4

.loc_0x144:
  li        r3, 0x28
  bl        -0x3D784
  mr.       r31, r3
  beq-      .loc_0x1E0
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x1788
  mr        r30, r31
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2BE4
  lis       r3, 0x8006
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r4, r3, 0x17F0
  addi      r3, r31, 0x4
  li        r6, 0x4
  li        r7, 0x2
  bl        0x601D4
  lis       r4, 0x8006
  addi      r3, r31, 0xE
  addi      r4, r4, 0x173C
  li        r5, 0
  li        r6, 0x2
  li        r7, 0x4
  bl        0x601B8
  mr        r3, r31
  bl        0x15B34
  lis       r3, 0x804A
  lis       r4, 0x8006
  addi      r0, r3, 0x28C0
  li        r5, 0
  stw       r0, 0x0(r30)
  addi      r3, r30, 0x20
  addi      r4, r4, 0x17F0
  li        r6, 0x4
  li        r7, 0x2
  bl        0x60188
  mr        r3, r30
  bl        0x15B4C

.loc_0x1E0:
  mr        r5, r31

.loc_0x1E4:
  lwz       r0, 0x14(r1)
  mr        r3, r5
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800616E0
 * Size:	00005C
 */
void J3DColorBlockLightOff::~J3DColorBlockLightOff()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  addi      r0, r3, 0x2BE4
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  addi      r0, r3, 0x1788
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        -0x3D66C

.loc_0x44:
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
 * Address:	8006173C
 * Size:	0000B4
 */
void J3DColorChan::J3DColorChan()
{
/*
.loc_0x0:
  subi      r8, r2, 0x7970
  lis       r4, 0x1
  lbz       r10, 0x5(r8)
  subi      r4, r4, 0x1
  lbz       r0, 0x2(r8)
  lbz       r5, -0x7970(r2)
  sub       r7, r10, r4
  sub       r6, r4, r10
  lbz       r4, 0x1(r8)
  nor       r6, r7, r6
  rlwinm    r7,r5,1,15,30
  srawi     r5, r6, 0x1F
  lbz       r9, 0x4(r8)
  andc      r5, r10, r5
  or        r4, r7, r4
  rlwinm    r6,r4,0,26,24
  rlwinm    r11,r0,7,18,18
  rlwinm    r5,r5,6,18,25
  cntlzw    r4, r9
  or        r12, r6, r5
  lbz       r6, 0x3(r8)
  rlwinm    r5,r4,27,31,31
  neg       r4, r9
  rlwimi    r12,r0,2,29,29
  rlwinm    r10,r0,7,17,17
  rlwimi    r12,r0,2,28,28
  neg       r5, r5
  andc      r5, r6, r5
  subfic    r6, r9, 0x2
  rlwimi    r12,r0,2,27,27
  or        r4, r4, r9
  rlwimi    r12,r0,2,26,26
  rlwinm    r7,r5,7,0,24
  rlwimi    r12,r0,7,20,20
  subi      r5, r9, 0x2
  rlwimi    r12,r0,7,19,19
  rlwimi    r11,r12,0,19,31
  or        r0, r6, r5
  rlwimi    r10,r11,0,18,31
  rlwinm    r5,r10,0,25,22
  or        r5, r5, r7
  rlwimi    r5,r0,10,22,22
  rlwimi    r5,r4,11,21,21
  sth       r5, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800617F0
 * Size:	000004
 */
void J3DGXColor::J3DGXColor()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800617F4
 * Size:	000048
 */
void J3DColorBlock::~J3DColorBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x1788
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3D76C

.loc_0x30:
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
 * Address:	8006183C
 * Size:	000164
 */
void J3DMaterial::createTexGenBlock(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lis       r0, 0x800
  cmpw      r3, r0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  beq-      .loc_0x30
  bge-      .loc_0xC0
  cmpwi     r3, 0
  beq-      .loc_0xC0
  b         .loc_0xC0

.loc_0x30:
  li        r3, 0x6C
  bl        -0x3D9CC
  mr.       r31, r3
  beq-      .loc_0xB8
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x171C
  mr        r30, r31
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x27CC
  lis       r3, 0x8006
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r4, r3, 0x19FC
  addi      r3, r31, 0x8
  li        r6, 0x6
  li        r7, 0x8
  bl        0x5FF8C
  mr        r3, r31
  bl        0x15A68
  lis       r3, 0x804A
  lis       r4, 0x8048
  addi      r0, r3, 0x2760
  stw       r0, 0x0(r30)
  mr        r3, r30
  lbzu      r0, -0x766C(r4)
  stb       r0, 0x5C(r30)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x60(r30)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x64(r30)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x68(r30)
  bl        0x15A60

.loc_0xB8:
  mr        r3, r31
  b         .loc_0x14C

.loc_0xC0:
  li        r3, 0x6C
  bl        -0x3DA5C
  mr.       r31, r3
  beq-      .loc_0x148
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x171C
  mr        r30, r31
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x27CC
  lis       r3, 0x8006
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r4, r3, 0x19FC
  addi      r3, r30, 0x8
  li        r6, 0x6
  li        r7, 0x8
  bl        0x5FEFC
  mr        r3, r30
  bl        0x159D8
  lis       r3, 0x804A
  lis       r4, 0x8048
  addi      r0, r3, 0x26F4
  stw       r0, 0x0(r31)
  mr        r3, r31
  lbzu      r0, -0x766C(r4)
  stb       r0, 0x5C(r31)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x60(r31)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x64(r31)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x68(r31)
  bl        0x159F0

.loc_0x148:
  mr        r3, r31

.loc_0x14C:
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
 * Address:	800619A0
 * Size:	00005C
 */
void J3DTexGenBlockPatched::~J3DTexGenBlockPatched()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  addi      r0, r3, 0x27CC
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  addi      r0, r3, 0x171C
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        -0x3D92C

.loc_0x44:
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
 * Address:	800619FC
 * Size:	000028
 */
void J3DTexCoord::J3DTexCoord()
{
/*
.loc_0x0:
  lis       r4, 0x8048
  lbzu      r0, -0x7758(r4)
  stb       r0, 0x0(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r3)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r3)
  lbz       r0, 0x2(r3)
  sth       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80061A24
 * Size:	000048
 */
void J3DTexGenBlock::~J3DTexGenBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x171C
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3D99C

.loc_0x30:
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
 * Address:	80061A6C
 * Size:	000374
 */
void J3DMaterial::createTevBlock(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r3, 0x1
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  bgt-      .loc_0xA8
  li        r3, 0x1C
  bl        -0x3DBE8
  mr.       r31, r3
  beq-      .loc_0xA0
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x2B08
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x253C
  lis       r4, 0x8006
  addi      r3, r31, 0xA
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x2114
  li        r6, 0x4
  li        r7, 0x1
  bl        0x5FD74
  lis       r4, 0x8006
  addi      r3, r31, 0xE
  addi      r4, r4, 0x1ED4
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x1
  bl        0x5FD58
  lis       r4, 0x8006
  addi      r3, r31, 0x18
  addi      r4, r4, 0x1DF0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x1
  bl        0x5FD3C
  mr        r3, r31
  bl        0x15A30

.loc_0xA0:
  mr        r0, r31
  b         .loc_0x35C

.loc_0xA8:
  cmpwi     r3, 0x2
  bne-      .loc_0x190
  li        r3, 0x6C
  bl        -0x3DC7C
  mr.       r31, r3
  beq-      .loc_0x188
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x2B08
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2460
  lis       r4, 0x8006
  addi      r3, r31, 0xC
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x2114
  li        r6, 0x4
  li        r7, 0x2
  bl        0x5FCE0
  lis       r4, 0x8006
  addi      r3, r31, 0x14
  addi      r4, r4, 0x1DEC
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x4
  bl        0x5FCC4
  lis       r4, 0x8006
  addi      r3, r31, 0x35
  addi      r4, r4, 0x1ED4
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x2
  bl        0x5FCA8
  lis       r4, 0x8006
  addi      r3, r31, 0x45
  addi      r4, r4, 0x17F0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        0x5FC8C
  lis       r4, 0x8006
  addi      r3, r31, 0x59
  addi      r4, r4, 0x1DE0
  li        r5, 0
  li        r6, 0x1
  li        r7, 0x4
  bl        0x5FC70
  lis       r4, 0x8006
  addi      r3, r31, 0x60
  addi      r4, r4, 0x1DF0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x2
  bl        0x5FC54
  mr        r3, r31
  bl        0x15970

.loc_0x188:
  mr        r0, r31
  b         .loc_0x35C

.loc_0x190:
  cmpwi     r3, 0x4
  bgt-      .loc_0x278
  li        r3, 0x94
  bl        -0x3DD64
  mr.       r31, r3
  beq-      .loc_0x270
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x2B08
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2384
  lis       r4, 0x8006
  addi      r3, r31, 0x10
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x2114
  li        r6, 0x4
  li        r7, 0x4
  bl        0x5FBF8
  lis       r4, 0x8006
  addi      r3, r31, 0x21
  addi      r4, r4, 0x1ED4
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x4
  bl        0x5FBDC
  lis       r4, 0x8006
  addi      r3, r31, 0x42
  addi      r4, r4, 0x1DEC
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x4
  bl        0x5FBC0
  lis       r4, 0x8006
  addi      r3, r31, 0x62
  addi      r4, r4, 0x17F0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        0x5FBA4
  lis       r4, 0x8006
  addi      r3, r31, 0x7A
  addi      r4, r4, 0x1DE0
  li        r5, 0
  li        r6, 0x1
  li        r7, 0x4
  bl        0x5FB88
  lis       r4, 0x8006
  addi      r3, r31, 0x80
  addi      r4, r4, 0x1DF0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        0x5FB6C
  mr        r3, r31
  bl        0x15998

.loc_0x270:
  mr        r0, r31
  b         .loc_0x35C

.loc_0x278:
  cmpwi     r3, 0x10
  bgt-      .loc_0x35C
  li        r3, 0x174
  bl        -0x3DE4C
  mr.       r31, r3
  beq-      .loc_0x358
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x2B08
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x22A8
  lis       r4, 0x8006
  addi      r3, r31, 0x18
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x2114
  li        r6, 0x4
  li        r7, 0x10
  bl        0x5FB10
  lis       r4, 0x8006
  addi      r3, r31, 0x59
  addi      r4, r4, 0x1ED4
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x10
  bl        0x5FAF4
  lis       r4, 0x8006
  addi      r3, r31, 0xDA
  addi      r4, r4, 0x1DEC
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x4
  bl        0x5FAD8
  lis       r4, 0x8006
  addi      r3, r31, 0xFA
  addi      r4, r4, 0x17F0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x4
  bl        0x5FABC
  lis       r4, 0x8006
  addi      r3, r31, 0x12A
  addi      r4, r4, 0x1DE0
  li        r5, 0
  li        r6, 0x1
  li        r7, 0x4
  bl        0x5FAA0
  lis       r4, 0x8006
  addi      r3, r31, 0x130
  addi      r4, r4, 0x1DF0
  li        r5, 0
  li        r6, 0x4
  li        r7, 0x10
  bl        0x5FA84
  mr        r3, r31
  bl        0x159F0

.loc_0x358:
  mr        r0, r31

.loc_0x35C:
  mr        r3, r0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80061DE0
 * Size:	00000C
 */
void J3DTevSwapModeTable::J3DTevSwapModeTable()
{
/*
.loc_0x0:
  lbz       r0, -0x7968(r2)
  stb       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80061DEC
 * Size:	000004
 */
void J3DGXColorS10::J3DGXColorS10()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80061DF0
 * Size:	0000E4
 */
void J3DIndTevStage::J3DIndTevStage()
{
/*
.loc_0x0:
  li        r0, 0
  lis       r4, 0x8048
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbzu      r0, -0x76A4(r4)
  rlwinm    r5,r5,0,0,29
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x1(r4)
  rlwinm    r5,r5,0,30,27
  rlwinm    r0,r0,2,0,29
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x2(r4)
  rlwinm    r5,r5,0,28,24
  rlwinm    r0,r0,4,0,27
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x3(r4)
  rlwinm    r5,r5,0,23,18
  rlwinm    r0,r0,9,0,22
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x4(r4)
  rlwinm    r5,r5,0,19,15
  rlwinm    r0,r0,13,0,18
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x5(r4)
  rlwinm    r5,r5,0,16,12
  rlwinm    r0,r0,16,0,15
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x6(r4)
  rlwinm    r5,r5,0,12,10
  rlwinm    r0,r0,20,0,11
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lwz       r5, 0x0(r3)
  lbz       r0, 0x7(r4)
  rlwinm    r5,r5,0,13,11
  rlwinm    r0,r0,19,0,12
  or        r0, r5, r0
  stw       r0, 0x0(r3)
  lbz       r0, 0x8(r4)
  lwz       r5, 0x0(r3)
  rlwinm    r0,r0,7,0,24
  rlwinm    r4,r5,0,25,22
  or        r0, r4, r0
  stw       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80061ED4
 * Size:	000068
 */
void J3DTevStage::J3DTevStage()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x14(r1)
  subi      r4, r4, 0x76B8
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0x68
  subi      r3, r2, 0x797C
  lbz       r4, 0x7(r31)
  lbz       r0, 0x1(r3)
  mr        r3, r31
  rlwinm    r4,r4,0,30,27
  rlwinm    r0,r0,2,0,29
  or        r0, r4, r0
  stb       r0, 0x7(r31)
  lbz       r4, 0x7(r31)
  lbz       r0, -0x797C(r2)
  rlwinm    r4,r4,0,0,29
  or        r0, r4, r0
  stb       r0, 0x7(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x68:
*/
}

/*
 * --INFO--
 * Address:	80061F3C
 * Size:	0001D8
 */
void J3DTevStage::setTevStageInfo(const J3DTevStageInfo &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  lbz       r6, 0x5(r4)
  stw       r31, 0xC(r1)
  rlwinm    r0,r6,2,22,29
  cmplwi    r6, 0x1
  lbz       r5, 0x1(r3)
  lbz       r9, 0x9(r4)
  rlwinm    r5,r5,0,30,28
  lbz       r8, 0x8(r4)
  or        r0, r5, r0
  lbz       r7, 0x6(r4)
  stb       r0, 0x1(r3)
  lbz       r0, 0x7(r4)
  bgt-      .loc_0x60
  lbz       r5, 0x1(r3)
  rlwinm    r0,r0,4,20,27
  rlwinm    r5,r5,0,28,25
  or        r0, r5, r0
  stb       r0, 0x1(r3)
  lbz       r0, 0x1(r3)
  rlwinm    r0,r0,0,0,29
  or        r0, r0, r7
  stb       r0, 0x1(r3)
  b         .loc_0x7C

.loc_0x60:
  lbz       r0, 0x1(r3)
  rlwimi    r0,r6,3,26,27
  stb       r0, 0x1(r3)
  lbz       r0, 0x1(r3)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x3
  stb       r0, 0x1(r3)

.loc_0x7C:
  lbz       r0, 0x1(r3)
  rlwinm    r5,r8,3,21,28
  rlwinm    r10,r9,6,18,25
  lbz       r12, 0xC(r4)
  rlwinm    r6,r0,0,29,27
  lbz       r0, 0xE(r4)
  or        r5, r6, r5
  lbz       r6, 0x1(r4)
  stb       r5, 0x1(r3)
  rlwinm    r9,r12,7,17,24
  lbz       r5, 0x3(r4)
  rlwinm    r8,r6,4,0,27
  lbz       r11, 0x1(r3)
  cmplwi    r0, 0x1
  lbz       r7, 0x2(r4)
  rlwinm    r6,r5,4,0,27
  rlwimi    r10,r11,0,26,31
  lbz       r5, 0x4(r4)
  stb       r10, 0x1(r3)
  or        r7, r8, r7
  or        r6, r6, r5
  lbz       r5, 0xA(r4)
  stb       r7, 0x2(r3)
  rlwinm    r10,r12,31,25,31
  lbz       r7, 0xB(r4)
  rlwinm    r5,r5,5,0,26
  stb       r6, 0x3(r3)
  rlwinm    r11,r7,2,22,29
  lbz       r8, 0xD(r4)
  lbz       r6, 0x6(r3)
  rlwinm    r7,r0,2,22,29
  lbz       r31, 0x10(r4)
  rlwinm    r8,r8,4,20,27
  rlwimi    r5,r6,0,27,31
  lbz       r6, 0x12(r4)
  stb       r5, 0x6(r3)
  lbz       r5, 0x11(r4)
  lbz       r12, 0x6(r3)
  rlwinm    r12,r12,0,30,26
  or        r11, r12, r11
  lbz       r12, 0xF(r4)
  stb       r11, 0x6(r3)
  lbz       r4, 0x6(r3)
  rlwinm    r4,r4,0,0,29
  or        r4, r4, r10
  stb       r4, 0x6(r3)
  lbz       r4, 0x7(r3)
  rlwimi    r9,r4,0,25,31
  stb       r9, 0x7(r3)
  lbz       r4, 0x7(r3)
  rlwinm    r4,r4,0,28,24
  or        r4, r4, r8
  stb       r4, 0x7(r3)
  lbz       r4, 0x5(r3)
  rlwinm    r4,r4,0,30,28
  or        r4, r4, r7
  stb       r4, 0x5(r3)
  bgt-      .loc_0x18C
  lbz       r4, 0x5(r3)
  rlwinm    r0,r31,4,20,27
  rlwinm    r4,r4,0,0,29
  or        r4, r4, r12
  stb       r4, 0x5(r3)
  lbz       r4, 0x5(r3)
  rlwinm    r4,r4,0,28,25
  or        r0, r4, r0
  stb       r0, 0x5(r3)
  b         .loc_0x1A8

.loc_0x18C:
  lbz       r4, 0x5(r3)
  rlwimi    r4,r0,3,26,27
  stb       r4, 0x5(r3)
  lbz       r0, 0x5(r3)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x3
  stb       r0, 0x5(r3)

.loc_0x1A8:
  lbz       r7, 0x5(r3)
  rlwinm    r4,r5,3,21,28
  rlwinm    r0,r6,6,18,25
  rlwinm    r5,r7,0,29,27
  or        r4, r5, r4
  stb       r4, 0x5(r3)
  lbz       r4, 0x5(r3)
  rlwimi    r0,r4,0,26,31
  stb       r0, 0x5(r3)
  lwz       r31, 0xC(r1)
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80062114
 * Size:	000020
 */
void J3DTevOrder::J3DTevOrder()
{
/*
.loc_0x0:
  lbz       r0, -0x7994(r2)
  subi      r4, r2, 0x7994
  stb       r0, 0x0(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r3)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80062134
 * Size:	000048
 */
void J3DTevBlock::~J3DTevBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x2B08
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3E0AC

.loc_0x30:
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
 * Address:	8006217C
 * Size:	0000E8
 */
void J3DMaterial::createIndBlock(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r3, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  beq-      .loc_0xAC
  li        r3, 0x7C
  bl        -0x3E2F4
  mr.       r31, r3
  beq-      .loc_0xA4
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x16D0
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2ABC
  lis       r4, 0x8006
  addi      r3, r31, 0x5
  stw       r0, 0x0(r31)
  addi      r4, r4, 0x2334
  li        r6, 0x4
  li        r7, 0x4
  bl        0x5F668
  lis       r3, 0x8006
  lis       r5, 0x8006
  addi      r4, r3, 0x22F4
  li        r6, 0x1C
  addi      r3, r31, 0x18
  addi      r5, r5, 0x22B8
  li        r7, 0x3
  bl        0x5F648
  lis       r3, 0x8006
  lis       r5, 0x8006
  addi      r4, r3, 0x22A0
  li        r6, 0x4
  addi      r3, r31, 0x6C
  addi      r5, r5, 0x2264
  li        r7, 0x4
  bl        0x5F628
  mr        r3, r31
  bl        0x157E0

.loc_0xA4:
  mr        r3, r31
  b         .loc_0xD4

.loc_0xAC:
  li        r3, 0x4
  bl        -0x3E388
  cmplwi    r3, 0
  beq-      .loc_0xD4
  lis       r5, 0x804A
  lis       r4, 0x804A
  addi      r0, r5, 0x16D0
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x1684
  stw       r0, 0x0(r3)

.loc_0xD4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80062264
 * Size:	00003C
 */
void J3DIndTexCoordScale::~J3DIndTexCoordScale()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x24
  extsh.    r0, r4
  ble-      .loc_0x24
  bl        -0x3E1D0

.loc_0x24:
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
 * Address:	800622A0
 * Size:	000018
 */
void J3DIndTexCoordScale::J3DIndTexCoordScale()
{
/*
.loc_0x0:
  lbz       r0, -0x7984(r2)
  subi      r4, r2, 0x7984
  stb       r0, 0x0(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800622B8
 * Size:	00003C
 */
void J3DIndTexMtx::~J3DIndTexMtx()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x24
  extsh.    r0, r4
  ble-      .loc_0x24
  bl        -0x3E224

.loc_0x24:
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
 * Address:	800622F4
 * Size:	000040
 */
void J3DIndTexMtx::J3DIndTexMtx()
{
/*
.loc_0x0:
  lis       r4, 0x8048
  lfsu      f0, -0x76D4(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x8(r3)
  lfs       f0, 0xC(r4)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x10(r4)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x14(r4)
  stfs      f0, 0x14(r3)
  lbz       r0, 0x18(r4)
  stb       r0, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80062334
 * Size:	000018
 */
void J3DIndTexOrder::J3DIndTexOrder()
{
/*
.loc_0x0:
  lbz       r0, -0x7990(r2)
  subi      r4, r2, 0x7990
  stb       r0, 0x0(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8006234C
 * Size:	000048
 */
void J3DIndBlock::~J3DIndBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x16D0
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3E2C4

.loc_0x30:
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
 * Address:	80062394
 * Size:	00027C
 */
void J3DMaterial::createPEBlock(unsigned long, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r3, 0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bne-      .loc_0xB8
  rlwinm.   r0,r4,0,31,31
  beq-      .loc_0x50
  li        r3, 0x4
  bl        -0x3E518
  cmplwi    r3, 0
  beq-      .loc_0x268
  lis       r5, 0x804A
  lis       r4, 0x804A
  addi      r0, r5, 0x1608
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x2A40
  stw       r0, 0x0(r3)
  b         .loc_0x268

.loc_0x50:
  rlwinm.   r0,r4,0,30,30
  beq-      .loc_0x84
  li        r3, 0x4
  bl        -0x3E54C
  cmplwi    r3, 0
  beq-      .loc_0x268
  lis       r5, 0x804A
  lis       r4, 0x804A
  addi      r0, r5, 0x1608
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x29C4
  stw       r0, 0x0(r3)
  b         .loc_0x268

.loc_0x84:
  rlwinm.   r0,r4,0,29,29
  beq-      .loc_0xB8
  li        r3, 0x4
  bl        -0x3E580
  cmplwi    r3, 0
  beq-      .loc_0x268
  lis       r5, 0x804A
  lis       r4, 0x804A
  addi      r0, r5, 0x1608
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x2948
  stw       r0, 0x0(r3)
  b         .loc_0x268

.loc_0xB8:
  subis     r0, r3, 0x1000
  cmplwi    r0, 0
  bne-      .loc_0x1E8
  li        r3, 0x40
  bl        -0x3E5B8
  mr.       r31, r3
  beq-      .loc_0x1E0
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r0, r4, 0x1608
  lhz       r6, -0x7966(r2)
  stw       r0, 0x0(r31)
  addi      r0, r5, 0x21B0
  lis       r4, 0x8048
  subi      r5, r2, 0x7974
  stw       r0, 0x0(r31)
  subi      r8, r4, 0x7698
  li        r4, 0
  lhz       r0, -0x7964(r2)
  lbz       r7, 0x0(r8)
  stb       r7, 0x4(r31)
  lbz       r7, 0x1(r8)
  stb       r7, 0x5(r31)
  lhz       r7, 0x2(r8)
  sth       r7, 0x6(r31)
  lfs       f0, 0x4(r8)
  stfs      f0, 0x8(r31)
  lfs       f0, 0x8(r8)
  stfs      f0, 0xC(r31)
  lfs       f0, 0xC(r8)
  stfs      f0, 0x10(r31)
  lfs       f0, 0x10(r8)
  stfs      f0, 0x14(r31)
  lbz       r7, 0x14(r8)
  stb       r7, 0x18(r31)
  lbz       r7, 0x15(r8)
  stb       r7, 0x19(r31)
  lbz       r7, 0x16(r8)
  stb       r7, 0x1A(r31)
  lbz       r7, 0x17(r8)
  stb       r7, 0x1B(r31)
  lhz       r7, 0x18(r8)
  sth       r7, 0x1C(r31)
  lhz       r7, 0x1A(r8)
  sth       r7, 0x1E(r31)
  lhz       r7, 0x1C(r8)
  sth       r7, 0x20(r31)
  lhz       r7, 0x1E(r8)
  sth       r7, 0x22(r31)
  lhz       r7, 0x20(r8)
  sth       r7, 0x24(r31)
  lhz       r7, 0x22(r8)
  sth       r7, 0x26(r31)
  lhz       r7, 0x24(r8)
  sth       r7, 0x28(r31)
  lhz       r7, 0x26(r8)
  sth       r7, 0x2A(r31)
  lhz       r7, 0x28(r8)
  sth       r7, 0x2C(r31)
  lhz       r7, 0x2A(r8)
  sth       r7, 0x2E(r31)
  sth       r6, 0x30(r31)
  stb       r4, 0x32(r31)
  stb       r4, 0x33(r31)
  lbz       r4, -0x7974(r2)
  stb       r4, 0x34(r31)
  lbz       r4, 0x1(r5)
  stb       r4, 0x35(r31)
  lbz       r4, 0x2(r5)
  stb       r4, 0x36(r31)
  lbz       r4, 0x3(r5)
  stb       r4, 0x37(r31)
  sth       r0, 0x38(r31)
  bl        0x154BC

.loc_0x1E0:
  mr        r5, r31
  b         .loc_0x264

.loc_0x1E8:
  subis     r0, r3, 0x2000
  cmplwi    r0, 0
  bne-      .loc_0x264
  li        r3, 0x10
  bl        -0x3E6E8
  mr.       r31, r3
  beq-      .loc_0x260
  lis       r5, 0x804A
  lis       r4, 0x804A
  addi      r0, r5, 0x1608
  lhz       r6, -0x7966(r2)
  stw       r0, 0x0(r31)
  addi      r0, r4, 0x222C
  li        r4, 0
  subi      r5, r2, 0x7974
  stw       r0, 0x0(r31)
  lhz       r0, -0x7964(r2)
  sth       r6, 0x4(r31)
  stb       r4, 0x6(r31)
  stb       r4, 0x7(r31)
  lbz       r4, -0x7974(r2)
  stb       r4, 0x8(r31)
  lbz       r4, 0x1(r5)
  stb       r4, 0x9(r31)
  lbz       r4, 0x2(r5)
  stb       r4, 0xA(r31)
  lbz       r4, 0x3(r5)
  stb       r4, 0xB(r31)
  sth       r0, 0xC(r31)
  bl        0x15418

.loc_0x260:
  mr        r5, r31

.loc_0x264:
  mr        r3, r5

.loc_0x268:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void J3DFog::~J3DFog()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80062610
 * Size:	000048
 */
void J3DPEBlock::~J3DPEBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x1608
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3E588

.loc_0x30:
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
 * Address:	80062658
 * Size:	000050
 */
void J3DMaterial::calcSizeColorBlock(unsigned long)
{
/*
.loc_0x0:
  cmpwi     r3, 0
  li        r5, 0
  beq-      .loc_0x34
  bge-      .loc_0x24
  lis       r4, 0x8000
  addi      r0, r4, 0x1
  cmpw      r3, r0
  bge-      .loc_0x48
  b         .loc_0x44

.loc_0x24:
  lis       r0, 0x4000
  cmpw      r3, r0
  beq-      .loc_0x3C
  b         .loc_0x48

.loc_0x34:
  li        r5, 0x20
  b         .loc_0x48

.loc_0x3C:
  li        r5, 0x4C
  b         .loc_0x48

.loc_0x44:
  li        r5, 0x28

.loc_0x48:
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	800626A8
 * Size:	00002C
 */
void J3DMaterial::calcSizeTexGenBlock(unsigned long)
{
/*
.loc_0x0:
  lis       r0, 0x800
  cmpw      r3, r0
  beq-      .loc_0x1C
  bge-      .loc_0x24
  cmpwi     r3, 0
  beq-      .loc_0x24
  b         .loc_0x24

.loc_0x1C:
  li        r3, 0x6C
  blr       

.loc_0x24:
  li        r3, 0x6C
  blr
*/
}

/*
 * --INFO--
 * Address:	800626D4
 * Size:	000048
 */
void J3DMaterial::calcSizeTevBlock(int)
{
/*
.loc_0x0:
  cmpwi     r3, 0x1
  li        r0, 0
  bgt-      .loc_0x14
  li        r0, 0x1C
  b         .loc_0x40

.loc_0x14:
  cmpwi     r3, 0x2
  bne-      .loc_0x24
  li        r0, 0x6C
  b         .loc_0x40

.loc_0x24:
  cmpwi     r3, 0x4
  bgt-      .loc_0x34
  li        r0, 0x94
  b         .loc_0x40

.loc_0x34:
  cmpwi     r3, 0x10
  bgt-      .loc_0x40
  li        r0, 0x174

.loc_0x40:
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8006271C
 * Size:	000014
 */
void J3DMaterial::calcSizeIndBlock(int)
{
/*
.loc_0x0:
  cmpwi     r3, 0
  li        r3, 0x4
  beqlr-    
  li        r3, 0x7C
  blr
*/
}

/*
 * --INFO--
 * Address:	80062730
 * Size:	000068
 */
void J3DMaterial::calcSizePEBlock(unsigned long, unsigned long)
{
/*
.loc_0x0:
  cmplwi    r3, 0
  li        r5, 0
  bne-      .loc_0x3C
  rlwinm.   r0,r4,0,31,31
  beq-      .loc_0x1C
  li        r5, 0x4
  b         .loc_0x60

.loc_0x1C:
  rlwinm.   r0,r4,0,30,30
  beq-      .loc_0x2C
  li        r5, 0x4
  b         .loc_0x60

.loc_0x2C:
  rlwinm.   r0,r4,0,29,29
  beq-      .loc_0x60
  li        r5, 0x4
  b         .loc_0x60

.loc_0x3C:
  subis     r0, r3, 0x1000
  cmplwi    r0, 0
  bne-      .loc_0x50
  li        r5, 0x40
  b         .loc_0x60

.loc_0x50:
  subis     r0, r3, 0x2000
  cmplwi    r0, 0
  bne-      .loc_0x60
  li        r5, 0x10

.loc_0x60:
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	80062798
 * Size:	000050
 */
void J3DMaterial::initialize()
{
/*
.loc_0x0:
  li        r6, 0
  lis       r4, 0x1
  stw       r6, 0x8(r3)
  li        r5, 0x1
  subi      r0, r4, 0x1
  stw       r6, 0x4(r3)
  stw       r6, 0xC(r3)
  stw       r5, 0x10(r3)
  sth       r0, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r6, 0x20(r3)
  stw       r6, 0x24(r3)
  stw       r6, 0x28(r3)
  stw       r6, 0x2C(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x34(r3)
  stw       r6, 0x38(r3)
  stw       r6, 0x3C(r3)
  stw       r6, 0x48(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800627E8
 * Size:	0000BC
 */
void J3DMaterial::countDLSize()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lwz       r3, 0x24(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  lwz       r3, 0x2C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  add       r31, r31, r3
  lwz       r3, 0x30(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  add       r31, r31, r3
  lwz       r3, 0x34(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  add       r3, r31, r3
  addi      r0, r3, 0x1F
  add       r0, r30, r0
  rlwinm    r3,r0,0,0,26
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800628A4
 * Size:	000008
 */
void J3DTexGenBlock::countDLSize()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800628AC
 * Size:	000008
 */
void J3DColorBlock::countDLSize()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800628B4
 * Size:	000008
 */
void J3DTevBlock::countDLSize()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800628BC
 * Size:	000008
 */
void J3DIndBlock::countDLSize()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800628C4
 * Size:	000008
 */
void J3DPEBlock::countDLSize()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002D4
 */
void J3DMaterial::makeDisplayList_private(J3DDisplayListObj *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800628CC
 * Size:	000004
 */
void J3DColorBlock::load()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800628D0
 * Size:	000008
 */
void J3DColorBlock::getCullMode() const
{
/*
.loc_0x0:
  li        r3, 0x2
  blr
*/
}

/*
 * --INFO--
 * Address:	800628D8
 * Size:	000008
 */
void J3DIndBlock::getIndTexStageNum() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800628E0
 * Size:	000008
 */
void J3DColorBlock::getColorChanNum() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800628E8
 * Size:	000004
 */
void J3DTevBlock::load()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800628EC
 * Size:	0002F8
 */
void J3DMaterial::makeDisplayList()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r30, r3
  subi      r3, r4, 0xDD0
  lwz       r4, 0x3C(r3)
  lwz       r0, 0x10(r4)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x2E4
  lwz       r0, 0x20(r30)
  stw       r0, 0x34(r4)
  lwz       r3, 0x3C(r3)
  lwz       r31, 0x20(r3)
  mr        r3, r31
  bl        -0x2F94
  lwz       r3, 0x2C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x34(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  rlwinm    r26,r3,0,24,31
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r27, r3
  lwz       r3, 0x2C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x98(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm    r3,r3,0,24,31
  mr        r4, r29
  mr        r5, r28
  mr        r6, r27
  mr        r7, r26
  bl        0x11A4C
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  lwz       r5, -0x7158(r13)
  li        r8, 0x10
  li        r7, 0
  li        r6, 0x9
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r3, 0x0(r4)
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r5, -0x7158(r13)
  li        r8, 0x10
  li        r7, 0
  li        r6, 0x3F
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r3, 0x0(r4)
  mr        r3, r31
  bl        -0x31D4

.loc_0x2E4:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80062BE4
 * Size:	0002D4
 */
void J3DMaterial::makeSharedDisplayList()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r30, r3
  lwz       r31, 0x48(r3)
  mr        r3, r31
  bl        -0x3268
  lwz       r3, 0x2C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x34(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  rlwinm    r26,r3,0,24,31
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r27, r3
  lwz       r3, 0x2C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x98(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm    r3,r3,0,24,31
  mr        r4, r29
  mr        r5, r28
  mr        r6, r27
  mr        r7, r26
  bl        0x11778
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  lwz       r5, -0x7158(r13)
  li        r8, 0x10
  li        r7, 0
  li        r6, 0x9
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r3, 0x0(r4)
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r5, -0x7158(r13)
  li        r8, 0x10
  li        r7, 0
  li        r6, 0x3F
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r3, 0x0(r4)
  mr        r3, r31
  bl        -0x34A8
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80062EB8
 * Size:	000050
 */
void J3DMaterial::load()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  subi      r4, r4, 0xDD0
  lwz       r0, 0x34(r4)
  lwz       r5, 0x10(r3)
  rlwinm.   r0,r0,0,30,30
  stw       r5, 0x54(r4)
  bne-      .loc_0x40
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  bl        0x2670

.loc_0x40:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80062F08
 * Size:	000008
 */
void J3DTexGenBlock::getNBTScale()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80062F10
 * Size:	000064
 */
void J3DMaterial::loadSharedDL()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  subi      r3, r4, 0xDD0
  lwz       r0, 0x34(r3)
  lwz       r4, 0x10(r31)
  rlwinm.   r0,r0,0,30,30
  stw       r4, 0x54(r3)
  bne-      .loc_0x50
  lwz       r3, 0x48(r31)
  bl        -0x35D8
  lwz       r3, 0x28(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  bl        0x2608

.loc_0x50:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80062F74
 * Size:	000098
 */
void J3DMaterial::patch()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0xDD0
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, 0x20(r3)
  lwz       r3, 0x3C(r31)
  stw       r0, 0x34(r3)
  lwz       r3, 0x3C(r31)
  lwz       r3, 0x20(r3)
  bl        -0x3554
  lwz       r3, 0x2C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C(r31)
  lwz       r3, 0x20(r3)
  bl        -0x353C
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
 * Address:	8006300C
 * Size:	000004
 */
void J3DColorBlock::patch()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063010
 * Size:	000004
 */
void J3DTevBlock::patch()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063014
 * Size:	0001FC
 */
void J3DMaterial::diff(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8051
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  subi      r31, r5, 0xDD0
  mr        r29, r3
  mr        r30, r4
  lwz       r3, 0x3C(r31)
  lwz       r4, 0x28(r3)
  lwz       r0, 0x20(r4)
  cmplwi    r0, 0
  beq-      .loc_0x1E8
  bl        -0x3234
  lwz       r3, 0x2C(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x34(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r30,0,6,6
  beq-      .loc_0x1B0
  lwz       r3, 0x30(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r27, r3
  lwz       r3, 0x2C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x98(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  lwz       r3, 0x28(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm    r3,r3,0,24,31
  mr        r4, r28
  mr        r5, r27
  bl        0x114C4
  lwz       r3, 0x28(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r5, -0x7158(r13)
  li        r8, 0x10
  li        r7, 0
  li        r6, 0x3F
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r8, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r7, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r3, 0x0(r4)

.loc_0x1B0:
  lwz       r3, 0x28(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C(r31)
  bl        -0x3380

.loc_0x1E8:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80063210
 * Size:	000004
 */
void J3DColorBlock::diff(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063214
 * Size:	000004
 */
void J3DPEBlock::diff(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063218
 * Size:	000078
 */
void J3DMaterial::calc(const float (*) [4])
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8051
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  subi      r3, r5, 0xDD0
  lwz       r0, 0x34(r3)
  rlwinm.   r0,r0,0,1,1
  beq-      .loc_0x40
  lwz       r3, 0x28(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x54

.loc_0x40:
  lwz       r3, 0x28(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  mr        r3, r31
  bl        0x94
  mr        r3, r31
  bl        0x74
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80063290
 * Size:	00005C
 */
void J3DMaterial::calcDiffTexMtx(const float (*) [4])
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8051
  stw       r0, 0x14(r1)
  subi      r5, r5, 0xDD0
  lwz       r0, 0x34(r5)
  rlwinm.   r0,r0,0,1,1
  beq-      .loc_0x38
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x4C

.loc_0x38:
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800632EC
 * Size:	000018
 */
void J3DMaterial::setCurrentMtx()
{
/*
.loc_0x0:
  lwz       r4, 0x8(r3)
  lwz       r0, 0x40(r3)
  stw       r0, 0x40(r4)
  lwz       r0, 0x44(r3)
  stw       r0, 0x44(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80063304
 * Size:	000294
 */
void J3DMaterial::calcCurrentMtx()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r30, r3
  subi      r3, r4, 0xDD0
  lwz       r0, 0x34(r3)
  rlwinm.   r0,r0,0,1,1
  bne-      .loc_0x148
  lwz       r3, 0x28(r30)
  li        r4, 0x7
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r31, 0x2(r3)
  li        r4, 0x6
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r29, 0x2(r3)
  li        r4, 0x5
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r28, 0x2(r3)
  li        r4, 0x4
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r27, 0x2(r3)
  li        r4, 0x3
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r26, 0x2(r3)
  li        r4, 0x2
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r25, 0x2(r3)
  li        r4, 0x1
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r24, 0x2(r3)
  li        r4, 0
  lwz       r3, 0x28(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lbz       r4, 0x2(r3)
  rlwinm    r0,r28,6,18,25
  rlwinm    r3,r24,12,12,19
  rlwinm    r5,r25,18,6,13
  rlwinm    r4,r4,6,0,25
  rlwinm    r6,r26,24,0,7
  or        r4, r4, r3
  rlwinm    r3,r29,12,12,19
  or        r4, r5, r4
  or        r0, r27, r0
  or        r5, r6, r4
  rlwinm    r4,r31,18,6,13
  or        r0, r3, r0
  stw       r5, 0x40(r30)
  or        r0, r4, r0
  stw       r0, 0x44(r30)
  b         .loc_0x280

.loc_0x148:
  lwz       r3, 0x28(r30)
  li        r4, 0x7
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0x6
  lwz       r3, 0x28(r30)
  rlwinm    r31,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0x5
  lwz       r3, 0x28(r30)
  rlwinm    r24,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0x4
  lwz       r3, 0x28(r30)
  rlwinm    r25,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0x3
  lwz       r3, 0x28(r30)
  rlwinm    r26,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0x2
  lwz       r3, 0x28(r30)
  rlwinm    r27,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0x1
  lwz       r3, 0x28(r30)
  rlwinm    r28,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r0, 0x4(r3)
  li        r4, 0
  lwz       r3, 0x28(r30)
  rlwinm    r29,r0,0,24,31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lhz       r4, 0x4(r3)
  rlwinm    r0,r25,6,18,25
  rlwinm    r3,r29,12,12,19
  rlwinm    r5,r28,18,6,13
  rlwinm    r4,r4,6,18,25
  rlwinm    r6,r27,24,0,7
  or        r4, r4, r3
  rlwinm    r3,r24,12,12,19
  or        r4, r5, r4
  or        r0, r26, r0
  or        r5, r6, r4
  rlwinm    r4,r31,18,6,13
  or        r0, r3, r0
  stw       r5, 0x40(r30)
  or        r0, r4, r0
  stw       r0, 0x44(r30)

.loc_0x280:
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80063598
 * Size:	000008
 */
void J3DTexGenBlock::getTexCoord(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void J3DMaterial::copy(J3DMaterial *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800635A0
 * Size:	000004
 */
void J3DPEBlock::reset(J3DPEBlock *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800635A4
 * Size:	000004
 */
void J3DIndBlock::reset(J3DIndBlock *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800635A8
 * Size:	000004
 */
void J3DTevBlock::reset(J3DTevBlock *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800635AC
 * Size:	000004
 */
void J3DTexGenBlock::reset(J3DTexGenBlock *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800635B0
 * Size:	000004
 */
void J3DColorBlock::reset(J3DColorBlock *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800635B4
 * Size:	0000E4
 */
void J3DMaterial::reset()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x20(r3)
  not       r0, r3
  rlwinm.   r0,r0,0,0,0
  bne-      .loc_0xCC
  rlwinm    r3,r3,0,1,31
  li        r0, 0
  stw       r3, 0x20(r30)
  lwz       r3, 0x38(r30)
  lwz       r3, 0x10(r3)
  stw       r3, 0x10(r30)
  lwz       r3, 0x38(r30)
  lwz       r3, 0x18(r3)
  stw       r3, 0x18(r30)
  stw       r0, 0x3C(r30)
  lwz       r3, 0x24(r30)
  lwz       r31, 0x38(r30)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x24(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x28(r30)
  lwz       r4, 0x28(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r30)
  lwz       r4, 0x2C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30(r30)
  lwz       r4, 0x30(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x34(r30)
  lwz       r4, 0x34(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xCC:
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
 * Address:	80063698
 * Size:	000020
 */
void J3DMaterial::change()
{
/*
.loc_0x0:
  lwz       r4, 0x20(r3)
  rlwinm.   r0,r4,0,0,1
  bnelr-    
  oris      r4, r4, 0x8000
  li        r0, 0
  stw       r4, 0x20(r3)
  stw       r0, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800636B8
 * Size:	000094
 */
void J3DMaterial::newSharedDisplayList(unsigned long)
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
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0
  bne-      .loc_0x78
  li        r3, 0x10
  bl        -0x3F840
  cmplwi    r3, 0
  beq-      .loc_0x4C
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)

.loc_0x4C:
  stw       r3, 0x48(r30)
  lwz       r3, 0x48(r30)
  cmplwi    r3, 0
  bne-      .loc_0x64
  li        r3, 0x4
  b         .loc_0x7C

.loc_0x64:
  mr        r4, r31
  bl        -0x3EF4
  cmpwi     r3, 0
  beq-      .loc_0x78
  b         .loc_0x7C

.loc_0x78:
  li        r3, 0

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
 * Address:	8006374C
 * Size:	000094
 */
void J3DMaterial::newSingleSharedDisplayList(unsigned long)
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
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0
  bne-      .loc_0x78
  li        r3, 0x10
  bl        -0x3F8D4
  cmplwi    r3, 0
  beq-      .loc_0x4C
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)

.loc_0x4C:
  stw       r3, 0x48(r30)
  lwz       r3, 0x48(r30)
  cmplwi    r3, 0
  bne-      .loc_0x64
  li        r3, 0x4
  b         .loc_0x7C

.loc_0x64:
  mr        r4, r31
  bl        -0x3F28
  cmpwi     r3, 0
  beq-      .loc_0x78
  b         .loc_0x7C

.loc_0x78:
  li        r3, 0

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
 * Address:	800637E0
 * Size:	000050
 */
void J3DPatchedMaterial::initialize()
{
/*
.loc_0x0:
  li        r6, 0
  lis       r4, 0x1
  stw       r6, 0x8(r3)
  li        r5, 0x1
  subi      r0, r4, 0x1
  stw       r6, 0x4(r3)
  stw       r6, 0xC(r3)
  stw       r5, 0x10(r3)
  sth       r0, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r6, 0x20(r3)
  stw       r6, 0x24(r3)
  stw       r6, 0x28(r3)
  stw       r6, 0x2C(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x34(r3)
  stw       r6, 0x38(r3)
  stw       r6, 0x3C(r3)
  stw       r6, 0x48(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80063830
 * Size:	000004
 */
void J3DPatchedMaterial::makeDisplayList()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063834
 * Size:	000004
 */
void J3DPatchedMaterial::makeSharedDisplayList()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063838
 * Size:	00001C
 */
void J3DPatchedMaterial::load()
{
/*
.loc_0x0:
  lis       r4, 0x8051
  lwz       r5, 0x10(r3)
  subi      r3, r4, 0xDD0
  lwz       r0, 0x34(r3)
  stw       r5, 0x54(r3)
  rlwinm.   r0,r0,0,30,30
  blr
*/
}

/*
 * --INFO--
 * Address:	80063854
 * Size:	000040
 */
void J3DPatchedMaterial::loadSharedDL()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  subi      r4, r4, 0xDD0
  lwz       r0, 0x34(r4)
  lwz       r5, 0x10(r3)
  rlwinm.   r0,r0,0,30,30
  stw       r5, 0x54(r4)
  bne-      .loc_0x30
  lwz       r3, 0x48(r3)
  bl        -0x3F14

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80063894
 * Size:	000004
 */
void J3DPatchedMaterial::reset()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063898
 * Size:	000004
 */
void J3DPatchedMaterial::change()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8006389C
 * Size:	000050
 */
void J3DLockedMaterial::initialize()
{
/*
.loc_0x0:
  li        r6, 0
  lis       r4, 0x1
  stw       r6, 0x8(r3)
  li        r5, 0x1
  subi      r0, r4, 0x1
  stw       r6, 0x4(r3)
  stw       r6, 0xC(r3)
  stw       r5, 0x10(r3)
  sth       r0, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r6, 0x20(r3)
  stw       r6, 0x24(r3)
  stw       r6, 0x28(r3)
  stw       r6, 0x2C(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x34(r3)
  stw       r6, 0x38(r3)
  stw       r6, 0x3C(r3)
  stw       r6, 0x48(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800638EC
 * Size:	000004
 */
void J3DLockedMaterial::makeDisplayList()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800638F0
 * Size:	000004
 */
void J3DLockedMaterial::makeSharedDisplayList()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800638F4
 * Size:	00001C
 */
void J3DLockedMaterial::load()
{
/*
.loc_0x0:
  lis       r4, 0x8051
  lwz       r5, 0x10(r3)
  subi      r3, r4, 0xDD0
  lwz       r0, 0x34(r3)
  stw       r5, 0x54(r3)
  rlwinm.   r0,r0,0,30,30
  blr
*/
}

/*
 * --INFO--
 * Address:	80063910
 * Size:	000040
 */
void J3DLockedMaterial::loadSharedDL()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  subi      r4, r4, 0xDD0
  lwz       r0, 0x34(r4)
  lwz       r5, 0x10(r3)
  rlwinm.   r0,r0,0,30,30
  stw       r5, 0x54(r4)
  bne-      .loc_0x30
  lwz       r3, 0x48(r3)
  bl        -0x3FD0

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80063950
 * Size:	000004
 */
void J3DLockedMaterial::patch()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063954
 * Size:	000004
 */
void J3DLockedMaterial::diff(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063958
 * Size:	000004
 */
void J3DLockedMaterial::calc(const float (*) [4])
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8006395C
 * Size:	000004
 */
void J3DLockedMaterial::reset()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063960
 * Size:	000004
 */
void J3DLockedMaterial::change()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063964
 * Size:	000004
 */
void J3DPEBlock::patch()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063968
 * Size:	000004
 */
void J3DPEBlock::diffFog()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8006396C
 * Size:	000004
 */
void J3DPEBlock::diffBlend()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063970
 * Size:	000004
 */
void J3DPEBlock::setFog(J3DFog *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063974
 * Size:	000004
 */
void J3DPEBlock::setFog(J3DFog)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063978
 * Size:	000008
 */
void J3DPEBlock::getFog()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063980
 * Size:	000004
 */
void J3DPEBlock::setAlphaComp(const J3DAlphaComp &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063984
 * Size:	000004
 */
void J3DPEBlock::setAlphaComp(const J3DAlphaComp *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063988
 * Size:	000008
 */
void J3DPEBlock::getAlphaComp()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063990
 * Size:	000004
 */
void J3DPEBlock::setBlend(const J3DBlend &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063994
 * Size:	000004
 */
void J3DPEBlock::setBlend(const J3DBlend *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063998
 * Size:	000008
 */
void J3DPEBlock::getBlend()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800639A0
 * Size:	000004
 */
void J3DPEBlock::setZMode(J3DZMode)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639A4
 * Size:	000004
 */
void J3DPEBlock::setZMode(const J3DZMode *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639A8
 * Size:	000008
 */
void J3DPEBlock::getZMode()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800639B0
 * Size:	000004
 */
void J3DPEBlock::setZCompLoc(unsigned char)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639B4
 * Size:	000004
 */
void J3DPEBlock::setZCompLoc(const unsigned char *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639B8
 * Size:	000008
 */
void J3DPEBlock::getZCompLoc() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800639C0
 * Size:	000004
 */
void J3DPEBlock::setDither(unsigned char)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639C4
 * Size:	000004
 */
void J3DPEBlock::setDither(const unsigned char *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639C8
 * Size:	000008
 */
void J3DPEBlock::getDither() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800639D0
 * Size:	000008
 */
void J3DPEBlock::getFogOffset() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800639D8
 * Size:	000004
 */
void J3DPEBlock::setFogOffset(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639DC
 * Size:	000004
 */
void J3DIndBlockNull::diff(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639E0
 * Size:	000004
 */
void J3DIndBlockNull::load()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639E4
 * Size:	000004
 */
void J3DIndBlockNull::reset(J3DIndBlock *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800639E8
 * Size:	00000C
 */
void J3DIndBlockNull::getType()
{
/*
.loc_0x0:
  lis       r3, 0x4942
  addi      r3, r3, 0x4C4E
  blr
*/
}

/*
 * --INFO--
 * Address:	800639F4
 * Size:	00005C
 */
void J3DIndBlockNull::~J3DIndBlockNull()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  addi      r0, r3, 0x1684
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  addi      r0, r3, 0x16D0
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        -0x3F980

.loc_0x44:
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
 * Address:	80063A50
 * Size:	000004
 */
void J3DIndBlock::setIndTexStageNum(unsigned char)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A54
 * Size:	000004
 */
void J3DIndBlock::setIndTexOrder(unsigned long, const J3DIndTexOrder *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A58
 * Size:	000004
 */
void J3DIndBlock::setIndTexOrder(unsigned long, J3DIndTexOrder)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A5C
 * Size:	000008
 */
void J3DIndBlock::getIndTexOrder(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A64
 * Size:	000004
 */
void J3DIndBlock::setIndTexMtx(unsigned long, J3DIndTexMtx)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A68
 * Size:	000004
 */
void J3DIndBlock::setIndTexMtx(unsigned long, const J3DIndTexMtx *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A6C
 * Size:	000008
 */
void J3DIndBlock::getIndTexMtx(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A74
 * Size:	000004
 */
void J3DIndBlock::setIndTexCoordScale(unsigned long, J3DIndTexCoordScale)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A78
 * Size:	000004
 */
void J3DIndBlock::setIndTexCoordScale(unsigned long, const J3DIndTexCoordScale *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A7C
 * Size:	000008
 */
void J3DIndBlock::getIndTexCoordScale(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A84
 * Size:	000004
 */
void J3DTexGenBlock::setTexGenNum(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A88
 * Size:	000004
 */
void J3DTexGenBlock::setTexGenNum(const unsigned long *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A8C
 * Size:	000004
 */
void J3DTexGenBlock::setTexCoord(unsigned long, const J3DTexCoord *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A90
 * Size:	000004
 */
void J3DTexGenBlock::setTexMtx(unsigned long, J3DTexMtx *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A94
 * Size:	000008
 */
void J3DTexGenBlock::getTexMtx(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063A9C
 * Size:	000004
 */
void J3DTexGenBlock::setNBTScale(J3DNBTScale)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AA0
 * Size:	000004
 */
void J3DTexGenBlock::setNBTScale(const J3DNBTScale *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AA4
 * Size:	000008
 */
void J3DTexGenBlock::getTexMtxOffset() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AAC
 * Size:	000004
 */
void J3DTexGenBlock::setTexMtxOffset(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AB0
 * Size:	000004
 */
void J3DColorBlock::patchMatColor()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AB4
 * Size:	000004
 */
void J3DColorBlock::patchLight()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AB8
 * Size:	000004
 */
void J3DColorBlock::diffMatColor()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063ABC
 * Size:	000004
 */
void J3DColorBlock::diffLight()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AC0
 * Size:	000004
 */
void J3DColorBlock::setMatColor(unsigned long, J3DGXColor)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AC4
 * Size:	000004
 */
void J3DColorBlock::setMatColor(unsigned long, const J3DGXColor *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AC8
 * Size:	000008
 */
void J3DColorBlock::getMatColor(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AD0
 * Size:	000004
 */
void J3DColorBlock::setAmbColor(unsigned long, J3DGXColor)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AD4
 * Size:	000004
 */
void J3DColorBlock::setAmbColor(unsigned long, const J3DGXColor *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AD8
 * Size:	000008
 */
void J3DColorBlock::getAmbColor(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AE0
 * Size:	000004
 */
void J3DColorBlock::setColorChanNum(const unsigned char *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AE4
 * Size:	000004
 */
void J3DColorBlock::setColorChanNum(unsigned char)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AE8
 * Size:	000004
 */
void J3DColorBlock::setColorChan(unsigned long, const J3DColorChan *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AEC
 * Size:	000004
 */
void J3DColorBlock::setColorChan(unsigned long, const J3DColorChan &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AF0
 * Size:	000008
 */
void J3DColorBlock::getColorChan(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AF8
 * Size:	000004
 */
void J3DColorBlock::setLight(unsigned long, J3DLightObj *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063AFC
 * Size:	000008
 */
void J3DColorBlock::getLight(unsigned long)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063B04
 * Size:	000004
 */
void J3DColorBlock::setCullMode(unsigned char)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063B08
 * Size:	000004
 */
void J3DColorBlock::setCullMode(const unsigned char *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063B0C
 * Size:	000008
 */
void J3DColorBlock::getMatColorOffset() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063B14
 * Size:	000008
 */
void J3DColorBlock::getColorChanOffset() const
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80063B1C
 * Size:	000004
 */
void J3DColorBlock::setMatColorOffset(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80063B20
 * Size:	000004
 */
void J3DColorBlock::setColorChanOffset(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}