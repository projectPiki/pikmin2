#include "Screen/screenObj.h"

namespace Screen {

/**
 * NB:
 * All functions in this file are either unused, inlined, or weak.
 * The weak functions are likely generated from unused methods of
 * an unused struct (og::newScreen::TestScene) and its (unused) vtable.
 *
 * This fake function is just here to generate the weak methods in the correct order
 * without having to recreate the unused test struct vtable and inheritance.
 * - HP
 */

static void fakeTestSceneFunc(SceneBase* base, Graphics& gfx, SetSceneArg& arg, EndSceneArg*& endArg)
{
	base->doGetFinishState();
	base->doSetBackupScene(arg);
	base->setDefaultDispMember();
	base->doConfirmEndScene(endArg);
	base->doConfirmStartScene(nullptr);
	base->doConfirmSetScene(arg);
	base->setPort(gfx);
	base->isDrawInDemo();
	base->isUseBackupSceneInfo();
}
} // namespace Screen
