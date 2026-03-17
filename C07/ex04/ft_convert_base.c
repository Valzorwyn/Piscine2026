/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:20:32 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/17 14:35:11 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_num_len(long nbr, int base_len);

int	ft_convert_base_valid(char *base)
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
				|| base[ii] == ' ' || (base[ii] >= 9 && base[ii] <= 13 ))
				return (0);
		}
	}
	return (1);
}

int	ft_atoi_base_index(char c, char *base)
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
	base_len = 0;
	while (base[base_len])
		base_len++;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	val = ft_atoi_base_index(*str, base);
	while (val != -1)
	{
		res = res * base_len + val;
		str++;
		val = ft_atoi_base_index(*str, base);
	}
	return (res * sign);
}

char *ft_putnbr_base_str(int nbr, char *base)
{
	long lnbr;
	int base_len;
	int len;
	char *res;

	lnbr = nbr;
	base_len = 0;
	while (base[base_len])
		++base_len;
	len = ft_num_len(lnbr, base_len);
	res = malloc(len + 1);
	if (!res)
		return 0;
	res[len] = '\0';
	if (lnbr < 0)
		lnbr = -lnbr;
	while (len-- > 0)
	{
		res[len] = base[lnbr % base_len];
		lnbr /= base_len;
	}
	if (nbr < 0)
		res[0] = '-';
	return res;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_convert_base_valid(base_from) || !ft_convert_base_valid(base_to))
		return (0);
	return (ft_putnbr_base_str(ft_atoi_base(nbr, base_from), base_to));
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	(void) argc;

// 	printf("%s",ft_convert_base(argv[1], argv[2], argv[3]));
// }
