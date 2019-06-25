/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:11:30 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/25 10:10:05 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int nbr;
	int check;

	nbr = 0;
	check = 1;
	while ((*str == '\n') || (*str == '\t') || (*str == '\v')
			|| (*str == ' ') || (*str == '\f') || (*str == '\r'))
		str++;
	if (str == 0)
		return (0);
	if (*str == '-')
		check = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + (*str - 48) * check;
		str++;
	}
	return (nbr);
}
