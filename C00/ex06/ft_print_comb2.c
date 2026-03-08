/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb_comb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:44:15 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/04 17:19:37 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_putnbr(int n)
{
	char	c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	ii;
	int	jj;

	ii = 00;
	while (ii <= 98)
	{
		jj = ii + 1;
		while (jj <= 99)
		{
			ft_print_comb2_putnbr(ii);
			write(1, " ", 1);
			ft_print_comb2_putnbr(jj);
			if (!(ii == 98 && jj == 99))
				write(1, ", ", 2);
			jj++;
		}
		ii++;
	}
}
