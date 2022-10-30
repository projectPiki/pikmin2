# Class definitions in header files
When writing code for the project, you will have to create definitions of classes.
Sometimes it is not entirely obvious where a class will be situated, so this file will aim to keep documentation regarding the location of those header files.
Please note that this list will not be exhaustive nor will it be completely up-to-date all the time.
Furthermore, always perform a search of the project for your target structure or namespace before creating a new header file.

## Game
- `BaseHIOParms`, `BaseHIOSection`, `HIORootNode` can be found in `Game/BaseHIO.h`
- `TPositionObject`, `CollNode`, `CollisionBuffer`, `CellLeg`, `Cell`, `CellObject`, `CellLayer`, `CellPyramid`, `CellIteratorArg`, `CellIterator` can be found in `cellPyramid.h`