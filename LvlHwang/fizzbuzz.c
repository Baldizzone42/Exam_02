#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a, 1);
}

void putnbr(int n)
{
	if (n >= 10)
	{
		putnbr(n/10);
		ft_putchar(n % 10 + '0');
	}
	else if (n >= 1 && n <= 9)
		ft_putchar(n + '0');
}


void fizzbuzz (void)
{
	int n;

	n = 1;
	while (n >= 1 && n <= 100)
	{
		if(n % 15 == 0)
		{
			write(1, "fizzbuzz" , 8);
			putnbr(n);
			write (1, "\n", 1);
		}
		else if (n % 3 == 0)
		{
			write(1, "fizz", 4);
			write (1, "\n", 1);
		}
		else if(n % 5 == 0)
		{
			write(1, "buzz", 4);
			write (1, "\n", 1);
		}
		else
		{
			putnbr(n);	
			write (1, "\n", 1);
		}
		n++;
	}
}

int main ()
{	
	fizzbuzz();
	return(0);
}