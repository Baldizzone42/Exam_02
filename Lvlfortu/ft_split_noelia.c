/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_noelia.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:51:53 by jormoral          #+#    #+#             */
/*   Updated: 2024/09/03 21:47:34 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int ft_count_word(char *str)
{
	int i = 0;
	int c = 1;
	if(str[i] == '\0')
		c = 0;
	while(str[i] == ' ' && str[i] != '\0')
		i++;
	while(str[i])
	{
		if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			c++;
		i++;
	}
	return(c);
	
}

char *ft_get_word(char *str, int start, int len)
{
	char *new = malloc((len + 1) * sizeof(char));
	int i = 0;
	while(len--)
	{
		new[i] = str[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return(new);
}

char **split(char *str)
{
	int x = ft_count_word(str);
	int i = 0;
	int j = 0;
	int m = 0;
	char **result;
	result = malloc((x + 1) * sizeof(char *));
	while(str[i])
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
			result[m] = ft_get_word(str, j, i - j);
			m++;
		}
	}
	result[m] = NULL;
	return(result);
	
	
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
	
	while(split(str)[i] != NULL)
	{
		printf("%s\n", split(str)[i]);
		i++;
	}
	//printf("%s\n", ft_split(str)[i]);
	return(0);
}