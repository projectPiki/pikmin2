# Game Modding Cheat Sheet

This cheat sheet provides an overview of the game's functions and classes that are of interest to modders. It aims to help you understand the game's structure and guide you in your modding efforts.

## Functions of Interest

### In plugProjectYamashitaU/enemyBase.cpp
- `bool EnemyBase::eatWhitePikminCallBack`: What happens when an enemy eats a white Pikmin.
- `bool EnemyBase::bombCallBack`: What happens when an enemy gets hit by an exploding bomb.
- `bool EnemyBase::dopeCallBack`: What happens when an enemy gets hit by either spray (bitter or spicy).
- `bool EnemyBase::hipdropCallBack`: What happens when an enemy gets stunned by a Purple Pikmin
- `bool EnemyBase::damageCallBack` / `void EnemyBase::addDamage`: What happens when an enemy gets damaged


## Classes of Interest

### EnemyBase - Basic Enemy functions


