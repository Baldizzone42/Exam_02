int *sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int swap = tab[i];
	//intinicio = size;
	while(i < size)
	{
		if(tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
	return(tab);
}
#include <stdio.h>
int main()
{
	int tab[] = {11, 5, 4 ,0 ,3, 99};
	int size = 6;
	int i = 0;
	while(i < size)
	{
		printf("%d\n", sort_int_tab(tab, size)[i++]);
	}
	return(0);
}