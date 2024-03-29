/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:28:26 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/04/10 11:54:11 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char		*aux;
	t_size_t	len_s;
	t_size_t	i;

	len_s = ft_strlen(s);
	if (!s || start > len_s || !len)
		return (aux = ft_calloc(1, sizeof(char)));
	if (len > len_s - start)
		len = len_s - start;
	aux = ft_calloc(len + 1, sizeof(char));
	if (aux == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		aux[i] = (char)s[start];
		start++;
		i++;
	}
	return (aux);
}
