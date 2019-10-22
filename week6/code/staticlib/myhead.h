
#ifndef MYHEAD_H
#define MYHEAD_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<sys/types.h>

struct arg{
float aver;
int sum;
};
void show(int *a,int n);
void urand(int *a,int n);
struct arg operater(int *a,int n);
void Mysort(int *a,int len);
int compi(const void *a, const void *b);
void Sysort(int *a,int len);

#endif

