/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:58:32 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/19 17:27:01 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{


	printf("number is %d\n", ft_strnequ("Hello", "Heelo", 4));
	return 0;
}
