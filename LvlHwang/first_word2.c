#include <unistd.h>
void f_word(char *s)
{
	int i;

	i = 0;
	while(s[i] == ' ')
	{
		i++;
	}
	if(s[i] != ' ')
	{
		while(s[i] != '\0' && s[i] != ' ')
		{
			write (1, &s[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}




int main (int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}

	char *s;
	s = argv[1];
	f_word(s);
	return(0);
}