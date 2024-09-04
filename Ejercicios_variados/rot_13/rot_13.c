#include <unistd.h>

void rot(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
			write(1, &s[i], 1);
		}
		else if((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
                {
                        s[i] = s[i] - 13;
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
	char *s;
	s = argv[1];
	rot(s);
	return(0);
}
