#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int i = 2;

	while(n >= i)
	{
		if(n % i == 0)
		{
			if(n == i)
				printf("%i", i);
			else if(n != i)
				printf("%i*", i);
			n = n / i;
		}
		i++;
	}
}


int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("\n");
		return(1);
	}
	int n = atoi(argv[1]);
	fprime(n);
	return(0);
}