#include <unistd.h>

void camel(char *s)
{
	int i;
	char b;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			write(1, "_", 1);
			b = s[i] + 32;
			write(1, &b, 1);
		}
		else
			write (1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}


int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *str;
	str = argv[1];
	camel(str);
	return(0);
}