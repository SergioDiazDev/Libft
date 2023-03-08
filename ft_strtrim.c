/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:45:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/13 10:02:55 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_posfirst(const char *s1, const char *set)
{
	t_size_t	i;
	t_size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (j < i)
	{
		if (ft_strchr(set, s1[j]) == 0)
			break ;
		j++;
	}
	return (j);
}

static int	ft_posend(const char *s1, const char *set)
{
	t_size_t	i;
	t_size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (j < i)
	{
		if (ft_strchr(set, s1[i - j - 1]) == 0)
			break ;
		j++;
	}
	return (i - j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size_t	first;
	t_size_t	end;
	char		*aux;

	first = ft_posfirst(s1, set);
	end = ft_posend(s1, set);
	if (first >= end)
		return (ft_strdup(""));
	aux = (char *)malloc((end - first + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	ft_strlcpy(aux, &s1[first], end - first + 1);
	return (aux);
}
