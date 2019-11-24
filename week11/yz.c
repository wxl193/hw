#include"my.h"
#include<string.h>
#define MAX 128
int main()
{
 int pid1,pid2;
 int num;
 char buf[]={0,1,2,3,4,5,6,7,8,9};
 FILE *fp;
 fp=open(&name,O_RDWR|O_TRUNC|O_CREAT,0750);
 pid1=fork();
 pid2=fork();
 if((pid1||pid2)<0)
 {
   printf("failed fork!\n");
   exit(1);
 }
 if(pid1==0)
 {
    num=read(0,buf,MAX);
    write(fp,buf,num);
 }
 if(pid2==0)
 {
    num=read(0,buf,MAX);
    write(fp,buf,num);
 }
 else
 {
   wait(10);
   read(fp,buf,MAX);
   write(1,buf,num);
 }

}
