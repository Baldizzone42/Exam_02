#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int count(char *s)
{
	int i = 0;
	int c =  1;

	while(s[i] == ' ')
		i++;
	while(s[i] != '\0')
	{
		if(s[i] == ' ' && (s[i + 1] != ' ' && s[i + 1] != '\0'))
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
	int x = count(s);

	char **ros;
	ros = malloc((x + 1)* sizeof(char *));
	if(!ros)
		return(NULL);
	while(s[i] != '\0')
	{
		while(s[i] == ' ' && s[i])
			i++;
		j = i;
		while(s[i] != ' ' && s[i] != '\0')
			i++;
		if(j < i)
		{
			ros[w] = get_word(s, j, i - j);
			if(!ros[w])
				return(NULL);
			w++;
		}
	}
	ros[w] = NULL;
	return(ros);
}

int main(int argc, char *argv[])
{
	(void)argc;
	char **tab;
	int i = 1;
	int x = 0;
	char *s = argv[1];
	tab = ft_split(s);
	
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
