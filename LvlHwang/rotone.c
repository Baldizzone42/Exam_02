#include <unistd.h>
void rotone(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
		{
			s[i] = s[i] + 1;
			write (1, &s[i], 1);
		}
		else if((s[i] == 'z') || (s[i] == 'Z'))
		{
			s[i] = s[i] -25;
			write (1, &s[i], 1);
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
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *str;
	str = argv[1];
	rotone(str);
	return(0);
}