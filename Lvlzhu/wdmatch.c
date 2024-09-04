#include <unistd.h>

void ft_wdmatch(char *s, char *check)
{
	int i = 0;
	int c = 0;
	while(check[c] != '\0')
	{
		if(s[i] == check[c])
		{
			i++;
		}
		c++;
	}	
	
	if (s[i] == '\0')
	{
		i = 0;
		while(s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *s = argv[1];
	char *check = argv[2];
	ft_wdmatch(s, check);
	return(0);
}