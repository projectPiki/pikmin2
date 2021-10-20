

/*
 * --INFO--
 * Address:	8001D0B8
 * Size:	000074
 */
void JKRDvdFile::JKRDvdFile()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r0, r30
	  mr        r31, r0
	  bl        -0x10C
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  subi      r0, r4, 0x458
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x298
	  mr        r4, r30
	  addi      r3, r30, 0xE4
	  stb       r5, 0x18(r31)
	  stw       r0, 0x0(r30)
	  bl        0x96B4
	  mr        r3, r30
	  bl        0x21C
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
 * Address:	8001D12C
 * Size:	0000B0
 */
void JKRDvdFile::JKRDvdFile(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r0, r29
	  mr        r30, r0
	  bl        -0x188
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  subi      r0, r4, 0x458
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x298
	  mr        r4, r29
	  addi      r3, r29, 0xE4
	  stb       r5, 0x18(r30)
	  stw       r0, 0x0(r29)
	  bl        0x9638
	  mr        r3, r29
	  bl        0x1A0
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x18(r29)
	  lbz       r0, 0x18(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  mr        r3, r29
	  b         .loc_0x94

	.loc_0x90:
	  mr        r3, r29

	.loc_0x94:
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
 * Address:	8001D1DC
 * Size:	0000B0
 */
void JKRDvdFile::JKRDvdFile(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r0, r29
	  mr        r30, r0
	  bl        -0x238
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  subi      r0, r4, 0x458
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x298
	  mr        r4, r29
	  addi      r3, r29, 0xE4
	  stb       r5, 0x18(r30)
	  stw       r0, 0x0(r29)
	  bl        0x9588
	  mr        r3, r29
	  bl        0xF0
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x18(r29)
	  lbz       r0, 0x18(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  mr        r3, r29
	  b         .loc_0x94

	.loc_0x90:
	  mr        r3, r29

	.loc_0x94:
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
 * Address:	8001D28C
 * Size:	00009C
 */
void JKRDvdFile::~JKRDvdFile()
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
	  beq-      .loc_0x80
	  lis       r4, 0x804A
	  subi      r0, r4, 0x298
	  stw       r0, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addic.    r0, r30, 0xE4
	  beq-      .loc_0x50
	  addi      r3, r30, 0xE4
	  li        r4, 0
	  bl        0x94F8

	.loc_0x50:
	  cmplwi    r30, 0
	  beq-      .loc_0x70
	  lis       r4, 0x804A
	  mr        r3, r30
	  subi      r0, r4, 0x458
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        -0x2C4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        0x6DAC

	.loc_0x80:
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
 * Address:	8001D328
 * Size:	00006C
 */
void JKRDvdFile::initiate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r31, 0x98(r3)
	  addi      r3, r31, 0x1C
	  bl        0xD27EC
	  addi      r3, r31, 0x34
	  bl        0xD27E4
	  addi      r3, r31, 0xC0
	  addi      r4, r31, 0xE0
	  li        r5, 0x1
	  bl        0xD2160
	  addi      r3, r31, 0x9C
	  addi      r4, r31, 0xBC
	  li        r5, 0x1
	  bl        0xD2150
	  li        r0, 0
	  stw       r0, 0xF4(r31)
	  stw       r0, 0x50(r31)
	  stw       r0, 0x58(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D394
 * Size:	000078
 */
void JKRDvdFile::open(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  mr        r3, r4
	  addi      r4, r31, 0x5C
	  bl        0xBF110
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x18(r31)
	  lbz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  lis       r3, 0x8050
	  addi      r4, r31, 0xE4
	  addi      r3, r3, 0x6E00
	  bl        0x94FC
	  addi      r3, r31, 0x5C
	  bl        0xC1974

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lbz       r3, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D40C
 * Size:	000078
 */
void JKRDvdFile::open(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  mr        r3, r4
	  addi      r4, r31, 0x5C
	  bl        0xBF024
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x18(r31)
	  lbz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  lis       r3, 0x8050
	  addi      r4, r31, 0xE4
	  addi      r3, r3, 0x6E00
	  bl        0x9484
	  addi      r3, r31, 0x5C
	  bl        0xC18FC

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lbz       r3, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D484
 * Size:	00007C
 */
void JKRDvdFile::close()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  addi      r3, r31, 0x5C
	  bl        0xBF0EC
	  cmpwi     r3, 0
	  beq-      .loc_0x4C
	  li        r0, 0
	  lis       r3, 0x8050
	  stb       r0, 0x18(r31)
	  addi      r3, r3, 0x6E00
	  addi      r4, r31, 0xE4
	  bl        0x975C
	  b         .loc_0x68

	.loc_0x4C:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3608
	  li        r4, 0xD5
	  addi      r5, r5, 0x3618
	  crclr     6, 0x6
	  bl        0xD0284

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D500
 * Size:	0000C4
 */
void JKRDvdFile::readData(void*, long, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x1C
	  bl        0xD2638
	  lwz       r0, 0xF4(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  addi      r3, r28, 0x1C
	  bl        0xD2700
	  li        r3, -0x1
	  b         .loc_0xA4

	.loc_0x50:
	  bl        0xD4474
	  lis       r4, 0x8002
	  stw       r3, 0xF4(r28)
	  subi      r7, r4, 0x29E0
	  mr        r6, r31
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r28, 0x5C
	  li        r31, -0x1
	  li        r8, 0x2
	  bl        0xBF418
	  cmpwi     r3, 0
	  beq-      .loc_0x90
	  mr        r3, r28
	  bl        0x44
	  mr        r31, r3

	.loc_0x90:
	  li        r0, 0
	  addi      r3, r28, 0x1C
	  stw       r0, 0xF4(r28)
	  bl        0xD26A8
	  mr        r3, r31

	.loc_0xA4:
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
 * Address:	8001D5C4
 * Size:	000008
 */
void JKRDvdFile::writeData(const void*, long, long)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D5CC
 * Size:	000054
 */
void JKRDvdFile::sync()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x1C
	  bl        0xD2584
	  addi      r3, r31, 0xC0
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xD1FF0
	  li        r0, 0
	  addi      r3, r31, 0x1C
	  stw       r0, 0xF4(r31)
	  bl        0xD2640
	  lwz       r0, 0x24(r1)
	  lwz       r3, 0x8(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D620
 * Size:	000030
 */
void JKRDvdFile::doneProcess(long, DVDFileInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x3C(r4)
	  mr        r4, r3
	  addi      r3, r6, 0xC0
	  bl        0xD1EE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D650
 * Size:	000008
 */
void JKRDvdFile::getFileSize() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x90(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D658
 * Size:	000044
 */
void __sinit_JKRDvdFile_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E00
	  bl        0x9264
	  lis       r3, 0x8050
	  lis       r4, 0x8002
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E00
	  subi      r4, r4, 0x2964
	  subi      r5, r5, 0xC0
	  bl        0xA4078
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001D69C
 * Size:	000054
 */
void JSUList<JKRDvdFile>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        0x91A8
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        0x69E4

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
