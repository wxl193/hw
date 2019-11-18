#include<stdio.h>
#include<unistd.h>
#include<unistd.h>
#include<sys/types.h>
int global1=0;
int global;
int main()
{
  int i=10;
  static k=20;
  pid_t pid;
  pid=fork();
  if(pid<0)
  {
     perror("fork failed!");
  }
  else if(pid==0)
  {
     printf("child:pid=%d,ppid=%d,address:i=%d,k=%d,global1=%d,global=%d\n",getpid(),getppid(),&i,&k,&global1,&global);
  global1=999;
  global=1000;
  i=12; 
  k=19; 
  }
  else
  {
 printf("parent:pid=%d,ppid=%d,address:i=%d,k=%d,global1=%d,global=%d\n",getpid(),getppid(),&i,&k,&global1,&global);
  sleep(10);
  printf("i=%d,k=%d,global1=%d,global=%d\n",i,k,global1,global);
  }
}
