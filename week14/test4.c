#include"my.h"
struct sarg{
  int n;
  int m;
};
struct rarg{
  int s;
  long t;
};
void *fun(void *n)
{
  struct sarg *pt=(struct sarg *)n;
  struct rarg *pk=(struct rarg *)malloc(sizeof(struct rarg));
  struct timeval tv1,tv2;
  struct timezone tz;

  int i,s=0;
  gettimeofday(&tv1,&tz);
  for(i=0;i<pt->m;i++)
      s+=i;
  gettimeofday(&tv2,&tz);
  printf("work pthread %d,");
}
int main()
{
  pthread_t tid[4];
  int ret[4],i;
  struct rarg v[4];
  struct sarg s[4];
  for(i=0;i<4;;i++)
  {
     s[i].n=i;
  }
 
}
