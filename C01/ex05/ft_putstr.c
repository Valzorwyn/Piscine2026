/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:37:00 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/05 16:34:09 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		write(1, &str[ii], 1);
}

// int main(void){
// 	ft_putstr("This is a test Message!");
// }