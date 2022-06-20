/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:23:06 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/20 17:26:31 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int *alen)
{
	int	x;

	x = 0;
	if (!s)
		return ;
	while (s[x] != '\0')
	{
		ft_putchar_fd(s[x], 1, alen);
		x++;
	}
}
