#include <unistd.h>

char *ft_smoking(char *s)
{
    int i;

    i = 0;
    while(s[i] == ' ')
            i++;
    while(s[i] != '\0')
    {
        while(s[i] == ' ')
        {
            i++;
            if((s[i] != ' ') && (s[i] != '\0'))
            {
                write(1, " ", 1);
                write(1, &s[i], 1);
            }
        }
        while (s[i] != ' ' && s[i] != '\0')
        {
            write(1, &s[i], 1);
            i++;
        }
    }
    return(s);
}


int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        return(0);
    }
    char *str;
    str = argv[1];
    ft_smoking(str);
    return(0);
}
