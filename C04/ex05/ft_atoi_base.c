/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:41:07 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/10 15:58:18 by bajankov         ###   ########.fr       */
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

static int	valid_base(char *base)
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

static int	ft_iswspace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	ii;
	int sign;

	sign = 1;
	ii = 0;

	if (!valid_base(base))
		return ;
	
	while (ft_iswspace(str[ii]))
		ii++;
	if (str[ii] == '-')
		sign = -sign;
	
	
}
