#include <unistd.h>

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




int main(int argc, char *argv[])
{
	int n = argc - 1;
	ft_putnbr(n);
	ft_putchar('\n');
	(void)argv;
	return 0;
}