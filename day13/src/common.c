#include <common.h>

int dispMain()
{
	int ch;
	printf("\nPress,");
	printf("\n1. SignUp\n2. SignIn\n3. Exit\nChoice: ");
	scanf("%d",&ch);
	return ch;
}

int signUp(PERSON *p)
{
	int pid = getPDetails(p);

	return pid;
}


int signIn(PERSON *p, LOGIN *l,int *pid)
{
	
	int flag = checkCrid(p, l->uid, l->passwd, pid);

	return flag;
}