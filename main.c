/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:32:10 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/03 13:16:22 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char chr = '.';

	printf("String after %c is - %s", chr, ft_memchr(str, chr, ft_strlen(str)));
	return (0);
}
