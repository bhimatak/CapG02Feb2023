#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <string.h>
#include <persons.h>
#include <login.h>
#include<stdlib.h>

int dispMain();

int signUp(PERSON *);
int signIn(PERSON *, LOGIN *,int *);
int tktBkgMenu();

#endif