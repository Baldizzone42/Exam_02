

#include <stdlib.h>

int longitud_de_palabra(char *inicio_palabra, char delimitador)
{
    int numero_de_caracteres = 0;

    while (inicio_palabra[numero_de_caracteres] != '\0'
        && inicio_palabra[numero_de_caracteres] != delimitador)
    {
        numero_de_caracteres ++;
    }
    
    return numero_de_caracteres;
}


int numero_de_palabras(char *frase, char delimitador)
{
    int numero_palabras = 0;
    int indice = 0;

    while (frase[indice] != '\0')
    {
        if (frase[indice] == delimitador)
        {
            // Es un delimitador
            indice ++;
        }
        else
        {
            // es un inicio de palabra
            numero_palabras++;
            indice = indice + longitud_de_palabra(&frase[indice], delimitador);
        }
    }

    return numero_palabras;
}

char **split(char *frase, char delimitador)
{
    int numero_palabras = numero_de_palabras(frase, delimitador);

    char **splt = ft_calloc(sizeof(char *) * (numero_palabras + 1));
    if (!splt)
        return 0;

    int indice = 0;
    numero_palabras = 0;

    while (frase[indice] != '\0')
    {
        if (frase[indice] == delimitador)
        {
            // Es un delimitador
            indice ++;
        }
        else
        {
            // es un inicio de palabra
            numero_palabras++;
            int longitud = longitud_de_palabra(&frase[indice], delimitador);
            splt[numero_palabras] = ft_substr(frase, indice, longitud);
            if (!splt[numero_palabras])
            {
                liberar_split(splt);
            }
            indice = indice + longitud;
        }
    }


    return splt;
}
int main(int argc, char **argv)
{
    return (numero_de_palabras(argv[1], ' '));
}