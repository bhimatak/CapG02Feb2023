#ifndef TICKET_H
#define TICKET_H

struct ticket
{
	int bid; //booking id is generated after ticket/transaction is confirmed
	char bdate[20];
	char tdate[20];
	char src[20];
	char dest[20];
	int status; // 1 for booked . 0 for cancelled
	int sno;
	int pid;
};

typedef struct ticket TICKET;

int printTktDet(TICKET *, int);

/*
return is bid i.e booking id
i/p params are
1. Ticket struct which is sent from the main program
2. pid which is capture during login will be sent to this function
and tktid and pid are linked now.
*/
int bookTkt(TICKET *, int);


#endif
