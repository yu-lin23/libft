
/*
** Code to test the system's atoi vs my own implementation.
*/
#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>
#include <stdbool.h>

void		error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void		assert_equals(int mine, int theirs)
{
	if (mine != theirs)
	{
		printf("mine : %d\n", mine);
		printf("theirs : %d\n", theirs);
		error_and_exit("Failed");
	}
}

int		main(void)
{

	/*
	** Basic tests
	*/
	printf("Basic tests\n");
	int mine = ft_atoi("123456");
	int theirs = atoi("123456");
	assert_equals(mine, theirs);
	mine = ft_atoi("-99999");
	theirs = atoi("-99999");
	assert_equals(mine, theirs);
	/*
	** Whitespace and funny characters.
	*/
	printf("Whitespace and funny characters\n");
	printf("Input : ubngoqiwhgqh308340g8h3qgsdb\n"); 
	mine = ft_atoi("ubngoqiwhgqh308340g8h3qgsdb");
	theirs = atoi("ubngoqiwhgqh308340g8h3qgsdb");
	assert_equals(mine, theirs);
	printf("Input : 124124onnldsngoine24140jwq0gqwe9g\n"); 
	mine = ft_atoi("124124onnldsngoine24140jwq0gqwe9g");
	theirs = atoi("124124onnldsngoine24140jwq0gqwe9g");
	assert_equals(mine, theirs);
	mine = ft_atoi("                                ");
	theirs = atoi("                                ");
	assert_equals(mine, theirs);
	mine = ft_atoi("                           42");
	theirs = atoi("                           42");
	assert_equals(mine, theirs);
	/*
	** Funny numbers.
	*/
	printf("Funny numbers\n");
	mine = ft_atoi("-00000000000000000000000000000000004");
	theirs = atoi("-00000000000000000000000000000000004");
	assert_equals(mine, theirs);
	mine = ft_atoi("----------------------------------3");
	theirs = atoi("----------------------------------3");
	assert_equals(mine, theirs);
	mine = ft_atoi("+424242   99900");
	theirs = atoi("+424242   99900");
	assert_equals(mine, theirs);
	/*
	** Extreme numbers.
	*/
	printf("Extreme numbers\n");
	printf("Input : 999999999999999999999999999999999999999999999999999\n");
	mine = ft_atoi("999999999999999999999999999999999999999999999999999");
	theirs = atoi("999999999999999999999999999999999999999999999999999");
	assert_equals(mine, theirs);
	printf("Input:  -9999999999999999999999999999999999999999999999\n");
	mine = ft_atoi("-9999999999999999999999999999999999999999999999");
	theirs = atoi("-9999999999999999999999999999999999999999999999");
	assert_equals(mine, theirs);

	printf("All ft_atoi tests passed\n");
	return 0;
}
	












