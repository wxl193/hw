#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>
#include<sys/types.h>

int main()
{
  int pid1,pid2,s,p;
  if(((pid1=fork())&&(pid2=fork()))<0)
  {
    perror("failes to fork!\n");
    return -1;
  }
  else if(pid1==0)
  {
    printf("%d :child1 exit now.\n",getpid());
    
    printf("%d :child1 exit now.\n",getpid());
    //while(1);
    exit(120);
  }
  else if(pid2==0)
  {
    printf("%d :child2 exit now.\n",getpid());
    
    printf("%d :child2 exit now.\n",getpid());
    //while(1);
    exit(130);
  }
  else
  {
    sleep(5);
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
