#include "Game/plantsMgr.h"

namespace Game {
/*
 * --INFO--
 * Address:	80353D4C
 * Size:	000064
 */
Tanpopo::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "タンポポマネージャ"; // dandelion manager
}

/*
 * --INFO--
 * Address:	80353DB0
 * Size:	000048
 */
void Tanpopo::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80353DF8
 * Size:	000020
 */
EnemyBase* Tanpopo::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80353E18
 * Size:	000064
 */
Clover::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "クローバーマネージャ"; // clover manager
}

/*
 * --INFO--
 * Address:	80353E7C
 * Size:	000048
 */
void Clover::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80353EC4
 * Size:	000020
 */
EnemyBase* Clover::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80353EE4
 * Size:	000064
 */
HikariKinoko::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "ヒカリキノコマネージャ"; // hikari mushroom manager
}

/*
 * --INFO--
 * Address:	80353F48
 * Size:	000048
 */
void HikariKinoko::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80353F90
 * Size:	000020
 */
EnemyBase* HikariKinoko::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80353FB0
 * Size:	000064
 */
Ooinu_s::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "おおいぬふぐり（小）マネージャ"; // oinu fuguri (small) manager
}

/*
 * --INFO--
 * Address:	80354014
 * Size:	000048
 */
void Ooinu_s::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	8035405C
 * Size:	000020
 */
EnemyBase* Ooinu_s::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	8035407C
 * Size:	000064
 */
KareOoinu_s::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "枯れおおいぬふぐり（小）マネージャ"; // withered dog fuguri (small) manager
}

/*
 * --INFO--
 * Address:	803540E0
 * Size:	000048
 */
void KareOoinu_s::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354128
 * Size:	000020
 */
EnemyBase* KareOoinu_s::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354148
 * Size:	000064
 */
Ooinu_l::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "おおいぬふぐり（大）マネージャ"; // big dog fuguri (large) manager
}

/*
 * --INFO--
 * Address:	803541AC
 * Size:	000048
 */
void Ooinu_l::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	803541F4
 * Size:	000020
 */
EnemyBase* Ooinu_l::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354214
 * Size:	000064
 */
KareOoinu_l::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "枯れおおいぬふぐり（大）マネージャ"; // withered dog fuguri (large) manager
}

/*
 * --INFO--
 * Address:	80354278
 * Size:	000048
 */
void KareOoinu_l::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	803542C0
 * Size:	000020
 */
EnemyBase* KareOoinu_l::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	803542E0
 * Size:	000064
 */
Wakame_s::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "若芽（小）マネージャ"; // sprout (small) manager
}

/*
 * --INFO--
 * Address:	80354344
 * Size:	000048
 */
void Wakame_s::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	8035438C
 * Size:	000020
 */
EnemyBase* Wakame_s::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	803543AC
 * Size:	000064
 */
Wakame_l::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "若芽（大）マネージャ"; // sprout (large) manager
}

/*
 * --INFO--
 * Address:	80354410
 * Size:	000048
 */
void Wakame_l::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354458
 * Size:	000020
 */
EnemyBase* Wakame_l::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354478
 * Size:	000064
 */
Tukushi::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "つくしマネージャ"; // tsukushi manager
}

/*
 * --INFO--
 * Address:	803544DC
 * Size:	000048
 */
void Tukushi::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354524
 * Size:	000020
 */
EnemyBase* Tukushi::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354544
 * Size:	000064
 */
Watage::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "綿毛マネージャ"; // fluff manager
}

/*
 * --INFO--
 * Address:	803545A8
 * Size:	000048
 */
void Watage::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	803545F0
 * Size:	000020
 */
EnemyBase* Watage::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354610
 * Size:	000064
 */
DiodeRed::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "赤ダイオードマネージャ"; // red diode manager
}

/*
 * --INFO--
 * Address:	80354674
 * Size:	000048
 */
void DiodeRed::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	803546BC
 * Size:	000020
 */
EnemyBase* DiodeRed::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	803546DC
 * Size:	000064
 */
DiodeGreen::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "青ダイオードマネージャ"; // blue diode manager
}

/*
 * --INFO--
 * Address:	80354740
 * Size:	000048
 */
void DiodeGreen::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354788
 * Size:	000020
 */
EnemyBase* DiodeGreen::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	803547A8
 * Size:	000064
 */
Margaret::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "マーガレットマネージャ"; // margaret manager
}

/*
 * --INFO--
 * Address:	8035480C
 * Size:	000048
 */
void Margaret::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354854
 * Size:	000020
 */
EnemyBase* Margaret::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354874
 * Size:	000064
 */
Nekojarashi::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "ねこじゃらしマネージャ"; // nekojyarashi manager
}

/*
 * --INFO--
 * Address:	803548D8
 * Size:	000048
 */
void Nekojarashi::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354920
 * Size:	000020
 */
EnemyBase* Nekojarashi::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354940
 * Size:	000064
 */
Chiyogami::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "千代紙マネージャ"; // chiyogami manager
}

/*
 * --INFO--
 * Address:	803549A4
 * Size:	000048
 */
void Chiyogami::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	803549EC
 * Size:	000020
 */
EnemyBase* Chiyogami::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	80354A0C
 * Size:	000064
 */
Zenmai::Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "ぜんまいマネージャ"; // mainspring manager
}

/*
 * --INFO--
 * Address:	80354A70
 * Size:	000048
 */
void Zenmai::Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	80354AB8
 * Size:	000020
 */
EnemyBase* Zenmai::Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }
} // namespace Game
