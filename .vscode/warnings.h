// disables the "too many characters in character constant" intellisense error, because we have u64 constants all over the place
#pragma diag_suppress 26
// disables the "invalid multibyte character sequence" error since we have to escape shift-jis misreads a lot
#pragma diag_suppress 870
// disables the "invalid arguments for operator new" error (thanks jsystem)
#pragma diag_suppress 1767
// disables the "invalid union member" error (thanks JASTrack)
#pragma diag_suppress 294