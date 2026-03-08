/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:24:25 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:45:41 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strcmp: 
Compares two strings lexicographically.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	ii;

	ii = -1;
	while (s1[++ii] && s2[ii] && s1[ii] == s2[ii])
		;
	return ((unsigned char)(s1[ii]) - (unsigned char)(s2[ii]));
}
