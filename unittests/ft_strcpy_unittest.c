

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	assert_equals(char *mine, char *theirs)
{
	if (strcmp(mine, theirs) != 0)
	{
		printf("Difference mine = %s -- theirs = %s\n", mine, theirs);
		error_and_exit("Failed\n");
	}
}

int	main(void)
{
	char	mine[300];
	char	theirs[300];	

	ft_strcpy(mine, "Hello");
	strcpy(theirs, "Hello");
	assert_equals(mine, theirs);
	ft_strcpy(mine, "World\n");
	strcpy(theirs, "World\n");
	assert_equals(mine, theirs);
	
	/* Uncomment - segfault
	ft_strcpy(mine, NULL);
	strcpy(theirs, NULL);
	assert_equals(mine, theirs);
	char my_overflow[10];
	char their_overflow[10];
	ft_strcpy(my_overflow, "222222222222222222222222222222222222222222222222222222222222222");
	strcpy(their_overflow, "222222222222222222222222222222222222222222222222222222222222222");
	*/
	ft_strcpy(mine, "");
	strcpy(theirs, "");
	assert_equals(mine, theirs);

	return 0;	
}








