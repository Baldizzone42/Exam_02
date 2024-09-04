#include <unistd.h>

void ulstr(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			write(1, &s[i], 1);
		}
		else if(s[i] >= 'A' && s[i] <= 'Z')
                {
                        s[i] = s[i] + 32;
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
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}

	char *str;
	str = argv[1];
	ulstr(str);
	return(0);
}
