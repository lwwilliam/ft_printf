/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:32:30 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/20 17:31:04 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_check(char *type, va_list args, int x, int *alen)
{
	char	c;

	if (type[x] == 'c')
	{
		c = va_arg(args, int);
		alen += write(1, &c, 1);
	}
	if (type[x] == '%')
		alen += write(1, "%", 1);
	if (type[x] == 's')
		ft_putstr_fd(args, alen);
	if (type[x] == 'p')
		ptr_address(args, alen);
	if (type[x] == 'd' || type[x] == 'i')
		ft_putnbr_fd (args, 1, alen);
	if (type[x] == 'u')
		unsigned_int (args, alen);
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		len;
	int		x;
	int		*alen;

	va_start (args, type);
	x = 0;
	len = 0;
	alen = &len;
	while (type[x])
	{
		if (type[x] == '%')
		{
			x++;
			type_check(type, args, x, alen);
		}
		else
			write(1, &type[x], 1);
		x++;
	}
	va_end(args);
	return (len);
}
