/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:41:07 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/11 14:20:53 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}

static int	ft_iswspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_atoi_base_valid(char *base)
{
	int	ii;
	int	jj;

	ii = -1;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[++ii])
	{
		jj = -1;
		while (base[++jj])
		{
			if ((ii != jj && base[ii] == base[jj])
				|| (base[ii] == '+' || base[ii] == '-')
				|| (ft_iswspace(base[ii])))
				return (0);
		}
	}
	return (1);
}

static int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	base_len;
	int	val;

	sign = 1;
	res = 0;
	if (!ft_atoi_base_valid(base))
		return (0);
	base_len = ft_strlen(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	val = ft_index(*str, base);
	while (val != -1)
	{
		res = res * base_len + val;
		str++;
		val = ft_index(*str, base);
	}
	return (res * sign);
}
