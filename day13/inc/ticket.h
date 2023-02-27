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



#endif
