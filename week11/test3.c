#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>
#include<sys/types.h>

int main()
{
  int pid,s;
  if(pid=fork()<0)
  {
    perror("failes to fork!\n");
    return -1;
  }
  else if(pid==0)
  {
    printf("%d :child exit now.\n",getpid());
    
    printf("%d :child exit now.\n",getpid());
    while(1);
    exit(120);
  }
  else
  {
    printf("%d:parent is waiting zombie now\n",getpid());
    while((pid=wait(&s))!=-1);
     {
      printf("%d:parent is exiting now\n",getpid());
      if(WIFEXITED(s)){ 
      printf("child %d is exiting normally.exit code=%d\n",pid,WEXITSTATUS(s));
      }
      else if(WIFSIGNALED(s))
      {
        printf("child exit by signal.signal no =%d",pid,WTERMSIG(s));
      }
      else
      {
        printf("Not know!\n");
      }
     }
    
  }
  exit(0);
 
}
