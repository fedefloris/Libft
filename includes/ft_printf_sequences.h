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

# define RED_COLOR_ID "red"
# define RED_COLOR_VALUE "\033[31m"
# define BLACK_COLOR_ID "black"
# define BLACK_COLOR_VALUE "\033[30m"
# define GREEN_COLOR_ID "green"
# define GREEN_COLOR_VALUE "\033[32m"
# define YELLOW_COLOR_ID "yellow"
# define YELLOW_COLOR_VALUE "\033[33m"
# define BLUE_COLOR_ID "blue"
# define BLUE_COLOR_VALUE "\033[34m"
# define MAGENTA_COLOR_ID "magenta"
# define MAGENTA_COLOR_VALUE "\033[35m"
# define CYAN_COLOR_ID "cyan"
# define CYAN_COLOR_VALUE "\033[36m"
# define WHITE_COLOR_ID "white"
# define WHITE_COLOR_VALUE "\033[37m"
# define RESET_ID "reset"
# define RESET_VALUE "\033[0m"
# define EOC_COLOR_ID "eoc"
# define EOC_COLOR_VALUE RESET_VALUE

typedef struct		s_sequence
{
	char			*id;
	char			*value;
}					t_sequence;

t_sequence				g_sequences[] =
{
	{RED_COLOR_ID, RED_COLOR_VALUE},
	{BLACK_COLOR_ID, BLACK_COLOR_VALUE},
	{GREEN_COLOR_ID, GREEN_COLOR_VALUE},
	{YELLOW_COLOR_ID, YELLOW_COLOR_VALUE},
	{BLUE_COLOR_ID, BLUE_COLOR_VALUE},
	{MAGENTA_COLOR_ID, MAGENTA_COLOR_VALUE},
	{CYAN_COLOR_ID, CYAN_COLOR_VALUE},
	{WHITE_COLOR_ID, WHITE_COLOR_VALUE},
	{RESET_ID, RESET_VALUE},
	{EOC_COLOR_ID, EOC_COLOR_VALUE},
	{SEQUENCE_ID, SEQUENCE_ID},
	{NULL, NULL}
};

#endif
