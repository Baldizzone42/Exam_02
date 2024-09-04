#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
    int x = 2;
    if (n == 1)
            printf("1");
    while (n >= x)
    {
        if (n % x == 0)
            {       
                if (n == x)
                {
                    printf("%d", x);
                    n = n / x;
                }
                                        
                else
                {
                    printf("%d*", x);
                    n = n / x;
                }
            }
        else
            x++;

    }
	printf("\n");
}



int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                printf("\n");
                return(1);
        }
        int n = atoi(argv[1]);
        fprime(n);
        return(0);
}
