#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int do_op(char *aa, char *m, char *bb)
{
	int a;
	int b;
	int x;

	x = 0;
	a = atoi(aa);
	b = atoi(bb);
	if (m[0] == '-')
		x = a - b;
	else if (m[0] == '+')
		x = a + b;
	else if (m[0] == '*')
		x = a * b;
	else if (m[0] == '/')
		x = a / b;
	else if (m[0] == '%')
		x = a % b;
	
	return(x);
}


int main (int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *a = argv[1];
	char *m = argv[2];
	char *b = argv[3];
	if((m[0] != '+') && (m[0] != '-') && (m[0] != '*') && (m[0] != '/') && (m[0] != '%'))
	{
		write(1, "\n", 1);
		return(1);
	}
	printf("%d\n", do_op(a, m, b));
	return(0);
}