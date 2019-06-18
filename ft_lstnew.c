/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 15:23:09 by yu-lin            #+#    #+#             */
/*   Updated: 2019/06/17 16:55:42 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else 
	{
		new->content = ft_memalloc(content_size);
		if (!(new->content))
			return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
