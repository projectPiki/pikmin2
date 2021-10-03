

/*
 * --INFO--
 * Address:	80026D5C
 * Size:	000014
 */
void JSUMemoryInputStream::setBuffer(const void*, long)
{
    /*
    .loc_0x0:
      stw       r4, 0x8(r3)
      li        r0, 0
      stw       r5, 0xC(r3)
      stw       r0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80026D70
 * Size:	000078
 */
void JSUMemoryInputStream::readData(void*, long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r6, 0x10(r3)
      lwz       r3, 0xC(r3)
      add       r0, r6, r31
      cmpw      r0, r3
      ble-      .loc_0x34
      sub       r31, r3, r6

    .loc_0x34:
      cmpwi     r31, 0
      ble-      .loc_0x5C
      lwz       r0, 0x8(r30)
      mr        r3, r4
      mr        r5, r31
      add       r4, r0, r6
      bl        -0x21C20
      lwz       r0, 0x10(r30)
      add       r0, r0, r31
      stw       r0, 0x10(r30)

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80026DE8
 * Size:	00007C
 */
void JSUMemoryInputStream::seekPos(long, JSUStreamSeekFrom)
{
    /*
    .loc_0x0:
      cmpwi     r5, 0x1
      lwz       r6, 0x10(r3)
      beq-      .loc_0x40
      bge-      .loc_0x1C
      cmpwi     r5, 0
      bge-      .loc_0x28
      b         .loc_0x48

    .loc_0x1C:
      cmpwi     r5, 0x3
      bge-      .loc_0x48
      b         .loc_0x30

    .loc_0x28:
      stw       r4, 0x10(r3)
      b         .loc_0x48

    .loc_0x30:
      lwz       r0, 0xC(r3)
      sub       r0, r0, r4
      stw       r0, 0x10(r3)
      b         .loc_0x48

    .loc_0x40:
      add       r0, r6, r4
      stw       r0, 0x10(r3)

    .loc_0x48:
      lwz       r0, 0x10(r3)
      cmpwi     r0, 0
      bge-      .loc_0x5C
      li        r0, 0
      stw       r0, 0x10(r3)

    .loc_0x5C:
      lwz       r0, 0x10(r3)
      lwz       r4, 0xC(r3)
      cmpw      r0, r4
      ble-      .loc_0x70
      stw       r4, 0x10(r3)

    .loc_0x70:
      lwz       r0, 0x10(r3)
      sub       r3, r0, r6
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JSUMemoryOutputStream::setBuffer(void*, long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JSUMemoryOutputStream::writeData(const void*, long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JSUMemoryOutputStream::seekPos(long, JSUStreamSeekFrom)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JSUMemoryOutputStream::~JSUMemoryOutputStream()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUMemoryOutputStream::getLength() const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSUMemoryOutputStream::getPosition() const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80026E64
 * Size:	000070
 */
void JSUMemoryInputStream::~JSUMemoryInputStream()
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
      lis       r4, 0x804A
      addi      r0, r4, 0x80
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804A
      li        r4, 0
      addi      r0, r5, 0x40
      stw       r0, 0x0(r30)
      bl        -0xB2C

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x2E00

    .loc_0x54:
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
 * Address:	80026ED4
 * Size:	000008
 */
void JSUMemoryInputStream::getLength() const
{
    /*
    .loc_0x0:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80026EDC
 * Size:	000008
 */
void JSUMemoryInputStream::getPosition() const
{
    /*
    .loc_0x0:
      lwz       r3, 0x10(r3)
      blr
    */
}