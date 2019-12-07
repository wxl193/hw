#include"my.h"
int main()
{
  pid_t r;
  int i;
  int r_num;
  int pipefd[2];
  char buf[4096];
  char a[4096];
  for(i=0;i<4097;i++)
  {
    a[i];
  }
  memset(buf,0,sizeof(buf));
  if(pipe(pipefd)<0)
    {
       perror("pipe failed.\n");
       return -1;
    }
  r=fork();
  if(r<0)
    {
       perror("pipe failed.\n");
       return -1;
    }
    else if(r==0)
    {
       close(pipefd[1]);
       if(r_num=read(pipefd[0],buf,100)>0)
         printf("child read from pipe: %s,total=%d\n",buf,r_num);
       close(pipefd[0]);
       exit(0);
    }
    else
    {
        close(pipefd[0]);
        for(i=0;i<65535;i++)
        {
          write(pipefd[1],i,1);
          
        }
        if(write(pipefd[1],i,1)==-1)
             printf("pipe is full.\n");
        close(pipefd[1]);
        return 0;
    }

}
