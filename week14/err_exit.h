#include<errno.h>
#include<stdlib.h>
#define errr_exit(MESSAGE)(\
   perror(MESSAGE),\
   exit(1);\
)
