#include <stdlib.h>
#include <stdio.h>

int count(char *str)
{
	int i = 0;
	int c = 1;
	while(str[i] == ' ')
		i++;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' && str[i + 1] != ' ')
			c++;
		i++;
	}
	return(c);
}

char *get_word(char *str, int start, int len)
{
	int i = 0;
	char *new;
	new = malloc((len + 1)*sizeof(char));
	if(!new)
		return(NULL);
	while(len--)
	{
		new[i] = str[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return(new);
}


char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int w = 0;
	int x = count(str);

	char **split;
	split = malloc((x + 1)*sizeof(char *));
	if(!split)
		return(NULL);
	while(str[i] != '\0')
	{
		while(str[i] == ' ')
			i++;
		j = i;
		while(str[i] != ' ' && str[i] != '\0')
			i++;
		if(j < i)
		{
			split[w] = get_word(str, j, i - j);
			if(!split[w])
				return(NULL);
			w++;
		}
	}
	split[w] = NULL;
	return(split);
}
