#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	while(s[i] == ' ')
		i++;
	while(s[i] == '-' || s[i] == '+')
	{
		if(s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return(sign * result);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
}
void ft_putnbr(int n)
{
	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else 
		ft_putchar(n + '0');
}

void tab_mult(int number)
{
	int i = 1;
	int max = 9;
	int result = 0;

	while(i <= max)
	{
		result = number * i;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(number);
		write(1, " = ", 3);
		ft_putnbr(result);
		write(1, "\n", 1);
		i++;
	}
}


int main(int argc ,char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	tab_mult(ft_atoi(argv[1]));
	return(0);
}