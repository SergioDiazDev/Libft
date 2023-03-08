/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:22:50 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/19 14:39:28 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, t_size_t n)
{
	char		*aux;
	t_size_t	i;

	aux = (char *)str;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (char)c)
			return ((aux + i));
		i++;
	}
	return (0);
}
