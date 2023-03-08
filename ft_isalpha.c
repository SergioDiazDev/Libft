/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:29:32 by sergio            #+#    #+#             */
/*   Updated: 2022/10/06 16:54:40 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1024);
	return (0);
}

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1024);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (ft_islower(c) + ft_isupper(c));
	return (0);
}
