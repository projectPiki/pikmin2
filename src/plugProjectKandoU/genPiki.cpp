#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_genPiki_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F788
    lbl_8047F788:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
        .4byte 0x50494B4D
        .4byte 0x494E2082
        .4byte 0xF0835A83
        .4byte 0x62836700
        .4byte 0x8EA98A88
        .4byte 0x28313D79
        .4byte 0x65732900
    .global lbl_8047F7B0
    lbl_8047F7B0:
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x82F094AD
        .4byte 0x90B60000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8047F7CC
    lbl_8047F7CC:
        .4byte 0x67656E50
        .4byte 0x696B692E
        .4byte 0x63707000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B56A8
    lbl_804B56A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game13GenObjectPiki
    __vt__Q24Game13GenObjectPiki:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenBaseFR6Stream
        .4byte ramSaveParameters__Q24Game13GenObjectPikiFR6Stream
        .4byte ramLoadParameters__Q24Game13GenObjectPikiFR6Stream
        .4byte doEvent__Q24Game7GenBaseFUl
        .4byte doRead__Q24Game7GenBaseFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenBaseFv
        .4byte updateUseList__Q24Game9GenObjectFPQ24Game9Generatori
        .4byte generate__Q24Game13GenObjectPikiFPQ24Game9Generator
        .4byte birth__Q24Game13GenObjectPikiFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game9GenObjectFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A40
    lbl_80515A40:
        .skip 0x4
    .global lbl_80515A44
    lbl_80515A44:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519278
    lbl_80519278:
        .4byte 0x90460000
    .global lbl_8051927C
    lbl_8051927C:
        .4byte 0x90940000
    .global lbl_80519280
    lbl_80519280:
        .4byte 0x00000000
    .global lbl_80519284
    lbl_80519284:
        .4byte 0x47000000
    .global lbl_80519288
    lbl_80519288:
        .4byte 0x40C90FDB
    .global lbl_8051928C
    lbl_8051928C:
        .4byte 0x41200000
    .global lbl_80519290
    lbl_80519290:
        .4byte 0x43A2F983
    .global lbl_80519294
    lbl_80519294:
        .4byte 0xC3A2F983
    .global lbl_80519298
    lbl_80519298:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805192A0
    lbl_805192A0:
        .4byte 0x64616D65
        .4byte 0x0A000000
*/

#include "Game/gameGenerator.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	801AC3C0
 * Size:	000128
 */
Game::GenObject* makeObjectPiki() { return new Game::GenObjectPiki(); }

namespace Game {
/*
 * --INFO--
 * Address:	801AC4E8
 * Size:	00008C
 */
void GenObjectPiki::initialise(void)
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory->m_count < factory->m_limit) {
		factory->m_factories[factory->m_count].m_typeID       = 'piki';
		factory->m_factories[factory->m_count].m_makeFunction = makeObjectPiki;
		factory->m_factories[factory->m_count].m_name         = "ƒsƒNƒ~ƒ“‚ð”­¶"; // generate navi(gation)
		factory->m_factories[factory->m_count].m_version      = '0001';
		factory->m_count++;
	}
}

/*
 * --INFO--
 * Address:	801AC574
 * Size:	00002C
 */
void GenObjectPiki::ramSaveParameters(Stream& stream) { stream.writeByte(m_colourParm.m_value); }

/*
 * --INFO--
 * Address:	801AC5A0
 * Size:	000038
 */
void GenObjectPiki::ramLoadParameters(Stream& stream) { m_colourParm.m_value = stream.readByte(); }

/*
 * --INFO--
 * Address:	801AC5D8
 * Size:	000258
 * TODO: Finish function!! nonmatching
 */
Creature* GenObjectPiki::generate(Game::Generator* gen)
{
	Vector3f pos = gen->m_position + gen->m_offset;

	for (int i = 0; i < m_amountParm.m_value; i++) {
		f32 randRot    = randWeightFloat(TAU);
		f32 randRadius = randWeightFloat(10.0f);

		if (m_colourParm.m_value == Yellow && m_isWildPikminParm.m_value == 1) {
			randRadius = 0.0f;
		}

		Game::GenArg genArg;
		genArg.m_position = Vector3f(pos.x + randRadius * pikmin2_sinf(randRadius), pos.y, pos.z + pikmin2_cosf(randRadius));
		return birth(&genArg);
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	801AC830
 * Size:	0001B0
 */
Creature* GenObjectPiki::birth(Game::GenArg* arg)
{
	if (m_isWildPikminParm.m_value == 1) {
		int color = m_colourParm.m_value;

		if (playData->hasBootContainer(color)) {
			return nullptr;
		} else if (playData->hasMetPikmin(color)) {
			return nullptr;
		}

		Piki* newPiki = pikiMgr->birth();
		if (newPiki) {
			newPiki->init(nullptr);
			newPiki->setPosition(arg->m_position, false);
			newPiki->changeShape(color);
			newPiki->changeHappa(Leaf);

			newPiki->setZikatu(true);
			GameStat::zikatuPikis.inc(color);
		}

		return newPiki;
	} else if (!playData->_18) {
		return nullptr;
	}

	getLatestVersion();
	int color = m_colourParm.m_value;

	Piki* newPiki = pikiMgr->birth();
	if (newPiki) {
		newPiki->init(nullptr);
		newPiki->setPosition(arg->m_position, false);
		newPiki->changeShape(color);
		newPiki->changeHappa(Leaf);
		JUT_ASSERTLINE(184, !newPiki->isZikatu(), "dame\n");
	}

	return newPiki;
}

} // namespace Game
