#include "Game/Entities/ItemTreasure.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/PikiMgr.h"
#include "efx/TOtakara.h"
#include "Dolphin/rand.h"
#include "PSM/WorkItem.h"
#include "VsOtakaraName.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "nans.h"

// Don't be fooled by this files name, it is NOT related to actual treasures, those are pellets/otakara
// ItemTreasure is specifically for buried treasures, its an invisible object that effectively holds
// the actual treasure in place until you kill, where the treasure becomes freed
// Why they handled buried treasures this way is beyond me

static const char UNUSED_1[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char name[]     = "itemTreasure";

namespace Game {

ItemTreasure::Mgr* ItemTreasure::mgr;

/*
 * --INFO--
 * Address:	801F316C
 * Size:	000084
 */
void ItemTreasure::FSM::init(ItemTreasure::Item* item)
{
	create(1);
	registerState(new NormalState);
}

/*
 * --INFO--
 * Address:	801F31F0
 * Size:	00000C
 */
void ItemTreasure::NormalState::init(ItemTreasure::Item* item, Game::StateArg*) { item->m_animSpeed = 0.0f; }

/*
 * --INFO--
 * Address:	801F31FC
 * Size:	000004
 */
void ItemTreasure::NormalState::exec(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F3200
 * Size:	000004
 */
void ItemTreasure::NormalState::cleanup(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F3204
 * Size:	0003C8
 */
void ItemTreasure::NormalState::onDamage(ItemTreasure::Item* item, f32 damage)
{
	if (gameSystem->m_flags & GAMESYS_Unk6 && gameSystem->m_mode == GSM_STORY_MODE && !playData->isDemoFlag(DEMO_Whites_Digging)) {
		f32 depth = item->m_pellet->getBuryDepth();
		f32 max   = item->m_pellet->getBuryDepthMax();

		// if fully buried, do the whole Whites Can See Buried Things cutscene
		if (max == depth) {
			playData->setDemoFlag(DEMO_Whites_Digging);
			MoviePlayArg arg("x14_white_dig", nullptr, nullptr, 0);
			Iterator<Piki> itPiki(pikiMgr);
			CI_LOOP(itPiki)
			{
				Piki* piki = *itPiki;
				if ((int)piki->m_pikiKind == White) {
					piki->movie_begin(false);
				}
			}
			item->movie_begin(false);
			arg.m_origin                = item->m_pellet->getPosition();
			arg.m_angle                 = item->m_pellet->getFaceDir();
			moviePlayer->m_targetObject = item->m_pellet;
			moviePlayer->play(arg);
		}
	}

	item->m_instantDamage += damage;
	item->m_currStageLife -= item->m_instantDamage;
	item->m_instantDamage = 0.0f;

	f32 maxlife  = item->getCurrMaxLife();
	f32 depthmax = item->m_pellet->getBuryDepthMax();

	item->m_totalLife = -((depthmax * 0.25f) * (damage / maxlife) - item->m_totalLife);

	if (item->m_currStageLife <= 0.0f) {
		item->m_soundObj->startSound(PSSE_EV_TREASURE_RISE_UP, 0);
		item->setLife();
	}

	if (item->m_totalLife <= 0.0f) {
		item->m_totalLife = 0.0f;
		item->releasePellet();
	}
}

/*
 * --INFO--
 * Address:	801F35CC
 * Size:	000298
 */
void ItemTreasure::Item::releasePellet()
{
	if (m_pellet) {
		m_pellet->endCapture();
		TexCaster::Caster* caster = m_pellet->m_caster;
		if (caster) {
			caster->fadein(0.5f);
		}

		f32 scale = m_pellet->getPickRadius();

		efx::ArgScale arg(m_position, scale);
		efx::TOtakaraAp efx;
		efx.create(&arg);

		m_soundObj->startSound(PSSE_EV_TREASURE_JUMP_OUT, 0);

		Vector3f velocity;
		velocity.x = 10.0f * (randFloat() - 0.5f);
		velocity.z = 10.0f * (randFloat() - 0.5f);
		velocity.y = 15.0f;

		m_pellet->setVelocity(velocity);

		if (gameSystem->isVersusMode()) {
			f32 test = randFloat() * 3.0f;
			GameMessageVsBirthTekiTreasure mesg;
			mesg.m_position = m_position;
			mesg._14        = false;
			mesg._10        = (int)test + 1;
			gameSystem->m_section->sendMessage(mesg);
		}

		m_soundEvent.finish();

		P2ASSERTLINE(327, m_soundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(m_soundObj)->eventFinish();

		setAlive(false);
		m_pellet = nullptr;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
ItemTreasure::Item::Item()
    : WorkItem(OBJTYPE_Treasure)
{
	m_mass                = 0.0f;
	m_dummyShape.m_matrix = &m_objMatrix;
	m_pellet              = nullptr;
}

/*
 * --INFO--
 * Address:	801F3864
 * Size:	000048
 */
void ItemTreasure::Item::constructor() { m_soundObj = new PSM::WorkItem(this); }

/*
 * --INFO--
 * Address:	801F38AC
 * Size:	000080
 */
void ItemTreasure::Item::onInit(CreatureInitArg*)
{
	m_model = nullptr;
	m_fsm->start(this, 0, nullptr);
	setAlive(true);
	m_collTree->createSingleSphere(&m_dummyShape, 0, m_boundingSphere, nullptr);
}

/*
 * --INFO--
 * Address:	801F392C
 * Size:	000034
 */
void StateMachine<Game::ItemTreasure::Item>::start(ItemTreasure::Item* item, int id, StateArg* arg)
{
	item->m_currentState = nullptr;
	transit(item, id, arg);
}

/*
 * --INFO--
 * Address:	801F3960
 * Size:	000044
 */
void ItemTreasure::Item::onSetPosition()
{
	updateBoundSphere();
	m_objMatrix.makeT(m_position);
}

/*
 * --INFO--
 * Address:	801F39A4
 * Size:	000048
 */
void ItemTreasure::Item::updateBoundSphere()
{
	f32 rad                     = getWorkRadius();
	m_boundingSphere.m_position = m_position;
	m_boundingSphere.m_radius   = rad;
}

/*
 * --INFO--
 * Address:	801F39EC
 * Size:	000180
 */
void ItemTreasure::Item::doAI()
{
	m_fsm->exec(this);
	m_boundingSphere.m_radius = getWorkRadius();
	updateCollTree();
	CollPart* part = m_collTree->m_part;
	part->m_radius = getWorkRadius();

	if (m_pellet) {
		f32 halfMax = (m_pellet->getBuryDepthMax() * 0.5f);
		f32 depth   = halfMax - m_totalLife;

		Matrixf mtx;
		PSMTXCopy(m_pellet->m_objMatrix.m_matrix.mtxView, mtx.m_matrix.mtxView);
		mtx.m_matrix.structView.ty = depth;
		mtx.m_matrix.structView.tx = 0.0f;
		mtx.m_matrix.structView.tz = 0.0f;
		m_pellet->updateCapture(mtx);

		if (m_totalLife >= m_pellet->getBuryDepthMax()) {
			m_pellet->m_lod.m_flags &= ~(AILOD_FLAG_NEED_SHADOW | AILOD_FLAG_VISIBLE_VP0 | AILOD_FLAG_VISIBLE_VP1);
		}
		m_pellet->m_depth = m_totalLife;
	}

	if (isAlive()) {
		int state = m_soundEvent.update();
		switch (state) {
		case 2:
			P2ASSERTLINE(406, m_soundObj->getCastType() == 10);
			static_cast<PSM::WorkItem*>(m_soundObj)->eventStop();
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	801F3B6C
 * Size:	000050
 */
void ItemTreasure::Item::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	gfx.drawSphere(m_boundingSphere.m_position, m_boundingSphere.m_radius);
}

/*
 * --INFO--
 * Address:	801F3BBC
 * Size:	00011C
 */
bool ItemTreasure::Item::getVectorField(Sys::Sphere& bounds, Vector3f& pos)
{
	Vector3f diff = m_position - bounds.m_position;
	f32 dist      = _normalise2(diff); // needs tweaking

	if (dist > getWorkRadius() + 5.0f) {
		pos = diff;
	} else {
		pos = Vector3f(0.0f);
	}
	return true;
}

/*
 * --INFO--
 * Address:	801F3CD8
 * Size:	000088
 */
f32 ItemTreasure::Item::getWorkDistance(Sys::Sphere& bounds)
{
	f32 dist = _distanceBetween(m_position, bounds.m_position);
	return dist - getWorkRadius();
}

/*
 * --INFO--
 * Address:	801F3D60
 * Size:	0000B8
 */
void ItemTreasure::Item::setTreasure(Game::Pellet* pelt)
{
	Vector3f pos = m_position;
	m_matrix.makeT(pos);
	m_pellet = pelt;
	if (m_pellet) {
		m_pellet->startCapture(&m_matrix);
		m_totalLife = m_pellet->getBuryDepth();
		if (gameSystem->m_mode == GSM_VERSUS_MODE && m_pellet->m_pelletFlag == Pellet::FLAG_VS_BEDAMA_YELLOW) {
			m_totalLife = VsOtakaraName::cBedamaYellowDepth;
		}
		m_pellet->m_depth = m_totalLife;
		setLife();
	}
}

/*
 * --INFO--
 * Address:	801F3E18
 * Size:	000030
 */
void ItemTreasure::Item::setLife() { m_currStageLife = getCurrMaxLife(); }

/*
 * --INFO--
 * Address:	801F3E48
 * Size:	000098
 */
f32 ItemTreasure::Item::getCurrMaxLife()
{
	f32 depth = m_pellet->getBuryDepthMax();
	f32 test  = m_totalLife / depth;

	if (test < 0.25f) {
		return mgr->m_parameters->m_parms.m_p003.m_value;
	} else if (test < 0.5f) {
		return mgr->m_parameters->m_parms.m_p002.m_value;
	} else if (test < 0.75f) {
		return mgr->m_parameters->m_parms.m_p001.m_value;
	} else {
		return mgr->m_parameters->m_parms.m_p000.m_value;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void ItemTreasure::Item::createTreasure()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F3EE0
 * Size:	00011C
 */
bool ItemTreasure::Item::interactAttack(Game::InteractAttack& act)
{
	State* cState = m_currentState;
	if (cState) {
		cState->onDamage(this, act.m_damage);

		int id = m_soundEvent.event();
		switch (id) {
		case 1:
			P2ASSERTLINE(555, m_soundObj->getCastType() == 10);
			static_cast<PSM::WorkItem*>(m_soundObj)->eventStart();
			break;
		case 3:
			P2ASSERTLINE(561, m_soundObj->getCastType() == 10);
			static_cast<PSM::WorkItem*>(m_soundObj)->eventRestart();
			break;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	801F3FFC
 * Size:	000004
 */
void ItemTreasure::State::onDamage(Game::ItemTreasure::Item*, float) { }

/*
 * --INFO--
 * Address:	801F4000
 * Size:	000058
 */
f32 ItemTreasure::Item::getWorkRadius()
{
	if (!m_pellet) {
		return 10.0f;
	}

	return m_pellet->getBuryRadius(1.0f - m_totalLife / m_pellet->getBuryDepthMax());
}

/*
 * --INFO--
 * Address:	801F4058
 * Size:	000060
 */
bool ItemTreasure::Item::isVisible() { return (!m_pellet) ? false : !(m_totalLife / m_pellet->getBuryDepthMax() > 0.85f); }

/*
 * --INFO--
 * Address:	801F40B8
 * Size:	0000B0
 */
bool ItemTreasure::Item::ignoreAtari(Game::Creature* obj)
{
	bool check;
	if (!m_pellet) {
		check = false;
	} else if (m_totalLife / m_pellet->getBuryDepthMax() > 0.85f) {
		check = false;
	} else {
		check = true;
	}

	if (!check) {
		Piki* piki = static_cast<Piki*>(obj);
		if (piki->isPiki() && (int)piki->m_pikiKind == White) {
			return false;
		} else {
			return true;
		}
	} else {
		return false;
	}
	return false;
}

/*
 * --INFO--
 * Address:	801F4168
 * Size:	000114
 */
ItemTreasure::Mgr::Mgr()
{
	m_itemName            = "Treasure";
	m_objectPathComponent = "user/kando/objects/treasure";
	m_parameters          = new TreasureParms;

	void* file = JKRDvdRipper::loadToMainRAM("user/Abe/item/treasureParms.txt", nullptr, (JKRExpandSwitch)0, 0, nullptr,
	                                         (JKRDvdRipper::EAllocDirection)2, 0, nullptr, nullptr);
	if (file) {
		RamStream stm(file, -1);
		stm.resetPosition(true, 1);
		m_parameters->read(stm);
		delete[] file;
	}
}

/*
 * --INFO--
 * Address:	801F427C
 * Size:	000024
 */
void ItemTreasure::TreasureParms::read(Stream& stm) { m_parms.read(stm); }

/*
 * --INFO--
 * Address:	801F42A0
 * Size:	0002A0
 */
ItemTreasure::TreasureParms::TreasureParms() { }

/*
 * --INFO--
 * Address:	801F4540
 * Size:	000130
 */
BaseItem* ItemTreasure::Mgr::birth()
{
	Item* item = new Item;
	entry(item);
	return item;
}

/*
 * --INFO--
 * Address:	801F4670
 * Size:	000060
 */
BaseItem* ItemTreasure::Mgr::generatorBirth(Vector3f& pos, Vector3f&, GenItemParm*)
{
	BaseItem* item = birth();
	item->init(nullptr);
	item->setPosition(pos, false);
	return item;
}

/*
 * --INFO--
 * Address:	801F46D0
 * Size:	000004
 */
void ItemTreasure::Mgr::onLoadResources() { }

/*
 * --INFO--
 * Address:	801F46D4
 * Size:	000134
 */
ItemTreasure::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	801F4808
 * Size:	000118
 */
BaseItem* ItemTreasure::Mgr::doNew() { return new Item; }

/*
 * --INFO--
 * Address:	801F4920
 * Size:	00000C
 */
u32 ItemTreasure::Mgr::generatorGetID() { return 'trsr'; }

/*
 * --INFO--
 * Address:	801F492C
 * Size:	00000C
 */
char* ItemTreasure::Item::getCreatureName() { return "Treasure"; }

/*
 * --INFO--
 * Address:	801F4938
 * Size:	000008
 */
Matrixf* ItemTreasure::Item::DummyShape::getMatrix(int) { return m_matrix; }

/*
 * --INFO--
 * Address:	801F4948
 * Size:	000034
 */
void FSMItem<Game::ItemTreasure::Item, Game::ItemTreasure::FSM, Game::ItemTreasure::State>::doAI()
{
	m_fsm->exec((ItemTreasure::Item*)this);
}

/*
 * --INFO--
 * Address:	801F497C
 * Size:	000004
 */
void ItemState<Game::ItemTreasure::Item>::onDamage(ItemTreasure::Item*, f32) { }

/*
 * --INFO--
 * Address:	801F4980
 * Size:	000004
 */
void ItemState<Game::ItemTreasure::Item>::onKeyEvent(ItemTreasure::Item* item, const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801F4984
 * Size:	000004
 */
void ItemState<Game::ItemTreasure::Item>::onBounce(ItemTreasure::Item*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801F4988
 * Size:	000004
 */
void ItemState<Game::ItemTreasure::Item>::onPlatCollision(ItemTreasure::Item*, PlatEvent&) { }

/*
 * --INFO--
 * Address:	801F498C
 * Size:	000004
 */
void ItemState<Game::ItemTreasure::Item>::onCollision(ItemTreasure::Item*, CollEvent&) { }

/*
 * --INFO--
 * Address:	801F4990
 * Size:	000004
 */
void FSMState<Game::ItemTreasure::Item>::init(ItemTreasure::Item*, StateArg*) { }

/*
 * --INFO--
 * Address:	801F4994
 * Size:	000004
 */
void FSMState<Game::ItemTreasure::Item>::exec(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F4998
 * Size:	000004
 */
void FSMState<Game::ItemTreasure::Item>::cleanup(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F499C
 * Size:	000004
 */
void FSMState<Game::ItemTreasure::Item>::resume(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F49A0
 * Size:	000004
 */
void FSMState<Game::ItemTreasure::Item>::restart(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F49A4
 * Size:	000030
 */
void FSMState<Game::ItemTreasure::Item>::transit(ItemTreasure::Item* item, int id, StateArg* arg)
{
	m_stateMachine->transit(item, id, arg);
}

/*
 * --INFO--
 * Address:	801F49D4
 * Size:	000004
 */
void StateMachine<ItemTreasure::Item>::init(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F49D8
 * Size:	000038
 */
void StateMachine<ItemTreasure::Item>::exec(ItemTreasure::Item* item)
{
	if (item->m_currentState) {
		item->m_currentState->exec(item);
	}
}

/*
 * --INFO--
 * Address:	801F4A10
 * Size:	000064
 */
void StateMachine<ItemTreasure::Item>::create(int count)
{
	m_limit          = count;
	m_count          = 0;
	m_states         = new FSMState<ItemTreasure::Item>*[m_limit];
	m_indexToIDArray = new int[m_limit];
	m_idToIndexArray = new int[m_limit];
}

/*
 * --INFO--
 * Address:	801F4A74
 * Size:	00009C
 */
void StateMachine<ItemTreasure::Item>::transit(ItemTreasure::Item* obj, int id, StateArg* arg)
{
	int index                  = m_idToIndexArray[id];
	ItemTreasure::State* state = obj->m_currentState;
	if (state) {
		state->cleanup(obj);
		m_currentID = state->m_id;
	}

	ASSERT_HANG(index < m_limit);

	state               = static_cast<ItemTreasure::State*>(m_states[index]);
	obj->m_currentState = state;
	state->init(obj, arg);
}

/*
 * --INFO--
 * Address:	801F4B10
 * Size:	000084
 */
void StateMachine<ItemTreasure::Item>::registerState(FSMState<Game::ItemTreasure::Item>* newState)
{
	// copied all this from enemyFSM.cpp, do we actually need it here? no idea
	bool check;
	if (m_count >= m_limit) {
		return;
	}
	m_states[m_count] = newState;
	// TODO: This looks weird. How would they really have written it?
	if (!(0 <= newState->m_id && newState->m_id < m_limit)) {
		check = false;
	} else {
		check = true;
	}
	if (check == false) {
		return;
	}
	newState->m_stateMachine         = this;
	m_indexToIDArray[m_count]        = newState->m_id;
	m_idToIndexArray[newState->m_id] = m_count;
	m_count++;
}

/*
 * --INFO--
 * Address:	801F4B94
 * Size:	000044
 */
void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::onKeyEvent(const SysShape::KeyEvent& event)
{
	ItemState<ItemTreasure::Item>* state = m_currentState;
	if (state) {
		state->onKeyEvent((ItemTreasure::Item*)this, event);
	}
}

/*
 * --INFO--
 * Address:	801F4BD8
 * Size:	000044
 */
void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::platCallback(PlatEvent& event)
{
	ItemState<ItemTreasure::Item>* state = m_currentState;
	if (state) {
		state->onPlatCollision((ItemTreasure::Item*)this, event);
	}
}

/*
 * --INFO--
 * Address:	801F4C1C
 * Size:	000044
 */
void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::collisionCallback(CollEvent& event)
{
	ItemState<ItemTreasure::Item>* state = m_currentState;
	if (state) {
		state->onCollision((ItemTreasure::Item*)this, event);
	}
}

/*
 * --INFO--
 * Address:	801F4C60
 * Size:	000044
 */
void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::bounceCallback(Sys::Triangle* tri)
{
	ItemState<ItemTreasure::Item>* state = m_currentState;
	if (state) {
		state->onBounce((ItemTreasure::Item*)this, tri);
	}
}

} // namespace Game
