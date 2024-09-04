#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int counter_words(char *s)
{
	int i = 0;
	int c = 1;
	while(s[i] == ' ')
		i++;
	while(s[i] != '\0')
	{
		i++;
		if(s[i] == ' ' && s[i + 1] != ' ' && s[i] != '\0')
			c++;
	}
	return(c);
}


char *get_pacas(char *s, int start, int len)
{
	int i = 0;
	char *newpaca;
	newpaca = malloc((len + 1)* sizeof(char));
	if (!newpaca)
		return(NULL);
	while(len--)
	{
		newpaca[i] = s[start];
		i++;
		start++;
	}
	newpaca[i] = '\0';
	return(newpaca);
}



char **fumada(char *str)
{
	int i = 0;
	int j = 0;
	int w = 0;
	int x = counter_words(str);

	char **smoke;
	smoke = malloc((x + 1)* sizeof(char *));
	if(!smoke)
		return(NULL);
	while(str[i] != '\0')
	{
		while(str[i] == ' ')
			i++;
		j = i;
		while(str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
		if(j < i)
		{
			smoke[w] = get_pacas(str, j, i - j);
			if(!smoke[w])
				return(NULL);
		}
		w++;
	}
	smoke[w] = NULL;
	return(smoke);
}




int main(int argc, char *argv[])
{
	(void)argc;
	//char *s = argv[1];
	//printf("%d", counter_words(s));

	int i = 1;
	//char *str = argv[1];
	char **split = fumada(argv[1]);	
	while(split[i])
	{
		printf("%s ", split[i]);
		i++;
	}
	printf("%s\n", split[0]);
	return(0);
}
