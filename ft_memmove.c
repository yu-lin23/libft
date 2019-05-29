/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:29:33 by yu-lin            #+#    #+#             */
/*   Updated: 2019/05/24 14:26:13 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)dst;
	src = (char *)src;
	if (src < dst)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*dst[len] = *src[len];
			len--;
		}
	}
}
