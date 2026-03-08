/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:24:41 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:45:04 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strncmp:
Compares up to n char of two strings
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ii;

	ii = 0;
	while (ii < n && s1[ii] && s2[ii] && s1[ii] == s2[ii])
		ii++;
	if (ii == n)
		return (0);
	return ((unsigned char)(s1[ii]) - (unsigned char)(s2[ii]));
}
