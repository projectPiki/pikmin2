# Game Modding Cheat Sheet

This cheat sheet provides an overview of the game's functions and classes that are of interest to modders. It aims to help you understand the game's structure and guide you in your modding efforts.

## Functions of Interest

### Enemy Functionality
#### plugProjectYamashitaU/enemyBase.cpp
- `bool EnemyBase::eatWhitePikminCallBack`: What happens when an enemy eats a white Pikmin.
- `bool EnemyBase::bombCallBack`: What happens when an enemy gets hit by an exploding bomb.
- `bool EnemyBase::dopeCallBack`: What happens when an enemy gets hit by either spray (bitter or spicy).
- `bool EnemyBase::hipdropCallBack`: What happens when an enemy gets stunned by a Purple Pikmin
- `bool EnemyBase::damageCallBack` / `void EnemyBase::addDamage`: What happens when an enemy gets damaged


## Classes of Interest

### Radar
The Radar class stores this information in structs called `Point`. Each `Point` represents a position on the map and holds details about the object found there, its type (from the `cRadarType` enum), and potentially a cave ID. To manage the radar, use the `Mgr` class by writing `Radar::mgr`. This class lets you add new objects to the radar, calculate the nearest treasure from a position, clear the radar, and remove objects from the radar.

### Waterbox
The Game::WaterBox class manages water volumes in the game world. It defines different functions to check for water collision, get water height, and perform water-related actions. There are subclasses that provide specific functionalities:

AABBWaterBox: This subclass represents a rectangular water volume. It allows you to check for 2D and 3D water collision, get the water level considering a lowering effect, and control the lowering or raising of the water volume.
Here's a breakdown of some key functions you might use:

inWater(Sys::Sphere&): Checks if a sphere collides with the water.
getSeaLevel(): Gets the current water surface level.
update(): Updates the water state (e.g., lowering water in AABBWaterBox).
startDown(f32): Starts lowering the water volume by a specified amount (AABBWaterBox only).
startUp(f32): Starts raising the water volume by a specified amount (AABBWaterBox only).