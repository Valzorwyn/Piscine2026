/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:25:13 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:27:21 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	ii;
	int	jj;
	int	len;

	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	ii = -1;
	while (str[++ii])
	{
		jj = 0;
		while (to_find[jj] && to_find[jj] == str[ii + jj])
		{
			if (jj == len - 1)
				return (str + ii);
			jj++;
		}
	}
	return (0);
}
