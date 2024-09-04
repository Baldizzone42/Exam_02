#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int max(int a, int b)
{
	int x = 0;
	if (a >= b)
		x = a;
	else
		x = b;
	return(x);
}
int  pgcd(int a, int b)
{
	int x;
	x = max(a, b);

	while(a % x != 0 || b % x != 0)
		x--;
	return(x);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("%d", pgcd(a, b));
	printf("\n");
	return(0);
}
