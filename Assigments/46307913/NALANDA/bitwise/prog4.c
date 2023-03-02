#include <stdio.h> 

int main ()
{
        int n = 0, num = 0, count = 0, rev_bits = 0;
        printf ("Enter the number: ");
        scanf ("%d", &n);

        while (n > 0)
        {
                rev_bits = rev_bits << 1;

                if (n & 1 == 1)
                {
                        rev_bits = rev_bits ^ 1;
                }

                n = n >> 1;
        }

        printf ("\nThe reversed resultant = %d\n", rev_bits);

        return 0;
}

