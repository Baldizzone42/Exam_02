#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	while((s[i] == '-') || (s[i] == '+'))
	{
		if(s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return(result * sign);
}
void hex(int n)
{
	char a[] = "0123456789abcdef";

	if(n >= 16)
		hex(n /16);
	write(1, &a[n % 16], 1);
}



int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return(0);

}
