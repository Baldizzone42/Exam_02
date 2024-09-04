#include <stdlib.h>

char *ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;

	if(nbr <= 0)
		len++;
	while(n)
	{
		n = n / 10;
		len++;
	}
	char *result = malloc ((len + 1) * sizeof(char));

	result[len] = '\0';
	if(nbr == 0)
	{
		result[0] = '0';
		return(result);
	}
	if(nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return(result);
}
