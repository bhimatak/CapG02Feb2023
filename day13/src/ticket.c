#include <ticket.h>

int printTktDet(TICKET *t, int tkdid)
{
	printf("\n=========Ticket details are=========\n");
	printf("\nBooking ID: %d",t->bid);
	printf("\nPID: %s",t->pid);
	printf("\nBooking Date: %s",t->bdate);
	printf("\nTravling Date: %s", t->tdate);
	printf("\nFrom: %s",t->src);
	printf("\nTo: %s", t->dest);
	printf("\nSeat No: %d",t->sno);
	if(t->status == 1)
		printf("\nStatus: %s","Booked");
	else
		printf("\nStatus: %s","Cancelled");

	printf("\n\n");
}

int bookTkt(TICKET *t, int pid)
{
	int tktid;
	printf("\nEnter,")
	printf("\nBooking ID: ");
	scanf("%d",&t->bid);
	//printf("\nPID: %s",t->pid);
	t->pid = pid;
	printf("\nBooking Date: ");
	scanf("%s",t->date);
	printf("\nTravling Date: ");
	scanf("%s",t->tdate);
	printf("\nFrom: ");
	scanf("%s",t->src);
	printf("\nTo: ");
	scanf("%s", t->dest)
	printf("\nSeat No: ");
	scanf("%d",&t->sno);
	t->status);

	return tktid;
}