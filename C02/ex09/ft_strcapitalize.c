/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 19:44:33 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/06 21:37:32 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
	{
		if (((str[ii] >= 'a' && str[ii] <= 'z')
				|| (str[ii] >= 'A' && str[ii] <= 'Z'))
			&& (str[ii - 1] < '0'
				|| (str[ii - 1] > '9' && str[ii - 1] < 'A')
				|| (str[ii - 1] > 'Z' && str[ii - 1] < 'a')
				|| str[ii - 1] > 'z'))
		{
			if (str[ii] >= 'a' && str[ii] <= 'z')
				str[ii] -= 32;
		}
		else if (str[ii] >= 'A' && str[ii] <= 'Z')
			str[ii] += 32;
	}
	return (str);
}
