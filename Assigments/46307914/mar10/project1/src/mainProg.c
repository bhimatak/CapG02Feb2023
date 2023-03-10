#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>
#include<pthread.h>
#include<unistd.h>

int main()
{
	int n=0,suid=0;
	n=inputEmployee();
	EMP *empl = (EMP *) malloc ( n * sizeof(EMP));
	
	fileToStruct(empl,n);
	bubbleSorting(empl,n);
	printf("\nEnter employee ID to search: ");
	scanf("%d",&suid);

	searchEmployee(empl,n,suid);

	pthread_t thread1,thread2;
	
	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		printf("\nmutex init has failed\n");
		return 1;
	}

	pthread_create(&thread1,NULL,updatedetails,&empl[1]);
	pthread_create(&thread2,NULL,readdetails,&empl[1]);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	pthread_mutex_destroy(&lock);
	pthread_exit(NULL);

	return EXIT_SUCCESS;
}

void *updatedetails(void *vargs)
{
	pthread_mutex_lock(&lock);
	EMP *ptr=(EMP *)vargs;
	
	printf("\nbefore updation\n\n");		
	printf("\nEmployee ID: ");
	printf("%d",ptr->uid);
	printf("\nEmployee Name: ");
	printf("%s",ptr->name);
	printf("\nEmployee age: ");
	printf("%d",ptr->age);
	printf("\nEmployee sex (M/F/O): ");
	printf(" %c",ptr->sex);
	printf("\nEmployee salary: ");
	printf("%lf\n",ptr->salary);
			
	strcpy(ptr->name,"Boooooooo");
	printf("\nAfter updation\n\n");
	printf("\nEmployee ID: ");
	printf("%d",ptr->uid);
	printf("\nEmployee Name: ");
	printf("%s",ptr->name);
	printf("\nEmployee age: ");
	printf("%d",ptr->age);
	printf("\nEmployee sex (M/F/O): ");
	printf(" %c",ptr->sex);
	printf("\nEmployee salary: ");
	printf("%lf\n",ptr->salary);
	pthread_mutex_unlock(&lock);

}
void *readdetails(void *vargs)
{
	pthread_mutex_lock(&lock);
	EMP *ptr=(EMP *)vargs;
	printf("\n\nAfter reading\n");
	printf("\nEmployee ID: ");
	printf("%d",ptr->uid);
	printf("\nEmployee Name: ");
	printf("%s",ptr->name);
	printf("\nEmployee age: ");
	printf("%d",ptr->age);
	printf("\nEmployee sex (M/F/O): ");
	printf(" %c",ptr->sex);
	printf("\nEmployee salary: ");
	printf("%lf\n",ptr->salary);
	pthread_mutex_unlock(&lock);
}
