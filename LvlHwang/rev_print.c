#include <unistd.h>

void rev_print(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	while (i >= 0)
		write(1, &s[i--], 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *str;
	str = argv[1];
	rev_print(str);
	return(0);
}