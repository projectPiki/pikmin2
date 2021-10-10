.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.global __vt__7TagParm
__vt__7TagParm:
  .4byte 0
  .4byte 0
  .4byte doWrite__7TagParmFR6Stream
  .4byte doRead__7TagParmFR6Stream
  .4byte flushValue__7TagParmFv
  .4byte doDump__7TagParmFv
