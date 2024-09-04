#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

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
	return(result *sign);

}
void ft_putnbr(int n)
{
	if(n < 0)
	{
		write(1, "0\n", 1);
	}
	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	if(n >= 0 && n <= 9)
		ft_putchar(n + '0');
}

void ft_pau(int n)
{
	int sum = 0;
	int c = 2;
	int i = 2;
	while(c <= n)
	{
		while(i <= c && c % i != 0)
		{
			i++;
		}
		if(c == i)
		{
			sum = sum + c;
		}
		i = 2;
		c++;
	}
	ft_putnbr(sum);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return(1);
	}

	ft_pau(ft_atoi(argv[1]));
	return(0);
}