/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:26:05 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/10 15:55:14 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int countwords(char const *str, char c)
{
	unsigned char s;

	s = ft_strtrim(str);
	printf("%s", (unsigned char *)s);
	//printf("number of words is %d", numberOfWords);
	return (0);
}

int main()
{
	countwords("*hello*fellow***students*", '*');
	return (0);
}
