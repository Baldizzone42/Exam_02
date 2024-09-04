#include <unistd.h>

void first_word(char *s)
{
	int i;

	i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
		}
		while (s[i] != ' ' && s[i] != '\0')
		{
			write (1, &s[i], 1);
			i++;
			if (s[i] == ' ')
				return;
		}
	}
	write (1, "\n", 1);
}





int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	char *str;

	str = argv[1];
	first_word(str);
	return(0);
}