#ifndef __SYSCALL_H__
#define __SYSCALL_H__

enum {
  SYS_exit,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};

struct  timeval{
       long  tv_sec;/*秒*/

       long  tv_usec;/*微妙*/

};
struct  timezone{

        int tz_minuteswest;/*和greenwich 时间差了多少分钟*/

        int tz_dsttime;/*type of DST correction*/

};

#endif
