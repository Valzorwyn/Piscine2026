/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:02:52 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:05:57 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ii;

	ii = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[ii] && ii < size - 1)
	{
		dest[ii] = src[ii];
		ii++;
	}
	dest[ii] = '\0';
	return (ft_strlen(src));
}
