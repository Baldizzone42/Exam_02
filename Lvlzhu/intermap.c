#include <unistd.h>

void ft_union(char *s1, char *s2)
{
    int caracteres[256];
    int i = 0;
    int j;
    while(i < 256)
    {
        caracteres[i] = 0;
        i++;
    }
    i = 0;
    while(s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if(s1[i] == s2[j])
            {
                if(caracteres[(int)s1[i]] == 0)
                {
                    write(1, &s1[i], 1);
                    caracteres[(int)s1[i]] = 1;
                }
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

    char *s1 = argv[1];
    char *s2 = argv[2];
    ft_union(s1, s2);
    return(0);
}