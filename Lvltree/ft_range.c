#include <stdlib.h>
#include <stdio.h>


int     *ft_range(int start, int end)
{
  int *nb;
  int i = 0;
  int dif;

  dif = end - start;
  if(dif < 0)
          dif = dif * -1;
  nb = malloc((dif + 1) * sizeof(int));
  if (!nb)
          return(0);
  if(start == end)
          nb[i] = start;
  if (start < end)
  {
          while(start <= end)
          {
                  nb[i] = start;
                  i++;
                  start++;
          }
  }
  else if (end < start)
  {
          while(end <= start)
          {
                  nb[i] = start;
                  i++;
                  start--;
          }
  }

  return(nb);
}


int main(void)
{
	int start = 0;
	int end = -3;
	int *x = ft_range(start, end);
	int i = 0;
	int dif = end -start;
	if(dif < 0)
		dif = dif * -1;
	while(i <= dif)
	{
		printf("%d\n", x[i]);
		i++;
	}
	return(0);
}