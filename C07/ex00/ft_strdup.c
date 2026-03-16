/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:26:20 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/16 17:26:39 by bajankov         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	ii;

	ii = -1;
	while (src[++ii])
		dest[ii] = src[ii];
	dest[ii] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*res;

	res = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strcpy(res, src);
	return (res);
}
