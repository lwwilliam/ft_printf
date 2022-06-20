/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:33:00 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/20 17:25:25 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *type, ...);
void	ft_putstr_fd(char *s, int *alen);
void	ptr_address(char args, int *alen);
void	ft_putnbr_fd(int n, int fd, int *alen);
void	ft_putchar_fd(char c, int fd, int *alen);







#endif