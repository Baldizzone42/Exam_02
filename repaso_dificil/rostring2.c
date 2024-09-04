#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int count_word(char *s)
{
	int i = 0;
	int c = 1;
	if(s[i] == '\0')
		return(0);
	while(s[i] == ' ')
		i++;
	while(s[i] != '\0')
	{
		if(s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0')
			c++;
		i++;
	}
	return(c);
}
char *get_word(char *s, int start, int len)
{
	char *new;
	int i = 0;
	new = malloc((len + 1)* sizeof(char));
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
	int x = count_word(s);
	char **tab;
	tab = malloc((x + 1)* sizeof(char *));
	if(!tab)
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
			tab[w] = get_word(s, j, i - j);
			if(!tab[w])
				return(NULL);
			w++;
		}
	}
	tab[w] = NULL;
	return(tab);
}

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		write(1, "\n", 1);
		return(1);
	} 
	char *s = argv[1];
	char **tab = ft_split(s);
	int i = 1;
	int x = 0;
	while(tab[i] != NULL)
	{
		x = 0;
		while(tab[i][x] != '\0')
		{
			write(1, &tab[i][x], 1);
			x++;
		}
		write(1, " ", 1);
		i++;
	}
	x = 0;
	while(tab[0][x] != '\0')
	{
		write(1, &tab[0][x], 1);
		x++;
	}
	write(1, "\n", 1);
	return(0);
}
	
