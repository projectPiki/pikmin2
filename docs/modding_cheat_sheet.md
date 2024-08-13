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
The `Game::WaterBox` class is responsible for managing water volumes within the game environment. It offers a variety of functions to handle water collisions, retrieve water heights, and execute water-related operations. The class is further extended by subclasses to cater to specific needs.

#### AABBWaterBox

This subclass is designed to represent a rectangular water volume. It provides functionalities for:

- **2D and 3D Water Collision Checks**: Determines if a given sphere collides with the water volume.
- **Water Level Management**: Retrieves the water surface level, considering any lowering effects.
- **Water Volume Control**: Allows for the lowering or raising of the water volume over time.

##### Key Functions

- `inWater(Sys::Sphere&)`: Checks whether a sphere collides with the water.
- `getSeaLevel()`: Returns the current level of the water surface.
- `update()`: Performs updates on the water state, such as lowering the water in `AABBWaterBox`.
- `startDown(f32)`: Initiates the process of lowering the water volume by a specified amount (exclusive to `AABBWaterBox`).
- `startUp(f32)`: Begins raising the water volume by a specified amount (exclusive to `AABBWaterBox`).