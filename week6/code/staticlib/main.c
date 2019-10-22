#include "myhead.h"
#include<sys/time.h>
#include<unistd.h>
#define n 20
int main(){
 struct timeval t1,t2;
 struct timezone tz;
 struct arg str;
 int a[n],b[n],i;
 urand(a,n);
 show(a,n);
 for(i=0;i<n;i++)
   b[i]=a[i];
 gettimeofday(&t1,&tz);  
 Mysort(a,n);
 gettimeofday(&t2,&tz); 
show(a,n);
 printf("the time(us)of Mysort:%d\n",t2.tv_usec-t1.tv_usec);
 gettimeofday(&t1,&tz);
  
 Sysort(b,n);
 gettimeofday(&t2,&tz); 
show(b,n);
 printf("the time(us)of Syssort:%d\n",t2.tv_usec-t1.tv_usec);

}
