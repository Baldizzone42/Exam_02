#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int r;

    r = 0;
    i = 0;
    while (s[i] != '\0')
    {   
        r = 0;
        while (reject[r] != '\0')
        {
            if(s[i] == reject[r])
            {
                return(i);
            }
            r++;
        }
        i++;
    }
    return(0);
}
#include <string.h>
#include <stdio.h>
int main (void)
{

    printf("%zu", ft_strcspn("hola", "l"));
    return(0);
}