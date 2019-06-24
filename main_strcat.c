/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:33:58 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 10:55:32 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}
void	testing(char *mine, char *theirs)
{
	printf("Mine:	%s\n", mine);
	printf("Theirs:	%s\n", theirs);
	if (mine != theirs)
		error_and_exit("Failed\n");
}

int		main(void)
{
	char mine[20] = "Hello ";
	char theirs[20] = "Hello ";
	char my_src[20] = "world";
	char their_src[20] = "world";

	ft_strcat(mine, my_src);
	strcat(theirs, their_src);
	testing(mine, theirs);
	printf("Passed\n");

	return (0);
}
