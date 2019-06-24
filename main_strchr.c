/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:57:11 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 11:21:10 by yu-lin           ###   ########.fr       */
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
	printf("Mine:	%s\n", mine);
	printf("Theirs:	%s\n", theirs);
	if (mine == NULL && theirs == NULL)
	{
		printf ("Both has segmentation faults\n\n");
		return ;
	}
	if (strcmp(mine, theirs) != 0)
	{
		printf("Difference:\nMine: %s, Theirs: %s\n", mine, theirs);
		error_and_exit("Failed");
	}
	else
		printf("Passed\n\n");
}

int		main(void)
{
	char *mine = ft_strchr("I've got a lovely bunch of coconuts", 'l');
	char *theirs = strchr("I've got a lovely bunch of coconuts", 'l');
	testing(mine, theirs);
	mine = ft_strchr("Can you find it?", 'z');
	theirs = strchr("Can you find it?", 'z');
	testing(mine, theirs);
	mine = ft_strchr("     ", ' ');
	theirs = strchr("     ", ' ');
	testing(mine, theirs);
	mine = ft_strchr("kkkkkkkkkkK", 'K');
	theirs = strchr("kkkkkkkkkkK", 'K');
	testing(mine, theirs);

	printf("All tests passed\n");
	return (0);
}
