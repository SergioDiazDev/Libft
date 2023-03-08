/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:52:39 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/03/08 13:16:30 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size_t	size_s1;
	t_size_t	size_s2;
	t_size_t	i;
	char		*aux;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	aux = ft_calloc((size_s1 + size_s2 + 1), sizeof(char));
	if (aux == NULL)
		return (NULL);
	ft_memcpy(aux, s1, size_s1);
	while (i < size_s1 + size_s2)
	{
		aux[size_s1 + i] = s2[i];
		i++;
	}
	return (aux);
}
