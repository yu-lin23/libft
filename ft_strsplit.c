/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:05 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/18 14:11:01 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char **multipleWords;
	int i;
	int count;
	int start;

	i = 0;
	count = 0;
	multipleWords = (char**)ft_memalloc(sizeof(ft_countwords + 1));
	if (!(multipleWords || !(s)))
		return (NULL);
	while (s[count] != '\0')
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		start = count;
		if (s[count] == '\0')
			break;
		while (s[count] != c && s[i] != '\0')
			count++;
		multipleWords[i] = ft_strsub(s, start, (count - start));
		i++;
	}
	multipleWords[i] = NULL;
	return (multipleWords);
}

int		main(void)
{
	char **array = ft_strsplit("hello", '*');

	int i = 0;
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
}
