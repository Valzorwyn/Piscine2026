/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:06:06 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/05 16:54:04 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	ii;
	int	temp;

	ii = -1;
	while (++ii < size / 2)
	{
		temp = tab[size - 1 - ii];
		tab[size - 1 - ii] = tab[ii];
		tab[ii] = temp;
	}
}

// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	int arr[100];
// 	int i;

// 	if (argc < 2)
// 		return (0);

// 	i = 1;
// 	while (i < argc)
// 	{
// 		arr[i - 1] = atoi(argv[i]);
// 		i++;
// 	}

// 	printf("Original: ");
// 	i = 0;
// 	while (i < argc - 1)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}

// 	ft_rev_int_tab(arr, argc - 1);

// 	printf("\nReversed: ");
// 	i = 0;
// 	while (i < argc - 1)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	return (0);
// }