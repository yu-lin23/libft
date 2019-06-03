/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:20:29 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/03 16:04:51 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*	ft_memalloc(size_t size)
{
	char *mem;
	unsigned long i;

	i = 0;
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	while (i < size)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
