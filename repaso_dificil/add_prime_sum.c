#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	while(s[i] == '-')
	{
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

int esprimo(int n)
{
	int i = 1;
	int c = 0;
	while(i <=  n)
	{
		if(n % i == 0)
		{
			c++;
		}
		i++;
	}
	if(c == 2)
		return(1);
	else
		return(0);
}
int sumaprimos(int x)
{
	int suma = 0;
	int i = 0;

	while(i <= x)
	{
		if(esprimo(i) == 1)
		{
			suma = suma + i;
		}
		i++;
	}
	return(suma);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "0\n", 2);
		return(1);
	}
	int n = ft_atoi(argv[1]);
	int i = sumaprimos(n);
	ft_putnbr(i);
	write(1, "\n", 1);
	return(0);
}