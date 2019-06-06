/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:29:33 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/06 12:31:18 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long i;
	unsigned char *d;
	unsigned const char *s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	return (dst);
}
