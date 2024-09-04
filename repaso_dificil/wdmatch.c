#include <unistd.h>

void match(char *s, char *s2)
{
	int i = 0;
	int j = 0;
	while(s[i] != '\0')
	{
		while(s2[j] != '\0')
		{
			if(s[i] == s2[j])
			{
				i++;
			}
			j++;
		}
		if(s[i] != '\0')
		{
			write(1, "\n", 1);
			break;
		}
		else if(s[i] == '\0')
		{
			i = 0;
			while(s[i] != '\0')
			{
				write(1, &s[i], 1);
				i++;
			}
		}
	}
	
}

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	match(argv[1], argv[2]);
	return(0);
}