#include <unistd.h>

void last(char *s)
{
	int i = 0;
	while(s[i] != '\0')
		i++;
	i--;
	while(s[i] == ' ')
		i--;
	while(s[i] != ' ' && i >= 0)
		i--;
	i++;
	while(s[i] != ' ' && s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	last(argv[1]);
	return(0);
}