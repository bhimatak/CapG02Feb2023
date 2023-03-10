#ifndef MYHEADER_H
#define MYHEADER_H

struct employee
{
	int uid;
	char name[30];
	int age;
	char sex;
	double salary;
};

typedef struct employee EMP;

int inputEmployee();
void fileToStruct(EMP *, int);
void bubbleSorting(EMP *, int);
void searchEmployee(EMP *,int,int);
#endif

