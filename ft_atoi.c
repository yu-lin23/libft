/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:11:30 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/01 14:05:11 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nbr;
	int check;

	i= 0;
	nbr = 0;
	check = 1;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') || (str[i] == ' ' ) || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str == 0)
		return (0);
	if (str[i] == '-')
		check = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * check);
}
