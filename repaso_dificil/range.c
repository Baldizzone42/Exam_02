#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *result;
	int dif = 0;
	if(start > end)
	{
		dif = start - end + 1;
	}
	else if(end > start)
		dif = end - start + 1;
	else if(start == end)
		dif = 1;
	result = malloc((dif)*sizeof(int));
	if(!result)
		return(0);
	int i = 0;
	if(start <= end)
	{
		while(start <= end)
		{
			result[i] = start;
			start++;
			i++;
		}
	}
	else if(end <= start)
	{
		while(end <= start)
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	return(result);
}


#include <stdio.h>
int main(void)
{
	/*
	int start = 1;
	int end = 3;
	int i = 0;
	while(ft_range(start, end)[i])
	{
		printf("%d", ft_range(start, end)[i]);
		i++;
	}*/
	int start = -4;
	int end = 4;
	int *tab = ft_range(start,end);
	int i = 0;


	int size = end - start;
	if(size < 0)
		size = -size;
	size++;

	while(size--)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return(0);
}