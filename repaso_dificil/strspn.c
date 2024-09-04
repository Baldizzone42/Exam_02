#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t j = 0;

	while(s[i] != '\0')
	{
		j = 0;
		while(s[i] != accept[j])
		{
			j++;
			if(accept[j] == '\0')
				return(i);
		}
		i++;
	}
	return(i);
}