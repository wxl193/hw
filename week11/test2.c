#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>
#include<sys/types.h>

int main()
{
  int pid;
  if(pid=fork()<0)
  {
    perror("failes to fork!\n");
    return -1;
  }
  else if(pid==0)
  {
    printf("%d :child exit now.\n",getpid());
    while(1);
    printf("%d :child exit now.\n",getpid());
    exit(0);
  }
  else
  {
    printf("%d:parent is waiting zombie now\n",getpid());
    while(1);
    printf("%d:parent is exiting now\n",getpid());
  }
  exit(0);
 
}
