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

#endif
