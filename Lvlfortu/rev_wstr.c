#include <stdlib.h>
#include <stdio.h>

int count_words(char *s)
{
	int i = 0;
	int c = 1;
	while(s[i] != '\0')
	{
		if(s[i] == ' ')
			c++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
		i++;
	}
	return(c);
}

char *get_word(char *s, int start, int len)
{
	int i = 0;
	char *new;
	new = malloc((len + 1) * sizeof(char));
	if (!new)
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
	char **nb;
	int w = 0;
	int i = 0;
	int j = 0;
	int x = count_words(s);

	nb = malloc((x + 1) * sizeof(char*));
	if(!nb)
		return(NULL);
	while(s[i] != '\0')
	{
		while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n') 
			i++;
		j = i;
		while(s[i] != ' ' && s[i] != '\0')
		{
			i++;
		}
		if(j < i)
		{
			nb[w] = get_word(s, j, i - j);
			if(!nb[w])
				return(NULL);
			w++;
		}
	}
	nb[w] = NULL;
	return(nb);
}

int main(int argc, char *argv[])
{
	int i = 1;
	char *s = argv[1];
	int final = count_words(s) - 1;
	char **split = ft_split(s);
	
	while (i <= final)
	{
		
		printf("%s ", split[i]);
		i++;
		
	}
	printf ("%s", split[0]);	
	return(0);
}