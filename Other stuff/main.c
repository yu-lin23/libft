

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char **array = ft_strsplit("Hellr eotlf, my name is Alyson", ' ');
	
	int i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
