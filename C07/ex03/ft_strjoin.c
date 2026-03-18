/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:44:49 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/18 14:26:20 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}

char	*ft_strcat(char *dest, char *src)
{
	int	ii;
	int	jj;

	ii = -1;
	while (dest[++ii])
		;
	jj = -1;
	while (src[++jj])
	{
		dest[ii] = src[jj];
		++ii;
	}
	return (dest[ii] = '\0', dest);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ii;
	int		sum_len;
	char	*res;

	if (size == 0)
	{
		res = ft_calloc(1, 1);
		return (res);
	}
	ii = -1;
	sum_len = 0;
	while (++ii < size)
		sum_len += ft_strlen(strs[ii]);
	res = ft_calloc((sum_len + 1), sizeof(char));
	ii = -1;
	while (++ii < size)
	{
		ft_strcat(res, strs[ii]);
		if (ii < size - 1)
			ft_strcat(res, sep);
	}
	return (res);
}
