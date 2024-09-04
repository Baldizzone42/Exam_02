#include <unistd.h>

void sr(char *s, char a, char b)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == a)
		{
			s[i] = b;
			write(1, &s[i], 1);
		}
		else
		{
			write(1, &s[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *str;
	char *a;
	char *b;
	int x;

	x = 0;
	str = argv[1];
	a = argv[2];
	b = argv[3];
	while((argv[2][x] != '\0') || (argv[3][x] != '\0'))
	{
		if(x > 0)
		{
			write(1, "\n", 1);
			return(1);
		}
		x++;
	}
	sr(str, *a, *b);
	return(0);
}