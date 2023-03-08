/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:41:36 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/19 14:25:10 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, t_size_t len)
{
	t_size_t	i;
	t_size_t	j;
	int			eq;

	i = 0;
	if (big == little)
		return ((char *)big);
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		eq = 1;
		j = 0;
		while (eq && (i + j <= len))
		{
			if (!little[j])
				return ((char *)(big + i));
			if (little[j] != big[j + i])
				eq = 0;
			j++;
		}
		i++;
	}
	return (0);
}
