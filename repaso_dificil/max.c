int		max(int* tab, unsigned int len)
{
	int number =tab[0];
	int i = 0;
	if(len == '\0')
		return(0);
	while(len--)
	{
		if(number < tab[i])
		{
			number = tab[i];
		}
		i++;
	} 
	return(number);
}
#include <stdio.h>
int main(void)
{
	int tab[] = {};
	int len = 0;
	printf("%d", max(tab, len));
	return(0);
}