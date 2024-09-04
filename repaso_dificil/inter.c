#include <unistd.h>

void inter(char *s, char *s2)
{
	int map[256];
	int i = 0;
	int j;
	while(i < 256)
	{
		map[i] = 0;
		i++;
	}
	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if(s[i] == s2[j])
			{
				if(map[(int)(s)[i]] == 0)
				{
					write(1, &s[i], 1);
					map[(int)(s)[i]] = 1;
					break;
				}
			}
			j++;
			if(s2[j] == '\0')
				s[i] = '\0';
		}
		i++;
	}
	write(1, "\n", 1);
}


int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	inter(argv[1], argv[2]);
	return(0);
}