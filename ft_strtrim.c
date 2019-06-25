/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:59:37 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/25 11:16:28 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char			*new;
	unsigned long	end;
	unsigned long	start;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while (s[start] != '\0' && (s[start] == ' ' || s[start] == '\n'
				|| s[start] == '\t'))
		start++;
	while (start < end && (s[end] == ' ' || s[end] == '\n'
				|| s[end] == '\t'))
		end--;
	new = ft_strsub(s, start, (end - start) + 1);
	return ((char *)new);
}
