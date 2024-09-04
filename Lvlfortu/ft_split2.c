#include <stdlib.h>
#include <stdio.h>

int ft_count_words(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i] == ' ')
		i++;
	count++;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] != '\0'))
			count++;
	i++;
	}
	return(count);
}

char *get_words(char *str, int start, int len)
{
	int i = 0;
	char *new;

	new = malloc((len + 1) * sizeof(char));
	if(!new)
		return(0);
	while(len--)
	{
		new[i] = str[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return(new);
}

char **split2(char *str)
{
	int x = ft_count_words(str);
	int i = 0;
	int j = 0;
	int w = 0;

	char **split;
	split = malloc((x + 1) * sizeof(char *));
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
			split[w] = get_words(str, j, i - j);
			if(!split[w])
				return(NULL);
			w++;
		}
	}
	split[w] = NULL;
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
	
	while(split2(str)[i] != NULL)
	{
		printf("%s\n", split2(str)[i]);
		i++;
	}
	//printf("%s\n", ft_split(str)[i]);
	return(0);
}