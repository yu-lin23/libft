/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:47:21 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 10:36:20 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Code to test the system's atoi vs own's atoi*/
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void		error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void		testing(int mine, int theirs)
{
	printf("Mine:	%d\n", mine);
	printf("Theirs:	%d\n", theirs);

	if (mine != theirs)
		error_and_exit("Failed\n");
	else
		printf("Passed\n");
}

int		main(void)
{
	int mine;
	int theirs;

	printf("------Basic tests------\n");
	mine = ft_atoi("123456");
	theirs = atoi("123456");
	testing(mine, theirs);
	mine = ft_atoi("-99999");
	theirs = atoi("-99999");
	testing(mine, theirs);

	printf("------Whitespace and funny characters------\n");
	mine = ft_atoi("H3LL0 W0rLD");
	theirs = atoi("H3LL0 W0rLD");
	testing(mine, theirs);
	mine = ft_atoi("2468BlahBlahBlah13579Blah");
	theirs = atoi("2468BlahBlahBlah13579Blah");
	testing(mine, theirs);
	mine = ft_atoi("                    ");
	theirs = atoi("                    ");
	testing(mine, theirs);
	mine = ft_atoi("          42");
	theirs = atoi("          42");
	testing(mine, theirs);
	
	printf("------Extreme numbers------\n");
	mine = ft_atoi("999999999999999999999999999999999999999999");
	theirs = atoi("999999999999999999999999999999999999999999");
	testing(mine, theirs);
	mine = ft_atoi("-999999999999999999999999999999999999999999");
	theirs = atoi("-999999999999999999999999999999999999999999");
	testing(mine, theirs);

	printf("All ft_atoi tests passed\n");
	return (0);
}
