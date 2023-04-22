#ifndef _ERRNO_H
#define _ERRNO_H

#ifdef __cplusplus
extern "C" {
#endif

// Error constants
#define E2BIG        7
#define EACCES       13
#define EAGAIN       11
#define EBADF        9
#define EBUSY        16
#define ECHILD       10
#define EDEADLK      35
#define EDEADLOCK    EDEADLK
#define EDOM         33
#define EEXIST       17
#define EFAULT       14
#define EFBIG        27
#define EFPOS        40
#define EILSEQ       88
#define EINTR        4
#define EINVAL       22
#define EIO          5
#define EISDIR       21
#define EMFILE       24
#define EMLINK       31
#define ENFILE       23
#define ENAMETOOLONG 36
#define ENODEV       19
#define ENOENT       2
#define ENOERR       0
#define ENOEXEC      8
#define ENOLCK       77
#define ENOMEM       12
#define ENOSPC       28
#define ENOSYS       38
#define ENOTDIR      20
#define ENOTEMPTY    39
#define ENOTTY       25
#define ENXIO        6
#define EPERM        1
#define EPIPE        32
#define ERANGE       34
#define EROFS        30
#define ESIGPARM     26
#define ESPIPE       29
#define ESRCH        3
#define EUNKNOWN     99
#define EXDEV        18

extern int errno;

#ifdef __cplusplus
}
#endif

#endif
