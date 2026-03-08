/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:46:21 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/04 17:18:37 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_putnbr(char hundreds, char tens, char ones)
{
	if (hundreds != tens && hundreds != ones && tens != ones)
	{
		if (hundreds == '7' && tens == '8' && ones == '9')
		{
			write(1, &hundreds, 1);
			write(1, &tens, 1);
			write(1, &ones, 1);
		}
		else
		{
			write(1, &hundreds, 1);
			write(1, &tens, 1);
			write(1, &ones, 1);
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	ii;
	char	jj;
	char	kk;

	ii = '0';
	while (ii <= '7')
	{
		jj = ii + 1;
		while (jj <= '8')
		{
			kk = jj + 1;
			while (kk <= '9')
			{
				ft_print_comb_putnbr(ii, jj, kk);
				kk++;
			}
			jj++;
		}
		ii++;
	}
}
