/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:46:50 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/07 15:30:06 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*temp;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	temp = (char*)malloc(sizeof(*temp) * (len + 1));
	if (temp == NULL)
		return (NULL);
	while (i < len)
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
