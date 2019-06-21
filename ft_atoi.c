/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:11:30 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/21 15:22:38 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int nbr;
	int check;

	nbr = 0;
	check = 1;
	if (ft_strlen(str) > 20 && ft_strcmp(str, "9223372036854775807") >= 0)
		return (-1);
	else if (ft_strlen(str) > 21 && ft_strcmp(str, "-9223372036854775808") >= 0)
		return (0);
	while ((*str == '\n') || (*str == '\t') || (*str == '\v')
			|| (*str == ' ') || (*str == '\f') || (*str == '\r'))
		str++;
	if (str == 0)
		return (0);
	if (*str == '-')
		check = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && (*str >= '0') && (*str <= '9'))
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	return (nbr * check);
}
