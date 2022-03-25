//4. Write a program where pthread task displays the thread id and also prints the calling process pid.

#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

 

 pid_t x = syscall(__NR_gettid);
//to be completed
