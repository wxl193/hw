#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
  int ret;
  char *arg[]={"./test2","123","abc","hello","word","nuc","edu",NULL};
  printf("call1:pid=%d,ppid=%d\n",getpid(),getppid());
  ret=execvp("test2",arg);
  printf("sfter calling! ret=%d",ret);
  return 0; 

}

