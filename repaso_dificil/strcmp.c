int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
		}
		i++;
	}
	return(dif);
}

#include <stdio.h>
int main(void)
{
	char *s1 = "holi";
	char *s2 = "hola";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}