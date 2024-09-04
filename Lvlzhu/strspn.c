#include <stdio.h>

size_t strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;

    i = 0;
    while(s[i] != '\0')
    {
        j = 0;
        while(s[i] != accept[j])
        {
            j++;
            if(accept[j] == '\0')
                return(i);
        }
        i++;
    }
    return(i);
}

int main(void)
{
    char s[] = "1432";
    char accept[] = "0123";

    printf("%zu", strspn(s, accept));
    return(0);

}