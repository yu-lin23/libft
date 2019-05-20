#ifndef _LIBFT_H_
#define _LIBFT_H_


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcpy(char *source, char *destination);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strdup(char *src);
char	*ft_strcat(char *s1, const char*s2);
char	*ft_strncat(char *dest, char *src, int n);
int		ft_strcmp(char *s1, char *s2);

#endif
