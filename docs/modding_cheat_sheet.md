# Game Modding Cheat Sheet

This cheat sheet provides an overview of the game's functions and classes that are of interest to modders. It aims to help you understand the game's structure and guide you in your modding efforts.an example of somthing that would go in this sheet would be like an array that holds all the enemy ids and just general stuff like that that would help with mods like new enemys or purple and white onions.also these files or functions MUST be linked due to the fact nonlinked can cause some issues to not being fully matched.

## Files of Interest
## In Project plugProjectKandoU
- `pikiMgr.cpp`: The Manger for the pikmin and contains code for stuff such as j3d model loader stuff for the models and also load bmd lines for the pikis
- `onyonMgr.cpp`: The Manger for the onyons and with the load resource lines for the onyons and has the ability to be edited for purple and white onyons.
## In Project plugProjectKandoU
- `onyonMgr.cpp`:
## Functions of Interest
### In plugProjectYamashitaU/enemyBase.cpp
- `bool EnemyBase::eatWhitePikminCallBack`: What happens when an enemy eats a white Pikmin.
- `bool EnemyBase::bombCallBack`: What happens when an enemy gets hit by an exploding bomb.
- `bool EnemyBase::dopeCallBack`: What happens when an enemy gets hit by either spray (bitter or spicy).
- `bool EnemyBase::hipdropCallBack`: What happens when an enemy gets stunned by a Purple Pikmin
- `bool EnemyBase::damageCallBack` / `void EnemyBase::addDamage`: What happens when an enemy gets damaged


## Classes of Interest
### EnemyBase - Basic Enemy functions



## Variables of Interest

