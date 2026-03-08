/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:54:38 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/05 17:07:58 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	ii;

	while (0 < --size)
	{
		ii = 0;
		while (ii < size)
		{
			if (tab[ii] > tab[ii + 1])
			{
				temp = tab[ii];
				tab[ii] = tab[ii + 1];
				tab[ii + 1] = temp;
			}
			ii++;
		}
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	int i;
// 	int numbers[argc - 1];

// 	if (argc < 2)
// 		return (0);

// 		for (i = 1; i < argc; i++)
// 			numbers[i - 1] = atoi(argv[i]);
// 		ft_sort_int_tab(numbers, argc - 1);
// 		for (i = 0; i < argc - 1; i++)
// 			printf("%d ", numbers[i]);
// 		printf("\n");
// 		return (0);
// }