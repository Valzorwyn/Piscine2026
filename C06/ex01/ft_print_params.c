/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 19:13:17 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/13 19:20:49 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	ii;
	int	jj;

	ii = 0;
	while (av[++ii] && ii < ac)
	{
		jj = -1;
		while (av[ii][++jj])
			write(1, &av[ii][jj], 1);
		write(1, "\n", 1);
	}
	return (0);
}
