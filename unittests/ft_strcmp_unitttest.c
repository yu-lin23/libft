

#include <stdio.h>
#include "../libft.h"

void 	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	assert_true(int mine, int theirs)
{
	printf("mine ; %d -- theirs : %d\n", mine, theirs);
	if (mine != theirs)
	{
		printf("Error: mine = %d : theirs = %d\n", mine, theirs);
		error_and_exit("Failed");
	}
}


int	main(void)
{
	int mine = ft_strcmp("Hello", "Hello");
	int theirs = strcmp("Hello", "Hello");
	
	assert_true(mine, theirs);
	mine = ft_strcmp("", "");
	theirs = strcmp("", "");
	assert_true(mine, theirs);

	// These both segfault. Test during defense accordingly.
	/* Uncomment to test that they crash.
	mine = ft_strcmp(NULL, NULL);
	theirs = strcmp(NULL, NULL);
	assert_true(mine, theirs);
	*/
	mine = ft_strcmp("TRUE", "NOT TRUE");
	theirs = strcmp("TRUE", "NOT TRUE");
	assert_true(mine, theirs);
	return 0;
}












