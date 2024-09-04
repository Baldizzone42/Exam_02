#include <unistd.h>

void rev(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	while(i--)
	{
		write(1, &s[i], 1);
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
	rev(str);
	return(0);
}
