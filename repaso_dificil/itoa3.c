#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	while(s[i] == ' ')
		i++;
	while(s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++; 
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return(result * sign);

}


char	*ft_itoa(int nbr)
{
	int size = 0;
	char *new;
	int n = nbr;
	if(nbr == -2147483648)
		return("-2147483648");
	if(nbr == 0)
		size++;
	if(nbr < 0)
	{
		size++;
		nbr = nbr * -1;
	}
	while(nbr > 0)
	{
		nbr= nbr / 10;
		size++;
	}
	new = malloc((size + 1)* sizeof(char));
	if(!new)
		return(NULL);
	new[size] = '\0';
	int i = 0;
	if(n < 0)
	{
		new[i] = '-';
		n = n * -1;
	}
	while(--size)
	{
		new[size] = ((n % 10) + '0');
		n = n / 10;
	}
	return(new);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	int n = ft_atoi(argv[1]);
	printf("%d\n", ft_atoi(argv[1]));
	printf("%s", ft_itoa(n));
	return(0);
}