#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int count_word(char *s)
{
	int c = 1;
	int i = 0;
	while(s[i] == ' ')
		i++;
	while(s[i] != '\0')
	{
		if(s[i - 1] != ' ' && s[i] == ' ' && s[i + 1] != ' ')
			c++;
		i++;
	}
	return(c);
}

char *get_word(char *s, int start, int len)
{
	int i = 0;
	char *new;
	new = malloc((len + 1)*sizeof(char));
	if(!new)
		return(NULL);
	while(len--)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return(new);
}

char **ft_split(char *s)
{
	int i = 0;
	int j = 0;
	int w = 0;
	int c = count_word(s);
	char **split;
	split = malloc((c + 1)*sizeof(char *));
	if(!split)
		return(NULL);
	while(s[i] != '\0')
	{
		while(s[i] == ' ')
			i++;
		j = i;
		while(s[i] != ' ' && s[i] != '\0')
			i++;
		if(j < i)
		{	
			split[w] = get_word(s, j, i -j);
			if(!split[w])
				return NULL;
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
		write(1, "\n", 1);
		return(1);
	}
	
	char *s = argv[1];
	int i = 0;
	int final = count_word(s) - 1;
	while(i < final)
	{
		printf("%s ", ft_split(s)[i]);
		i++;
	}
	printf("%s", ft_split(s)[i]);
	return(0);
}
