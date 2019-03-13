/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sequences.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 17:17:26 by ffloris           #+#    #+#             */
/*   Updated: 2018/04/26 11:27:44 by ffloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_SEQUENCES_H
# define FT_PRINTF_SEQUENCES_H

# define RED_ID "red"
# define RED_VALUE "\033[31m"
# define BLACK_ID "black"
# define BLACK_VALUE "\033[30m"
# define GREEN_ID "green"
# define GREEN_VALUE "\033[32m"
# define YELLOW_ID "yellow"
# define YELLOW_VALUE "\033[33m"
# define BLUE_ID "blue"
# define BLUE_VALUE "\033[34m"
# define MAGENTA_ID "magenta"
# define MAGENTA_VALUE "\033[35m"
# define CYAN_ID "cyan"
# define CYAN_VALUE "\033[36m"
# define WHITE_ID "white"
# define WHITE_VALUE "\033[37m"
# define RESET_ID "reset"
# define RESET_VALUE "\033[0m"
# define EOC_ID "eoc"
# define EOC_VALUE "\033[0m"

typedef struct		s_sequence
{
	char			*id;
	char			*value;
}					t_sequence;

t_sequence				g_sequences[] =
{
	{RED_ID, RED_VALUE},
	{BLACK_ID, BLACK_VALUE},
	{GREEN_ID, GREEN_VALUE},
	{YELLOW_ID, YELLOW_VALUE},
	{BLUE_ID, BLUE_VALUE},
	{MAGENTA_ID, MAGENTA_VALUE},
	{CYAN_ID, CYAN_VALUE},
	{WHITE_ID, WHITE_VALUE},
	{RESET_ID, RESET_VALUE},
	{EOC_ID, EOC_VALUE},
	{SEQUENCE_ID, SEQUENCE_ID},
	{NULL, NULL}
};

#endif
