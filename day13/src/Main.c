#include <common.h>
#include <persons.h>
#include <ticket.h>
#include <login.h>

int main()
{
	PERSON p;
	LOGIN l;
	TICKET t;
	int pid=0, lflag = 0,flag=0;
	int tktid = 0;
	
	while(1){

		switch(dispMain())
		{
			case 1:
					pid = signUp(&p);
					printPDetails(&p);
					printf("\nPID : %d",pid);
					break;
			case 2: 
					lflag = 0;
					printf("\nEnter,");
					printf("\nUID: ");
					scanf("%d",&l.uid);
					printf("\nPasswd: ");
					scanf("%s",l.passwd);
					lflag = signIn(&p,&l,&pid);
					if(lflag)
						printf("\nLogin Unsuccessfull\n");
					else{
						printf("\nLogin Success!\n");
						while(1)
						{
							flag = 0;
							switch(tktBkgMenu())
							{
								case 1:
										tktid = bookTkt(&t, pid);
										break;
								case 2:
										printTktDet(&t, tktid);
										break;
								case 3:
										flag = 1;
										break;
								default:
										printf("\nWrong Choice");

							}
							if(flag == 1)
								break;
						}
					}
					break;
			case 3: exit(EXIT_SUCCESS);
					break;
			default:
					printf("\nWrong Choice\n");
		}
	}

	printf("\n\n");
	return 0;
}