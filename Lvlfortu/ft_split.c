#include <stdlib.h>
#include <stdio.h>
int ft_palabras(char *s)
{
	int i = 0;
	int c;
	while (s[i] == ' ')
		i++;
	c++;
	while(s[i] != '\0')
	{
		if(s[i] == ' ' && s[i + 1] != ' ' || s[i + 1] != '\0')
			c++;
		i++;
	}
	return(c);
}
char *ft_get_word(char *str, int start, int len)
{
	char *new = malloc(len + 1);
	int i = 0;
	while(len--)
	{
		new[i] = str[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return(new);
}

char    **ft_split(char *str)
{
	int x = ft_palabras(str);
	int i = 0;
	int j = 0;
	int z = 0;
	char **split;

	split = malloc((x + 1) * sizeof(char **));
	if(!split)
		return(NULL);
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			while(str[i] == ' ' && str[i] != '\0')
				i++;
		}
		j = i;
		while(str[i] != ' ' && str[i] != '\0')
			i++;
		if(j < i)
		{
			split[z] = ft_get_word(str, j, i - j);
			if(!split[z])
				return NULL;
			z++;
		}
	}
	split[z] = NULL;
	return(split);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("\n");
		return(1);
	}
	int i = 0;
	char *str = argv[1];
	
	while(ft_split(str)[i] != NULL)
	{
		printf("%s\n", ft_split(str)[i]);
		i++;
	}
	//printf("%s\n", ft_split(str)[i]);
	return(0);
}