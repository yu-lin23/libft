/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:16:27 by yu-lin            #+#    #+#             */
/*   Updated: 2019/05/27 15:33:56 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	if (c == 0)
		return ((char *)s + len);
	while (len > 0)
	{
		len--;
		if (s[len] == c)
			return ((char *)s + len);
	}
	return (NULL);
}
