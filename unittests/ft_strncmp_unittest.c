

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
	int mine = ft_strncmp("Hello", "Hello", 4);
	int theirs = strncmp("Hello", "Hello", 4);
	
	assert_true(mine, theirs);
	mine = ft_strncmp("", "", 7);
	theirs = strncmp("", "", 7);
	assert_true(mine, theirs);

	// These both segfault. Test during defense accordingly.
	/* Uncomment to test that they crash.
	mine = ft_strncmp(NULL, NULL, 5000);
	theirs = strncmp(NULL, NULL, 5000);
	assert_true(mine, theirs);
	*/
	mine = ft_strncmp("TRUE", "NOT TRUE", 0);
	theirs = strncmp("TRUE", "NOT TRUE", 0);
	assert_true(mine, theirs);
	return 0;
}












