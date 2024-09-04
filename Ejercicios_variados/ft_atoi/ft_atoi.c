int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if(str[i] == '0')
		 return(0);
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}

	return(result * sign);
}

#include <stdio.h>

int main(void)
{
	char *s = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi.";
	printf("%d", ft_atoi(s));
	return(0);
}
