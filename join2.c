

#include "libft.h"

char 	*join(char *s1, char *s2)
{
	char *newstr;
	size_t size = ft_strlen(s1) + ft_strlen(s2);

	newstr = (char *)malloc(sizeof(char) * size + 1);
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	newstr[size] = '\0';
	return newstr;
}

int	main(void)
{
	printf("%s\n", join("Hello ", "World\n"));
	return 0;
}
