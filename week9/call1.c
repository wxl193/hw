#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
  int ret;
  printf("call1:pid=%d,ppid=%d\n",getpid(),getppid());
  ret=system("./test2 123 abc hello word ncu edu");
  printf("sfter calling! ret=%d",ret);
  return 0; 

}

