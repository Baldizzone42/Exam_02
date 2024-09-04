#include <unistd.h>
#include <stdio.h>

void  hide(char *s, char *c)
{
	int i = 0;
	int x = 0;
	
	while(s[i] != '\0')
	{
		if(s[i] == c[x])
			i++;
		if (c[x] == '\0')
		{
			write(1, "0\n", 2);	
			return;
		}
	x++;
	}
	write(1, "1\n", 2);
	return;
}


int main (int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	hide(s1, s2);
	return(0);
}
