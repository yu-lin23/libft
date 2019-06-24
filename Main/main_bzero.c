/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:10:46 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/24 10:32:10 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>

void		error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	testing(int mine[], int theirs[])
{
	int i = 0;
	while (i < 10)
	{
		if (mine[i] != theirs[i])
		{
			printf("Difference detected at index: %d\nmine: %d\nTheirs: %d\n", i, mine[i], theirs[i]);
			error_and_exit("Failed\n");
		}
		i++;
	}
}

int		main(void)
{
	int my_nbrs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int their_nbrs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	ft_bzero(my_nbrs, 12);
	bzero(their_nbrs, 12);
	testing(my_nbrs, their_nbrs);
	ft_bzero(my_nbrs, 17);
	bzero(their_nbrs, 17);
	testing(my_nbrs, their_nbrs);

	printf("All numbers passed\n");
	return (0);
}
