unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int aa;

	aa = a;
	while(aa % a != 0 || aa % b != 0)
	{
		aa = aa + a;
	}
	return(aa);
}
#include <stdio.h>
int main(void)
{
	int a = 3;
	int b = 15;
	printf("%d", lcm(a, b));
	return(0);
}