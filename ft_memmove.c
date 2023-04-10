/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:11:36 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/04/10 11:38:06 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	const char	*s;
	char		*d;
	t_size_t	i;
	char		buf[65536];

	s = src;
	d = dest;
	i = 0;
	if ((!d && !s) || n > 65535)
		return (NULL);
	while (i < n)
	{
		buf[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = buf[i];
		i++;
	}
	return (dest);
}
