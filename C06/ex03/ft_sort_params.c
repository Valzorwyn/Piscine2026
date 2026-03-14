/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 19:24:37 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/14 12:35:46 by bajankov         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	ii;

	ii = -1;
	while (s1[++ii] && s2[ii] && s1[ii] == s2[ii])
		;
	return ((unsigned char)(s1[ii]) - (unsigned char)(s2[ii]));
}

int	main(int ac, char **av)
{
	int		ii;
	int		jj;
	char	*temp;

	ii = 0;
	while (++ii < ac - 1)
	{
		jj = ii;
		while (++jj < ac)
		{
			if (ft_strcmp(av[ii], av[jj]) > 0)
			{
				temp = av[ii];
				av[ii] = av[jj];
				av[jj] = temp;
			}
		}
	}
	ii = 0;
	while (++ii < ac)
	{
		ft_putstr(av[ii]);
		write(1, "\n", 1);
	}
	return (0);
}
