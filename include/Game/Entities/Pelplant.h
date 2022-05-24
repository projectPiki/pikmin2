#ifndef _GAME_ENTITIES_PELPLANT_H
#define _GAME_ENTITIES_PELPLANT_H

#include "types.h"
#include "CNode.h"
#include "id32.h"
#include "Graphics.h"
#include "stream.h"

namespace Game {
struct Generator;
struct EnemyGeneratorBase : public CNode {
	EnemyGeneratorBase(char* name)
	    : CNode(name)
	    , m_version('????')
	{
	}
	virtual ~EnemyGeneratorBase() {};         // _08
	virtual void doWrite(Stream&);            // _10
	virtual void doRead(Stream&);             // _14
	virtual u32 getLatestVersion();           // _18
	virtual void draw(Graphics&, Generator*); // _1C

	// _00 VTBL

	ID32 m_version; // _18
};

namespace Pelplant {
struct Generator : public EnemyGeneratorBase {
	Generator();
	virtual ~Generator() {};                                   // _08
	virtual void doWrite(Stream&);                             // _10
	virtual void doRead(Stream&);                              // _14
	virtual u32 getLatestVersion() { return '0001'; };         // _18
	virtual void* getInitialParam() { return &m_pelletType; }; // _20
	// getInitialParam returns address of first parameter

	// _00 VTBL

	u8 m_pelletType; // _24
	u8 m_pelletSize; // _25
	u8 m_size;       // _26

	void doReadOldVersion(Stream&);
};
} // namespace Pelplant
} // namespace Game

#endif
