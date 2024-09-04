/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:04:55 by jormoral          #+#    #+#             */
/*   Updated: 2024/06/07 14:07:46 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_last_word(char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;
    i = i -1;
    while(s[i] == ' ')
        i--;
    while(s[i] != ' ')
        i--;
    i = i + 1;
    while(s[i] != ' ' && s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main (int argc, char *argv[])
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    char *str;
    str = argv[1];
    ft_last_word(str);
    return(0);
}
