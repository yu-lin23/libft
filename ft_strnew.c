/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:23:52 by yu-lin            #+#    #+#             */
/*   Updated: 2019/05/29 09:36:44 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char*) * size);
	if (str == NULL)
		return (NULL);
	ft_memet(str, '\0', size + 1);
	return (str);
}
