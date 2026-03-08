/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:53:27 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/05 19:53:28 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ii;

	ii = 0;
	while (src[ii] && ii < n)
	{
		dest[ii] = src[ii];
		ii++;
	}
	while (ii < n)
		dest[ii++] = '\0';
	return (dest);
}
