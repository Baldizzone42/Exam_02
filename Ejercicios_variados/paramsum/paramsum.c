#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		write(1, "0\n", 2);
		return(1);	
	}
	int i = 1;
	while(argv[i])
	{
		i++;
	}
	i--;
	ft_putnbr(i);
	ft_putchar('\n');
	return(0);
}

