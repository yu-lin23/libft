/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:59:37 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/04 17:20:06 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(const char *s)
{
	char *new;
	int len;
	int i;
	int j;

	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] == ' ' || s[0] == '\n' || s[0] == '\t')
			i++;
		new[j] = s[i];
		i++;
		j++;
		if (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			new[j] = '\0';
	}
	new[j] = '\0';
	return (new);
}
