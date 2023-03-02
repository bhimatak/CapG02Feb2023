#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
        int result=0;
        int val1 = atoi(argv[1]);
        int val2 = atoi(argv[2]);
        result = val1+val2;
        printf("\n%s + %s = %d",argv[1],argv[2],result);

        printf("\nresult: %d",result);

        printf("\n\n");
        exit(EXIT_SUCCESS);
}

