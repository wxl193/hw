#include"my.h"
#define size 10
int a[size],b[size];
void max_fun(int *arg)
{
  int *ap=arg;
  int rv,i,k=0;
  for(i=1;i<size;i++)
  {
     if(ap[i]>ap[k])
        k=i;
  }
  pthread_exit((void *)&ap[k]);
}
int main()
{
  pthread_t tid1,tid2;
  int i,rv,**ptr1,**ptr2;
  for(i=0;i<size;i++)
  {
      a[i]=rand();
      b[i]=rand();
  }
  rv=pthread_create(&tid1,NULL,(void*(*)())max_fun,a);
  check_error(rv,"pthread_create:tid1");
  rv=pthread_create(&tid2,NULL,(void*(*)())max_fun,b);
  check_error(rv,"pthread_create:tid2");
  
  pthread_join(tid1,(void**)&ptr1);
  pthread_join(tid2,(void**)&ptr2);
  printf("thread1's max value is %d\n",*ptr1);
  printf("thread2's max value is %d\n",*ptr2);
  printf("max value=%d\n",(*ptr1)>(*ptr2)?(*ptr1):(*ptr2));
  exit(0);
}
