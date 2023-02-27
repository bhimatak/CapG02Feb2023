#ifndef LOGIN_H
#define LOGIN_H

#include <persons.h>

struct login
{
	int uid;
	int pid; // pid is updated if login is found
	char passwd[20];
};

typedef struct login LOGIN;

int checkCrid(PERSON *, int, char*, int *);

#endif