#include "libft.h"
#include <stdio.h>

int		main()
{
	char *str = "*****   Hello   ***  World    ****";
	char **ss;
	char *s1;
	char *s2;
	int i = 0;

	ss = ft_strsplit(str, '*');
	while (ss[i])
	{
		ft_putendl(ft_strtrim(ss[i]));
		i++;
	}
	s1 = ft_strmap(ft_strtrim(ss[0]), ft_toupper);
	s2 = ft_strmap(ft_strtrim(ss[1]), ft_toupper);
	ft_putendl(ft_strjoin(s1, s2));
	i = 0;
	while (i < 128)
	{
		if (ft_isprint(i))
		{
			ft_putnbr(i);
			ft_putendl("can print");
		}
		else
		{
			ft_putnbr(i);
			ft_putendl("cannot print");
		}
		i++;
	}
	return (0);
}
