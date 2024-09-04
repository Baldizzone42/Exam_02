#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int size = 0;
	char *result;
	int n;
	n = nbr;

	if(n < 0)
	{
		size++;
		n = n * -1;
	}
	while(n > 0)
	{
		n = n / 10;
		size++;
	}
	result = malloc((size + 1)* sizeof(char));
	if(!result)
		return(NULL);
	result[size] = '\0';
	//int i = 0;
	if(nbr < 0)
	{
		result[0] = '-';
		nbr  = nbr * -1;
	}
	while(--size)
	{
		result[size] = ((nbr % 10) + '0');
		nbr  = nbr / 10;
	}
	return(result);
}

int main(void)
{
	int n = -42;
	printf("%s", ft_itoa(n));
	return(0);
}