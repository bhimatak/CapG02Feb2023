#include <stdio.h>

int main()
 {
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    
    int length = countLength(str);
    printf("The length of the string: %d\n", length);
    return 0;
}

int countLength(char *str) 
{
    int count = 0;
	char *ptr;
	ptr=str;

    for (; *ptr != '\n'; ptr++) {
        count++;
    }
    return count;
}


