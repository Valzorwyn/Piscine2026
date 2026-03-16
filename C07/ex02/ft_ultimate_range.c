/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:37:14 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/16 17:43:02 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ii;

	if (min >= max)
		return (*range = NULL, 0);
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	ii = -1;
	while ((min + (++ii)) < max)
		(*range)[ii] = min + ii;
	return (max - min);
}
