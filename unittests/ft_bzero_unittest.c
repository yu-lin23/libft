

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"


void	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	assert_equals(int my_numbers[], int their_numbers)
{
	int	i = 0;

	while (i < 10)
	{
		if (my_numbers[i] != their_numbers[i])
		{
			printf("Difference detected at index %d my_numbers = %d : their_numbers: %d\n", i,
				my_numbers[i], their_numbers[i]);
			error_and_exit("Failed\n");
		}
		i++;
	}
}

int	main(void)
{
	int	my_numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	their_numbers[] = {1, 2 ,3 ,4 ,5, 6, 7, 8, 9, 10};

	ft_bzero(my_numbers, 12);
	bzero(their_numbers, 12);
	assert_equals(my_numbers, their_numbers);
	ft_bzero(my_numbers, 17);
	bzero(their_numbers, 17);
	assert_equals(my_numbers, their_numbers);
	printf("All numbers passed\n");

}
