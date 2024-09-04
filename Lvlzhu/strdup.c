#include <stdlib.h>
#include <stdio.h>

int ft_strlen (char *sr)
{
	int i;

	i = 0;
	while (sr[i] != '\0')
	{
		i++;
	}
	return(i);
}

char    *ft_strdup(char *src)
{
	char *s;
	int i; 

	i = 0;
	s = malloc(ft_strlen(src) + 1);
	if (!s)
		return(NULL);
	while(src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return(s);
}
int main (void)
{
	char *po;
	po = "jalapeno";
	printf("%s", ft_strdup(po));
	return(0);
}
