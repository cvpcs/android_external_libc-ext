#ifndef __LINUX_SYSCALLS_EXT_H
#define __LINUX_SYSCALLS_EXT_H

#include <sys/linux-syscalls.h>

#define __NR_stime	(__NR_SYSCALL_BASE + 25)
#define __NR_swapon	(__NR_SYSCALL_BASE + 87)
#define __NR_swapoff	(__NR_SYSCALL_BASE + 115)
#define __NR_sysinfo	(__NR_SYSCALL_BASE + 116)
#define __NR_adjtimex	(__NR_SYSCALL_BASE + 124)
#define __NR_getsid	(__NR_SYSCALL_BASE + 147)

#endif // __LINUX_SYSCALLS_EXT_H
