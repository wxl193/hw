#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  printf("call:pid=%d,ppid=%d",getpid(),getppid());
  system("/home/rlk/Linuxprogram/week9/test");
  printf("after caling");
}
