#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<setjmp.h>
static jmp_buf g_stack_env;
static void fun1(void);
static void fun2(void);

int main(void)
{
 if(0==setjmp(g_stack_env)){
   printf("Normal flow\n");
   fun1();
  }else{
   printf("Long jump flow\n"); 
  }
  return 0;
}
static void fun1(void)
{
  printf("Enter func1\n");
  fun2();
}
static void fun2(void)
{
  printf("Enter func2\n");
  longjump(g_stack_env,1);
  printf("leave func2\n");
}
