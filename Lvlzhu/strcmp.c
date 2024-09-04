int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s2[i])
            i++;
        else
            return (s1[i] - s2[i]);
    }
    return(0);
}
 #include <stdio.h>

int main(void)
{
    char s1[] = "holab";
    char s2[] = "hola";
    printf("%d",ft_strcmp(s1, s2));
    return(0);
}