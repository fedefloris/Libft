/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 10:33:48 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/25 13:52:44 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

t_printf	ft_setup_printf(const char *s, int fd, va_list *params)
{
	t_printf	tp;

	tp.s = s;
	tp.params = params;
	tp.index = 0;
	tp.fd = fd;
	tp.chrs_written = 0;
	tp.exit = 0;
	return (tp);
}
