/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_address.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:25:57 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/20 17:25:59 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ptr_address(char args, int *alen)
{
	char	*arg;

	arg = &args;
	if (!args)
		return ;
	while (args)
		ft_putstr_fd(arg, alen);
}
