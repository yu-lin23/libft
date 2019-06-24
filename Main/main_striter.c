/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:54:24 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 15:04:57 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	function(char *str)
{
	printf("%s\n", str);
}

int		main(void)
{
	void (*func1)(char *);

	func1 = &function;
	ft_striter("HelloWorld", func1);
	return (0);
}
