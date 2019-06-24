/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:33:57 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 15:33:02 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		function_is_a_thing(unsigned int integer, char character)
{
	printf("Unsigned int is %d and the char is %c\n", integer,character);
	return (0);
}

int		main(void)
{
	char (*func1)(unsigned int, char);
	char *str = strdup("Hello World");

	func1 = &function_is_a_thing;
	str = ft_strmapi(str, func1);
	printf("%s", str);
	return (0);
}
