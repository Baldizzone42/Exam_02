#include <unistd.h>

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if(s[0] == '-')
		sign = -1;
	while(s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return(result * sign);
}

void print_hexade(int n)
{
	char hexa[] = "0123456789abcdef";
	if(n >= 16)
		print_hexade(n / 16);
	write(1, &hexa[n % 16], 1);
}

int main(int argc, char *argv[])
{
	(void) argc;
	int n = ft_atoi(argv[1]);
	print_hexade(n);
	return(0);
}