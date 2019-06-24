/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 11:22:29 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 11:43:46 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	testing(int mine, int theirs)
{
	printf("Mine:	%d\n", mine);
	printf("Theirs:	%d\n", theirs);
	if (mine != theirs)
		error_and_exit("Failed\n");
	else 
		printf("Passed\n\n");
}

int		main(void)
{
	int mine;
	int theirs;

	mine = ft_strcmp("Hello", "Hello");
	theirs = strcmp("Hello", "Hello");
	testing(mine, theirs);
	mine = ft_strcmp("", "");
	theirs = strcmp("", "");
	testing(mine, theirs);
	/*These both segfault. Test during defense accordingly.
	Uncomment to test if they crash.
	mine = ft_strcmp(NULL, NULL);
	theirs = strcmp(NULL, NULL);
	testing(mine, theirs);*/
	mine = ft_strcmp("TRUE", "NOT TRUE");
	theirs = strcmp("TRUE", "NOT TRUE");
	testing(mine, theirs);
	return (0);
}
