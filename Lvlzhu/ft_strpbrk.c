/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:27:54 by jormoral          #+#    #+#             */
/*   Updated: 2024/05/31 18:08:54 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;
    char *s;
    char *b;

    b = (char *)s2;
    s = (char *)s1;
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while(b[j] != '\0')
        {
            if(s[i] == b[j])
            {
                return(&s[i]);
            }
            j++;
        }
        i++;
    }
    return(NULL);
}
int main(void)
{
    char *s;
    char *busca;
    s = "Sergio";
    busca = "i";
    printf("%s", ft_strpbrk(s, busca));
    return(0);
}