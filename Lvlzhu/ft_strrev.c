/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:22:59 by jormoral          #+#    #+#             */
/*   Updated: 2024/05/31 19:44:25 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char *s;
    
    j = 0;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    s = malloc ((i) * sizeof (char));
    while(i--)
    {
        s[j] = str[i];
        j++;
    }
    return(s);
}

int main (void)
{
    char x[] = "Hola";
    printf("%s", ft_strrev(x));
    return(0);
}