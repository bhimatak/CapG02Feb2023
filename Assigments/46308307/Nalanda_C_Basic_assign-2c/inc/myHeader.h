#include<stdlib.h>
#define BUFF 1024

struct employee
{
	char name[BUFF];
	char gender;
	int age;
	float salary;
};
typedef struct employee EMP;

EMP emp1;
char name[BUFF];
char gender;
int age;
float salary;


int read();
void disp();
EMP readStructure();
void dispStructure();
