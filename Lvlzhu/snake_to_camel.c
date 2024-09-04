#include <unistd.h>

void snake_to_camel(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if(s[i] == '_')
        {
            i++;
            s[i] = s[i] - 32;
        }
        write(1, &s[i], 1);
        i++;
    }
}

int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    char *str;
    str = argv[1];
    snake_to_camel(str);
    return(0);
}