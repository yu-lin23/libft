/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:05 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/13 10:13:59 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char	**ft_strsplit(char const *s, char c)
{
	char **multipleWords;
	int i;
	int nb;
	char *newstr;

	newstr = writewords(s, c);
	i = 0;

	while (s[i] && j < words)
	{

	}
}*/

int countwords(char const *str, char c)
{
	int i;
	int j;
	int numberOfWords;

	i = 0;
	j = 0;
	numberOfWords = 0;
	while (str[i] != '\0')
	{
		if (str[0] == c)
		{
			i++;
			continue;
		}
		j++;
		if (str[j] == '\0')
		{
			numberOfWords++;
			break;
		}
		else if (str[i] == c && str[j] != c )
			numberOfWords++;
		i++;
	}
	printf("Number of words is %d", numberOfWords);
	return (0);
}

/*char *writewords(char *str, char c)
{
	char *newWord;
	int i;
	int j;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			newWord[j] = str[i];
			i++;
			j++;
			while (str[i] == c)
				i++;
		}
		else
		{
			newWord[j] = string[i];
			i++;
			j++;
		}
	}
	if (str[i - 1] != c)
	{
		newWord[j] = c;
		j++;
	}
	newWord[j] = '\0';
	return (newWord)
}*/

int main()
{
	countwords("*hello*fellow***students*", '*');
	return (0);
}
