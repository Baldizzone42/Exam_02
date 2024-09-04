#include <unistd.h>

void ft_repeat_alpha(char *s)
{
	int i;
	int numbr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			numbr = s[i] - 'a' + 1;
		}
		while (numbr != 0)
		{
			write(1, &s[i], 1);
			numbr--;
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			numbr = s[i] - 'A' + 1;
		}
		while (numbr != 0)
		{
			write(1, &s[i], 1);
			numbr--;
		}
		write(1, &s[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	ft_repeat_alpha(argv[1]);
	return(0);
}