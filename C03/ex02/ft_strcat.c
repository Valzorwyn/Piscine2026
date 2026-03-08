/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:24:52 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:45:49 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Apeends src to dest
*/

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
