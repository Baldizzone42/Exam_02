#include <unistd.h>
void putstr(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(void)
{
	char *str;

	str = "Tu pare";
	putstr(str);
	return(0);
}