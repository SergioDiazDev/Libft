/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:08:57 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/06 18:41:12 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dest, const char *src, t_size_t size)
{
	t_size_t	i;
	t_size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (size > i)
	{
		while (src[j] && i < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		if (i >= size)
		{
			dest[i - 1] = '\0';
			return (ft_strlen(src) + i - j);
		}
		else
			dest[i] = '\0';
		return (ft_strlen(dest));
	}
	return (ft_strlen(src) + size);
}
