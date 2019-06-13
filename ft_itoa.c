/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:50:56 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/11 17:19:38 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_length(long n)
{
	size_t i;
	
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char	*str;
	int		i;
	unsigned long	len;

	i = 0;
	len = ft_length(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	*str = '\0';
	return (str);
}
