#ifndef _PROC_SYSCALL_H_
#define _PROC_SYSCALL_H_
#include <types.h>
#include <proc.h>
#include <mips/trapframe.h>
#include <synch.h>
/* Process Table that is used to map between process structures and PIDs */

struct proc *proc_table[OPEN_MAX];
int proc_counter;
int sys_fork(pid_t *child_pid, struct trapframe *tf);
int sys_waitpid(pid_t pid, int *status, int options, pid_t* retval);
void sys_exit(int exitcode);
int sys_getpid(pid_t *curproc_pid);
int sys_execv(const char *program);
#endif
