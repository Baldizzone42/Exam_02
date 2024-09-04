#include <unistd.h>


void replace(char *s, char *a, char *b)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == a[0])
		{
			s[i] = b[0];
			write(1, &s[i], 1);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}





int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	char *s3 = argv[3];
	if(s2[1] != '\0' || s3[1] != '\0')
	{
		write(1, "\n", 1);
		return(1);
	}
	replace(s1, s2, s3);
	return(0);
}