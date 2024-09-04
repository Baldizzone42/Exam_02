#include <stdlib.h>
char *ft_itoa(int nbr)
{
	int size = 0;
	int n = nbr;
	if(n <= 0)
		size++;
	while(n)
	{
		n = n / 10;
		size++;
	}
	char *horse;
	horse = malloc((size + 1)* sizeof(char));
	if(!horse)
		return(NULL);
	n = nbr;
	if(nbr < 0)
	{
		nbr = nbr * -1;
	}
	horse[size] = '\0';
	while(size--)
	{
		horse[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if(n < 0)
		horse[0] = '-';
	return(horse);
}
#include <stdio.h>
int main(void)
{
	int n = 0;
	printf("%s", ft_itoa(n));
	return(0);
}