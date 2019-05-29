/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:50:56 by yu-lin            #+#    #+#             */
/*   Updated: 2019/05/28 12:44:28 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	int		nb;

	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);

	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		nb *= -1;
		len++;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		nb /= 10;
		i--;
	}
	return (str);
}
