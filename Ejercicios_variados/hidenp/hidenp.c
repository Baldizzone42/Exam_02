#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	int i = 0;
	int x = 0;

	while(s2[x] != '\0' && s1[i] != '\0')
	{
		if(s1[i] == s2[x])
			i++;
		x++;
	}
	if(s1[i] == '\0')
                        write(1, "1", 1);
	else
		write(1, "0", 1);
}



int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	hidenp(s1, s2);
	write(1, "\n", 1);
	return(0);

}
