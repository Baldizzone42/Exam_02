#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putnbr(int n)
{
	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else if(n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
}

void fiz(int n)
{
	while(n <= 100)
	{
		if (n % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0)
                        write(1, "fizz", 4);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
}



int main(void)
{
	fiz(1);
	return(0);
}
