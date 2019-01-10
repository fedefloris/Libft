/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_the_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:20:43 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/04 19:20:44 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		empty_the_buffer(t_buffer *buffer)
{
	write(1, buffer->content, buffer->content_index);
	config_buffer(buffer);
}
