#include <unistd.h>
void ft_putstr2 (char *str)
{
	int i; 

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return(1);
	}
	char *s;
	s = argv[2];
	ft_putstr2(s);
	return(0);
}
