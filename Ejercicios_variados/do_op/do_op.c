#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int do_op(int a, char c, int b)
{
	if(c == '-')
		return(a - b);
	else if(c == '+')
                return(a + b);
	else if(c == '*')
                return(a * b);
	else if(c == '/')
                return(a / b);
	else if(c == '%')
                return(a % b);

	return(0);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char c = argv[2][0];

	printf("%d\n", do_op(a, c, b));
	return(0);
}
