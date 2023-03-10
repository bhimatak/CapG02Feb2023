#ifndef MYHEADER_H
#define MYHEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

struct employee
{
	int uid;
	char name[30];
	int age;
	char sex;
	double salary;
};

typedef struct employee EMP;
pthread_mutex_t lock;
int inputEmployee();
void fileToStruct(EMP *, int);
void bubbleSorting(EMP *, int);
void searchEmployee(EMP *,int,int);
void *readdetails(void *);
void *updatedetails(void *);

#endif

