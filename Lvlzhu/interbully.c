#include <unistd.h>
#include <stdio.h>


int check(char *s, int i)
{
    int x;

    x = 0;
    while (i > x)
    {
        if(s[i] == s[x])
            return(1);
        x++;
    }
    return(0);
}

void ft_inter(char *s, char *s1)
{
    int i;
    int j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while(s1[j] != '\0')
        {
            if(s[i] == s1[j])
            {
                if(check(s, i) == 0)
                    write(1, &s[i], 1);
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
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