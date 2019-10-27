#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<syslog.h>
#include<string.h>
#include<stdlib.h>
int chmd()
{
      int c;
      mode_t mode=S_IWUSR;

      printf(" 0.0700\n 1.0400\n 2.0200 \n 3.0100\n ");
      printf("Please input your choice(0-3):");
      scanf("%d",&c);
      switch(c)
     {
      case 0: chmod("&name",S_IRWXU);break;
      case 1: chmod("&name",S_IRUSR);break;
      case 2: chmod("&name",S_IWUSR);break;
      case 3: chmod("&name",S_IXUSR);break;

      default:printf("You have a wrong choice!\n");
      }
      return(0);



 }

