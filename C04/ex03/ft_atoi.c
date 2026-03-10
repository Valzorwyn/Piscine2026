/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:47:52 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/10 15:47:52 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_iswspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			ii;
	int			sign;
	int			result;

	sign = 1;
	ii = 0;
	result = 0;
	while (ft_iswspace(str[ii]))
		ii++;
	while (str[ii] == '+' || str[ii] == '-')
	{
		if (str[ii] == '-')
			sign = -sign;
		ii++;
	}
	ii--;
	while (ft_isdigit(str[++ii]))
		result = (result * 10) + (str[ii] - '0');
	return (result * sign);
}
