

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
	{
		printf("NULL : Pass\n");
		return ;
	}

	if (strcmp(mine, theirs) != 0)
	{
		printf("Difference mine : %s -- theirs %s\n", mine, theirs);
		error_and_exit("Failed\n");
	}
	printf("Pass\n");
}

int	main(void)
{
	char	*mine;
	char	*theirs;

	mine = ft_strstr("Hello world", "lo");
	theirs = strstr("Hello world", "lo");
	assert_true(mine, theirs);
	mine = ft_strstr("Hello world", "12313");
	theirs = strstr("Hello world", "12313");
	assert_true(mine, theirs);
	mine = ft_strstr("Hello world", "Hello world");
	theirs = strstr("Hello world", "Hello world");
	assert_true(mine, theirs);
	mine = ft_strstr("Hello world", "Hello worlds");
	theirs = strstr("Hello world", "Hello worlds");
	assert_true(mine, theirs);
	/* Segfault test
	mine = ft_strstr(NULL, "42");
	theirs = strstr(NULL, "42");
	assert_true(mine, theirs);
	mine = ft_strstr("4242", NULL);
	theirs = strstr("4242", NULL);
	assert_true(mine, theirs);
	mine = ft_strstr(NULL, NULL);
	theirs = strstr(NULL, NULL);
	assert_true(mine, theirs);
	*/
	mine = ft_strstr("", "4242424");
	theirs= strstr("", "4242424");
	assert_true(mine, theirs);

	return (0);

















}
