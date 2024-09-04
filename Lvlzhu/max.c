#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int result;
    int i = 0;

    result = tab[i];
    if(tab == NULL)
        return(0);
    while(len--)
    {
        if(result < tab[i])
            result = tab[i];
        i++;
    }
    return(result);
}


int main (void)
{
    int tab[] = {12, 5, 120, 22};
    int len = 3;
    printf("%i", max(tab, len));
    return(0);
}