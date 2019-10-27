#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<syslog.h>
#include<string.h>
#include<stdlib.h>
#include"my.h"
#define MAX 128
int chmd ();

int main()
{
     int fd;
      int num;
      int choice;
      char name[MAX];

      char buffer[MAX];
      struct stat buf;

      char* path="/bin/ls";

      char* argv[4]= {"ls","-l",&name,NULL};
      while(1){

      printf("********************************\n");
      printf("0.退出\n");
      printf("1.创建新文件\n");
      printf("2.写文件\n");
      printf("3.读文件\n");
      printf("4.修改文件权限\n");
      printf("5.查看当前文件的权限修改文件权\n");
      printf("***************************\n");
      printf("Please input your choice(0-5):");
      scanf("%d",&choice);

      switch( choice){

      case 0:close(fd);
         exit(0);
      case 1:
      printf("输入你想创建的文件名:");
      scanf("%s",&name);
      fd=open(&name,O_RDWR|O_TRUNC|O_CREAT,0750);
      if(fd==-1)
         printf("File Create Failed!'n");
      else
      printf("文件创建成功!\n");
      break;
    case 2:
      num=read(0,buffer,MAX);
      write(fd,buffer,num);
    break;
    case 3:
    read(fd,buffer,MAX);
    write(1,buffer,num); 
    break;
    case 4:
     chmd();
     printf("Change mode success!\n");
    break;
   case 5:
    execv(path,argv);
   break;
   default:
     printf("You have a wrong choice!\n");

     }
   }
}


