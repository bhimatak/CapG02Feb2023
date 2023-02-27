struct login
{
	int uid;
	int pid; // pid is updated if login is found
	char passwd[20];
};

typedef struct login LOGIN;

