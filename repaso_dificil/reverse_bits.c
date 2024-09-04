#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;
	while(i > 0)
	{
		bit = bit * 2 +(octet % 2);
		octet = octet / 2;
		i--;
	}
	return(bit);
}
void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while(i--)
	{
		bit = ((octet >> i & 1) + '0');
		write(1, &bit, 1);
	}
	write(1, "\n", 1);
}

void Preverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char bits;

    while(i <= 7)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
        i++;
    }
	write(1, "\n", 1);
}

#include <stdio.h>
int main(void)
{
	char a = 44;
	print_bits(a);
	Preverse_bits(a);
	printf("%c\n" ,reverse_bits(a));
	printf("%i" ,reverse_bits(a));
	return(0);
}