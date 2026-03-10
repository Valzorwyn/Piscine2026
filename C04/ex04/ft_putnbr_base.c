/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:19:20 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/10 15:39:05 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}

static int	legalbase(char *base)
{
	int	ii;
	int	jj;

	ii = -1;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[++ii])
	{
		jj = -1;
		while (base[++jj])
		{
			if (ii != jj && base[ii] == base[jj])
				return (0);
			else if (base[ii] == '+' || base[ii] == '-')
				return (0);
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;
	int		b;

	lnbr = nbr;
	if (!legalbase(base))
		return ;
	b = ft_strlen(base);
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr = -lnbr;
	}
	if (lnbr >= b)
		ft_putnbr_base(lnbr / b, base);
	write(1, &base[lnbr % b], 1);	
}

// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 3)	
// 		return 0;
// 	ft_putnbr_base(atoi(av[1]), av[2]);
// 	return 0;
// }
