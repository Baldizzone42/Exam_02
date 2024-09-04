#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	char *s;
	
	while(src[i] != '\0')
		i++;
	s = malloc (( + 1) * sizeof(char));
	if(!s)
		return(NULL);
	i = 0;
	while(src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return(s);
}
