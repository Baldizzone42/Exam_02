#include <unistd.h>
int ft_atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return(result * sign);
}


void print(int n)
{
	char digits[] = "0123456789abcdef";
	
	if(n >= 16)
	{
		print(n / 16);
		write(1, &digits[n % 16], 1);
	}
	else
		write(1, &digits[n], 1);

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
	print(x);
	write(1, "\n", 1);
	return(0);
}
