/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:23:49 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/18 13:38:10 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*aux;

	if (!lst)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	aux = result;
	lst = lst->next;
	while (lst)
	{
		result->next = ft_lstnew(f(lst->content));
		if (result == NULL)
			ft_lstclear(&result, del);
		result = result->next;
		lst = lst->next;
	}
	result->next = NULL;
	return (aux);
}
