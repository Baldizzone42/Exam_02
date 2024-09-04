#include <unistd.h>

void mirror(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z') 
		{
			s[i] = 'z' -s[i] + 'a';
			write(1, &s[i], 1);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = 'Z' - s[i] + 'A';
			write(1, &s[i], 1);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *str;
	str = argv[1];
	mirror(str);
	return(0);
}