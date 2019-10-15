#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"mylib.h"
int main()
{ 
   int i;
   srand((int) time(0));
   int a[i];
   for(i=0;i<5;i++)
   {
      a[i]=(100*(rand()/(RAND_MAX+1.0)));
   }
   show(a,5);
   printf("max=%d\n",max(a,5));
   printf("sum=%d\n",sum(a,5));
   return 0;

}

