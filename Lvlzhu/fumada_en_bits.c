#include <unistd.h>
#include <stdio.h>
void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while(i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);    
    }
}

void reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char bits;

    while(i <= 7)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
        i++;
    }
}


void swap_bits(unsigned char octet)
{
    int i = 4;
    unsigned char bits;

    while(i--)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
    }
    i = 7;
    while(i >= 4)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits,1);
        i--;
    }
}
unsigned char	reverse_char(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
unsigned char swap_bitsPas(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(void)
{
    print_bits(52);
    write(1, "\n", 1);
    reverse_bits(52);
    write(1, "\n", 1);
    swap_bits(52);
    write(1, "\n", 1);
    printf("%d\n",reverse_char(52));
    printf("%i",swap_bitsPas(52));
    return(0);
}