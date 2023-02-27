#include <login.h>
#include <persons.h>
#include <string.h>

int checkCrid(PERSON *p, int uid, char *pwd, int *pid)
{
	int flag = 0;
	if(uid == p->uid)
		flag++;
	if(strcmp(pwd,p->passwd)==0)
		flag++;
	if(flag == 2)
	{
		*pid = p->pid;
		return 0;
	}
	else
		return 1;
}