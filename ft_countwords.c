/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:44:09 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/18 14:07:09 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *str, char c)
{
	int i;
	int numberOfWords;
	
	i = 0;
	numberOfWords = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] == '\0')
			return (numberOfWords++);
		numberOfWords++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (numberOfWords);
}
