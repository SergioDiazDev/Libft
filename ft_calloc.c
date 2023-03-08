/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:55:25 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/19 09:52:54 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t nmemb, t_size_t size)
{
	void	*aux;

	aux = malloc(nmemb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, nmemb * size);
	return (aux);
}
