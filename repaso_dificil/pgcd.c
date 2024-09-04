#include <stdio.h>
#include <stdlib.h>




int pgcd(int a, int b)
{
	int x = 1;
	int n = 1;
	

	while(n <= a || n <= b)
	{
		if((a % n == 0) && (b % n == 0))
		{
			x = n;
		}
		n++;
	}
	return(x);         
}


int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("\n");
		return(1);
	}
	printf("%d\n", pgcd(atoi(argv[1]), atoi(argv[2])));
	return(0);                                               
}                                               