/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_to_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:20:43 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/04 19:20:44 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		send_str_to_buffer(t_buffer *buffer, char *str)
{
	while (*str)
	{
		if (buffer->content_index >= BUFFER_SIZE)
			ft_empty_the_buffer(buffer);
		buffer->content[buffer->content_index++] = *str++;
	}
}

void			ft_send_to_buffer(t_buffer *buffer, ...)
{
	va_list		args;
	char		*str;

	va_start(args, buffer);
	while ((str = va_arg(args, char*)))
		send_str_to_buffer(buffer, str);
	va_end(args);
}
