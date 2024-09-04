#include <stdlib.h>
#include <stdio.h>

int fprime(int a)
{
	int x = 2;

	if(a == 1)
		return(1);
	while(a > x)
	{
		if (a % x == 0)
		{
			a =  a / x;
			printf("%d", x);
			printf("%s", "*");
		}
		else
			x++;
	}
	return(x);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("\n");
		return(1);
	}
	if (argv[1][0] == '-' || argv[1][0] == '0')
	{
		printf("\n");
                return(1);
	}
	int c;
	c = atoi(argv[1]);
	printf("%d", fprime(c));
	printf("\n");
	return(0);
}
