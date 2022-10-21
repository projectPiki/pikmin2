#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/JUT/JUTFader.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8JUTFader
    __vt__8JUTFader:
        .4byte 0
        .4byte 0
        .4byte __dt__8JUTFaderFv
        .4byte startFadeIn__8JUTFaderFi
        .4byte startFadeOut__8JUTFaderFi
        .4byte draw__8JUTFaderFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516658
    lbl_80516658:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	8002CE5C
 * Size:	0000AC
 */
JUTFader::JUTFader(int p1, int p2, int p3, int p4, JUtility::TColor color)
    : m_color(color)
    , m_viewBox(p1, p2, p1 + p3, p2 + p4)
{
	m_status      = Status_Out;
	m_ticksTarget = 0;
	m_ticksRun    = 0;
	_24           = Status_Out;
	_20           = -1;
}

/*
 * --INFO--
 * Address:	8002CF08
 * Size:	000100
 */
void JUTFader::control()
{
	if (0 <= _20 && --_20 == 0) {
		m_status = _24;
	}
	if (m_status == Status_In) {
		return;
	}
	switch (m_status) {
	case Status_Out:
		m_color.a = 0xFF;
		break;
	case Status_FadingIn:
		// _0A++;
		m_color.a = ((++m_ticksRun * 0xFF) / m_ticksTarget) - 0xFF;
		if (m_ticksRun >= m_ticksTarget) {
			m_status = Status_In;
		}
		break;
	case Status_FadingOut:
		// _0A++;
		m_color.a = ((++m_ticksRun * 0xFF) / m_ticksTarget);
		if (m_ticksRun >= m_ticksTarget) {
			m_status = Status_Out;
		}
		break;
	}
	draw();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x20(r3)
	cmpwi    r4, 0
	blt      lbl_8002CF34
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	bne      lbl_8002CF34
	lwz      r0, 0x24(r3)
	stw      r0, 4(r3)

lbl_8002CF34:
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_8002CFF8
	cmpwi    r0, 2
	beq      lbl_8002CF70
	bge      lbl_8002CF58
	cmpwi    r0, 0
	beq      lbl_8002CF64
	b        lbl_8002CFE8

lbl_8002CF58:
	cmpwi    r0, 4
	bge      lbl_8002CFE8
	b        lbl_8002CFB0

lbl_8002CF64:
	li       r0, 0xff
	stb      r0, 0xf(r3)
	b        lbl_8002CFE8

lbl_8002CF70:
	lhz      r4, 0xa(r3)
	addi     r0, r4, 1
	sth      r0, 0xa(r3)
	clrlwi   r0, r0, 0x10
	mulli    r4, r0, 0xff
	lhz      r0, 8(r3)
	divw     r0, r4, r0
	subfic   r0, r0, 0xff
	stb      r0, 0xf(r3)
	lhz      r4, 0xa(r3)
	lhz      r0, 8(r3)
	cmplw    r4, r0
	blt      lbl_8002CFE8
	li       r0, 1
	stw      r0, 4(r3)
	b        lbl_8002CFE8

lbl_8002CFB0:
	lhz      r4, 0xa(r3)
	addi     r0, r4, 1
	sth      r0, 0xa(r3)
	clrlwi   r0, r0, 0x10
	mulli    r4, r0, 0xff
	lhz      r0, 8(r3)
	divw     r0, r4, r0
	stb      r0, 0xf(r3)
	lhz      r4, 0xa(r3)
	lhz      r0, 8(r3)
	cmplw    r4, r0
	blt      lbl_8002CFE8
	li       r0, 0
	stw      r0, 4(r3)

lbl_8002CFE8:
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8002CFF8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002D008
 * Size:	000090
 */
void JUTFader::draw()
{
	if (m_color.a == 0) {
		return;
	}
	J2DOrthoGraph orthograph;
	orthograph.setColor(m_color);
	orthograph.fillBox(m_viewBox);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTFader::start(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D098
 * Size:	000030
 */
bool JUTFader::startFadeIn(int duration)
{
	bool isStarting = (m_status == Status_Out);
	if (isStarting) {
		m_status      = Status_FadingIn;
		m_ticksRun    = 0;
		m_ticksTarget = duration;
	}
	return isStarting;
}

/*
 * --INFO--
 * Address:	8002D0C8
 * Size:	000034
 */
bool JUTFader::startFadeOut(int duration)
{
	bool isStarting = (m_status == Status_In);
	if (isStarting) {
		m_status      = Status_FadingOut;
		m_ticksRun    = 0;
		m_ticksTarget = duration;
	}
	return isStarting;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JUTFader::setStatus(JUTFader::EStatus, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D0FC
 * Size:	000048
 * __dt__8JUTFaderFv
 */
// JUTFader::~JUTFader()
// {
// }
