#include <unistd.h>

void expand(char *s)
{
	int i = 0;
	int j = 0;
	while(s[j] != '\0')
		j++;
	j--;
	while(s[j] == ' ' && j >= 0)
		j--;
	while(s[i] == ' ')
		i++;
	while(s[i] != '\0' && i <= j)
	{
		while(s[i] == ' ')
		{
			i++;
			if(s[i] != ' ')
				write(1, "   ", 3);
		}
		if(s[i] != ' ')
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
	char *str = argv[1];
	expand(str);
	return(0);
}