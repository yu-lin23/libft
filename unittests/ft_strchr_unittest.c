

#include <stdio.h>
#include <string.h>
#include "../libft.h"


void	error_and_exit(char *str)
{
	printf("%s\n", str);
	exit(1);
}

void	assert_true(char *mine, char *theirs)
{
	if (mine == NULL && theirs == NULL)
		return ;	
	if (strcmp(mine, theirs) != 0)
	{
		printf("Difference : mine = %s , theirs = %s\n", mine, theirs);
		error_and_exit("Failed");
	}
}

int	main(void)
{
	char	*mine = ft_strchr("Hello world and stuff", 'a');
	char	*theirs = strchr("Hello world and stuff", 'a');
	assert_true(mine, theirs);
	mine = ft_strchr("My name is 42", 'f');
	theirs = strchr("My name is 42", 'f');
	assert_true(mine, theirs);
	mine = ft_strchr("      ", ' ');
	theirs = strchr("      ", ' ');
	assert_true(mine, theirs);
	mine = ft_strchr("kkkkkkkkkkkkkkkkkkkkkkkK", 'K');
	theirs = strchr("kkkkkkkkkkkkkkkkkkkkkkkK", 'K');
	assert_true(mine, theirs);
	printf("All tests passed\n");
	return 0;

}

