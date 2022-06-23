/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:23:06 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/23 20:27:20 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	x;

	x = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[x] != '\0')
	{
		write(1, &s[x], 1);
		x++;
	}
	return (x);
}

ssh kcheong@localhost -p 4242