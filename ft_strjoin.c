/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:59:35 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/09 00:47:32 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	int len1;
	int len2;
	int i;
	int j;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i <= len1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		new[len1 + j] = s2[j];
		j++;
	}
	new[len1 + len2 + 1] = '\0';
	return (new);
}
