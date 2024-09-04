#include <unistd.h>

int ft_atoi(char *s)
{
	int result = 0;
	int i = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return(result);
}

void putnum(int n)
{
	char *str = "0123456789";

	if(n >= 10)
	{
		putnum (n / 10);
		write(1, &str[n % 10], 1);
	}
	else 
		write(1, &str[n], 1);
}

void tab(int x)
{
	int i = 1;

	while(i <= 9)
	{
		putnum(i);
		write(1, " x ", 3);
		putnum(x);
		write(1, " = ", 3);
		putnum(i * x);
		write(1, "\n", 1);
		i++;
	}
}





int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *s = argv[1];
	int x = ft_atoi(s);
	tab(x);
	return(0);
}
