/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:25:17 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/16 17:35:58 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	ii;

	if (min >= max)
		return (NULL);
	res = malloc((max - min) * sizeof(int));
	if (!res)
		return (NULL);
	ii = -1;
	while (min < max)
	{
		res[++ii] = min;
		min++;
	}
	return (res);
}
