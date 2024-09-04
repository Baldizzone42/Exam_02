#include <unistd.h>
int ft_atoi(char *s, int base)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while(s[i] == ' ')
		i++;
	while(s[i] == '-' || s[i] == '+')
	{
		if(s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F'))
	{
		if(s[i] >= 'a' && s[i] <= 'f')
		{
			result = (result * base) + ((s[i] - 'a') + 10);
		}
		if(s[i] >= 'A' && s[i] <= 'F')
		{
			result = (result * base) + ((s[i] - 'A') + 10);
		}
		if (s[i] >= '0' && s[i] <= '9')
		{ 
			result = (result * base) + (s[i] - '0');
		}
		i++;
	}
	return(sign * result);
}
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	int b = 16;
	printf("%d", ft_atoi(argv[1], b));
	return(0);
}