/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:48:17 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/18 12:49:21 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef enum s_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) (!(nbr % 2))
# define SUCCESS 0

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif