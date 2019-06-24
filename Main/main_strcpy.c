/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 11:44:41 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 11:55:10 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	testing(char *mine, char *theirs)
{
	if(strcmp(mine, theirs) != 0)
	{
		printf("Difference:\nMine = %s\nTheirs = %s\n", mine, theirs);
		error_and_exit("Failed\n");
	}
}

int		main(void)
{
	char mine[300];
	char theirs[300];

	ft_strcpy(mine, "Hello");
	strcpy(theirs, "Hello");
	testing(mine, theirs);
	ft_strcpy(mine, "World\n");
	strcpy(mine, "Worlds\n");
}
