#include "myhead.h"
#include<stdlib.h>

struct arg operater(int *a,int n){
 int sum,i;
 float aver;
 struct arg b;
 sum=0;
 for(i=0;i<n;i++)
  sum=sum+a[i];
 aver=(float)sum/n;
 b.sum=sum;
 b.aver=aver;
 return b;
 }
void show(int *a,int n){
int i;
for(i=0;i<n;i++)
 {
     printf("%d  ",a[i]);
  }
printf("\n");
}
void urand(int *a,int n){
 int x,i;
    srand(time(0));
    for(i=0;i<n;)
      { 
        x=rand();
        if(x>0&&x<=1000)
        {
          a[i]=x;
          i++;
        }
      }
}
void Mysort(int *a,int len)
{int i=0;
int j;
int t;
for(i=0;i<len;i++)
{
for(j=0;j<len-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
}
int compi(const void *a, const void *b)
{
 const int *p = a;
 const int *q = b;

 return *p - *q;
}
void Sysort(int *a,int len){
 qsort(a, len, sizeof(a[0]), compi);
}

