#include <unistd.h>


void capito(char *s)
{
        int i = 0;
        int j = 0;
        while(s[j] != '\0')
        {
                if(s[j] >= 'A' && s[j] <= 'Z')
                        s[j] = s[j] + 32;
                j++;
        }
        if(s[i] >= 'a' && s[i] <= 'z')
        {
                s[i] = s[i] - 32;
                write(1, &s[i], 1);
        }
        else if(s[i] != '\0')
                write(1, &s[i], 1);
        i++;
                while(s[i] != '\0')
                {       
                        if((s[i] == ' '  || s[i] == '\t') && (s[i + 1] != ' '  && s[i + 1] != '\t'))
                        {
                                write(1, " ", 1);
                                i++;
                                s[i] = s[i] - 32;
                                write(1, &s[i], 1);
                        }
                        else if(s[i] != '\0')
                                write(1, &s[i], 1);
                        i++;
                }
}

#include <stdio.h>
int main(int argc, char *argv[])
{
        if(argc == 1)
        {
                write(1, "\n", 1);
                return(1);
        }
        int i = 1;
        while(argv[i] != NULL)
        {
              capito(argv[i]);
              write(1, "\n", 1);
              i++;  
        }
        return(0);
}
