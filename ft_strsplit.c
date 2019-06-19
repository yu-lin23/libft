/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:05 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/18 17:57:51 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**multiplewords;
	int		i;
	int		nb;
	int		count;

	i = 0;
	count = 0;
	if (!(multiplewords = (char**)ft_memalloc(sizeof(ft_countwords(s, c) + 1)))
			|| !(s))
		return (NULL);
	nb = 0;
	while (i < ft_countwords(s, c))
	{
		count += nb;
		while (s[count] == c)
			count++;
		nb = ft_wordlen(s + count, c);
		if (!(multiplewords[i] = ft_strnew(nb + 1)))
			multiplewords[i] = NULL;
		if (i == 0)
			multiplewords[i] = ft_strsub(s, count + 1, nb);
		multiplewords[i] = ft_strsub(s, count, nb);
		i++;
	}
	multiplewords[i] = 0;
	return (multiplewords);
}

/*int		main(void)
{
	char *str = "      split   this for  me   !    ";
	char **array = ft_strsplit(str, ' ');

	int i = 0;
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
}*/
