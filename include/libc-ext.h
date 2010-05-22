#ifndef __LIBC_EXT_H
#define __LIBC_EXT_H

#include <sys/cdefs.h>

__BEGIN_DECLS

int	stime(time_t *)
int	swapon(const char *, int)
int	swapoff(const char *)
int	sysinfo(struct sysinfo *)
int	adjtimex(struct timex *)
pid_t	getsid(pid_t)

extern int	sysinfo(struct sysinfo *sysinfo)
extern pid_t	getsid(pid_t pid)

__END_DECLS

#endif // __LIBC_EXT_H
