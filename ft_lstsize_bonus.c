/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:02:35 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/17 17:01:43 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

	aux = lst;
	if (!aux)
		return (0);
	count = 1;
	while (aux->next != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
