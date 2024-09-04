#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int pgcd2(int a, int b)
{
	int i = 1;
	int x = 0;
	while(i <= a && i <= b)
	{
		if(a % i == 0 && b % i == 0)
			x = i;
		i++;
	}
	return(x);
}

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("%d", pgcd2(a, b));
	return(0);
}