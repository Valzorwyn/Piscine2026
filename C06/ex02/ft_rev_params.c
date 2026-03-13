/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 19:21:43 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/13 19:23:31 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	ii;
	int	jj;

	ii = ac;
	while (av[--ii] && ii > 0)
	{
		jj = -1;
		while (av[ii][++jj])
			write(1, &av[ii][jj], 1);
		write(1, "\n", 1);
	}
	return (0);
}
