/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:15:35 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/03 14:38:43 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long i;
	unsigned char *str;
	unsigned char chr;

	i = 0;
	str = (unsigned char*)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == chr)
			return (str);
		i++;
	}
	return (NULL);
}
