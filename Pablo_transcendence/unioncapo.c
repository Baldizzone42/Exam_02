
#include <unistd.h>

void imprime_s(char *s, char *s1)
{
    int bitmap[256];

    // Inicializamos el array cn ceros.
    int i = 0;
    while (i < 256)
    {
        bitmap[i] = 0;
        i++;
    }

    i = 0;
    while (s[i])
    {
        if (!bitmap[(int)s[i]])
        {
            write(1, &s[i], 1);
            bitmap[(int)s[i]] = 1;
        }
        i++;
    }

    i = 0;
    while (s1[i])
    {
        if (!bitmap[(int)s1[i]])
        {
            write(1, &s1[i], 1);
            bitmap[(int)s1[i]] = 1;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    (void)argc;
    char *s1 = argv[1];
    char *s2 = argv[2];

    imprime_s(s1, s2);
    return 0;
}