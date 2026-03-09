/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:25:03 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:45:59 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	ii;
	unsigned int	jj;

	ii = 0;
	while (dest[ii])
		++ii;
	jj = 0;
	while (jj < n && src[jj])
	{
		dest[ii] = src[jj];
		++ii;
		++jj;
	}
	return (dest[ii] = '\0', dest);
}
