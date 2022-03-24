#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

 

 pid_t x = syscall(__NR_gettid);
