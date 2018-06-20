/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:45:02 by ffloris           #+#    #+#             */
/*   Updated: 2018/06/16 18:25:56 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *lst, size_t nbr)
{
	if (!lst)
		return (NULL);
	while (nbr-- && lst)
		lst = lst->next;
	return ((!nbr) ? lst : NULL);
}
