# Writing Code
This document will outline some basic principles of writing code for this project, and some examples.

## Clean Code
The size of the project requires a lot of repeated code, here are some commonly used examples to help you practice clean and concise code.

### General
- ```randFloat()``` generates a random float from 0 to 1.
- ```randWeightFloat(f32 range)``` is shorthand for ```(range * (f32)rand()) / 32768.0f;```, which generates a random number from 0 to `range`.
- You may run into code that looks akin to:
```
iterator.first();
while (!iterator.isDone()) {
	Code
	iterator.next();
}
```
Which we have further condensed into:
```
CI_LOOP(iterator) {
	Code
}
```
- You may run into code that looks akin to:
```
if (x*x + z*z < r) {
	
}
```
Which, for enemies, you may want to look at the ```isCreatureWithinRange``` function, otherwise you can use the ```IS_WITHIN_CIRCLE``` define, which squares and compares for you.
- ```SET_FLAG(x, val)``` is shorthand for ```x |= val```.
- ```RESET_FLAG(x, val)``` is shorthand for ```x &= ~val```.
- ```P2ASSERT()``` along with other defines can be found within ```JSystem/JUT```, we recommend you acquaint yourself with this file, as it shows up constantly within the Pikmin 2 codebase.
- You can find more in types.h, trig.h, BuildSettings.h and Dolphin/Math.h.

### Enemies
- ```CG_PARMS(x)``` is shorthand for ```static_cast<Parms*>(x->mParms)```.
- ```C_PARMS``` is shorthand for ```static_cast<Parms*>(this->mParms)```.
- ```CG_PROPERPARMS(x)``` is shorthand for ```static_cast<Parms*>(x->mParms)->mProperParms```.
- ```C_PROPERPARMS``` is shorthand for ```static_cast<Parms*>(this->mParms)->mProperParms```.
