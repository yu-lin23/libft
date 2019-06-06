/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:05 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/05 12:51:50 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char **multipleWords;

	while (s[i] && j < words)
	{

	}
}

int countwords(char const *str, char c)
{
	int i;
	int j;
	int numberOfWords;

	i = 0;
	numberOfWords = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == c && s[j] != c )
			if (s[j] == '\0')
				break;
			numberOfWords++;
			j++;
		i++;
	}
	printf("number of words is %d", numberOfWords);
	return (0);
}

int main()
{
	ft_strsplit("*hello*fellow***students*", '*');
	return (0);
}
