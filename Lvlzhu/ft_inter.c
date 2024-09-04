#include <unistd.h>
#include <stdio.h>


void ft_inter(char *s, char *s1)
{
    int i;
    int j;
    int x;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while(s1[j] != '\0')
        {
            if(s[i] == s1[j])
            {
                x = 0;
                while (x < i && s[x] != s[i])
                {
                    x++;
                }
                if (x == i)
                    write(1, &s[i], 1);
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}



int main (int argc, char *argv[])
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return(1);
    }
    char *s = argv[1];
    char *s1 = argv[2];
    ft_inter(s, s1);
    return(0);
}