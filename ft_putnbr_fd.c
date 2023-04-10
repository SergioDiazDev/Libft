/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:55:29 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/04/10 12:30:21 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if ((num / 10) < 1)
		ft_putchar_fd(num + '0', fd);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd((num % 10) + '0', fd);
	}
}
