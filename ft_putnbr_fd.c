/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:40:02 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/20 12:04:17 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *alen)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd, alen);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd, alen);
			n = -147483648;
		}
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd, alen);
		ft_putchar_fd((n % 10) + 48, fd , alen);
	}
	else
		ft_putchar_fd(n + 48, fd, alen);
}
