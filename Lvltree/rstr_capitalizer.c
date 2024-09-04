#include <unistd.h>

void capi(char *s)
{
        int i = 0;
        while(s[i] != '\0')
        {
                if(s[i] >= 'A' && s[i] <= 'Z')
                        s[i] += 32;
        i++;
        }
        i = 0;
        while(s[i] != '\0')
        {
                if(s[i] >= 'a' && s[i] <= 'z')
                {
                        if(s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
                        {
                                s[i] -= 32;
                        }
                }
                write(1, &s[i], 1);
        i++;
        }
        write(1, "\n", 1);
}

int  main(int argc, char *argv[])
{
        if (argc <= 1)
        {
                write(1, "\n", 1);
                return(1);
        }
        int i = 1;
        while(argv[i])
        {
                capi(argv[i]);
                i++;
        }
        return(0);
}
