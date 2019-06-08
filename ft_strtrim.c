/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:59:37 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/06 15:22:53 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned char *new;
	unsigned long len;
	unsigned long start;
	int i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = (unsigned char *)malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	while (i < len && (s[len] == ' ' || s[len] == '\n' ||s[len] == '\t'))
		len--;
	while (i < (len - start))
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}
