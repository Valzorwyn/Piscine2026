/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:25:23 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:46:55 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return ((unsigned int)ii);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	ii;

	dest_len = 0;
	src_len = ft_strlen(src);
	ii = 0;
	while ((dest_len < size) && (dst[dest_len] != '\0'))
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	while (ii < size - dest_len - 1 && src[ii] != '\0')
	{
		dst[dest_len + ii] = src[ii];
		ii++;
	}
	dst[dest_len + ii] = '\0';
	return (dest_len + src_len);
}
