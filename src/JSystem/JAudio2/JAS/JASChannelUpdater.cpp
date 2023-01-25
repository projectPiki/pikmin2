#include "JSystem/JAS/JASChannel.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516EA0
    lbl_80516EA0:
        .float 1.0
    .global lbl_80516EA4
    lbl_80516EA4:
        .float 0.5
    .global lbl_80516EA8
    lbl_80516EA8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800A8504
 * Size:	000030
 */
JASChannelUpdater::JASChannelUpdater() { init(); }

/*
 * --INFO--
 * Address:	800A8534
 * Size:	0000C0
 */
void JASChannelUpdater::init()
{
	_00    = 1.0f;
	_04    = 1.0f;
	_08    = 0.5f;
	_0C    = 0.0f;
	_10    = 0.0f;
	_14    = 0;
	_16[0] = 0;
	_16[1] = 0;
	_16[2] = 0;
	_16[3] = 0;
	_16[4] = 0;
	_16[5] = 0;
	_16[6] = 0;
	_14    = 0x7FFF;
	_34    = 0;
	_24    = 0;
	_26[0] = 0;
	_26[1] = 0;
	_26[2] = 0;
	_42[0] = 0;
	_42[1] = 0;
	_42[2] = 0;
	_42[3] = 0;
	_42[4] = 0;
	_42[5] = 0;
	_48    = 0;
	_24    = 0x7FFF;
	_49    = 0;
	_36[0] = 0x150;
	_36[1] = 0x210;
	_36[2] = 0x352;
	_36[3] = 0x412;
	_36[4] = 0;
	_36[5] = 0;
	_4A    = 0xD;
	_4B    = 0xD;
	_4C    = 0xD;
}

/*
 * --INFO--
 * Address:	800A85F4
 * Size:	000164
 */
void JASChannelUpdater::initialUpdateChannel(JASChannel* p1, JASDsp::TChannel* p2)
{
	for (int i = 0; i < 6; i++) {
		p1->setMixConfig(i, _36[i]);
	}
	if (p1->_B0[0] == 0xFFFF) {
		p2->initAutoMixer();
	} else {
		p2->setMixerInitDelayMax(_48);
		for (u8 i = 0; i < 6; i++) {
			p2->setMixerInitDelaySamples(i, _42[i]);
		}
	}
	p1->_108 = _4A;
	p1->_109 = _4B;
	p1->_10A = _4C;
	p1->_100 = _00;
	p1->_104 = _04;
	p1->_D0  = _08;
	p1->_D8  = _0C;
	p1->_E0  = _10;
	for (u8 i = 0; i < 6; i++) {
		p2->setMixerDelaySamples(i, _42[i]);
	}
	if (_49 & 0x20) {
		p2->setIIRFilterParam(&_24);
	}
	if (_49 & 0x1F) {
		p2->setFIR8FilterParam(&_14);
	}
	p2->setFilterMode(_49);
	p2->setDistFilter(_34);
}

/*
 * --INFO--
 * Address:	800A8758
 * Size:	0000E8
 * updateChannel__17JASChannelUpdaterFP10JASChannelPQ26JASDsp8TChannel
 */
void JASChannelUpdater::updateChannel(JASChannel* p1, JASDsp::TChannel* p2)
{
	if (p1->_18 != 2) {
		p1->_100 = _00;
		p1->_104 = _04;
		p1->_D0  = _08;
		p1->_D8  = _0C;
		p1->_E0  = _10;
		for (u8 i = 0; i < 6; i++) {
			p2->setMixerDelaySamples(i, _42[i]);
		}
		if (_49 & 0x20) {
			p2->setIIRFilterParam(&_24);
		}
		if (_49 & 0x1F) {
			p2->setFIR8FilterParam(&_14);
		}
		p2->setFilterMode(_49);
		p2->setDistFilter(_34);
	}
}
