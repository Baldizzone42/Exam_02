#include <stdio.h>
unsigned int    lcm(unsigned int a, unsigned int b)
{
    int aa;
    int bb;

    aa = a;
    bb = b;

    while (aa % a != 0 || aa % b != 0)
    {
        if(aa < bb)
        {
            aa = aa + a;
        }
        else if(bb < aa)
        {
            bb = bb + b;
        }
    }
    return(aa);
}
int main(void)
{
    unsigned int a = 15;
    unsigned int b = 18;
    
    printf("%d", lcm(a, b));
    return(0);
}