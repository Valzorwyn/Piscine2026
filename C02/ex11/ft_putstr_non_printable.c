/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:05:06 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/08 14:15:29 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	int				i;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c < 32 || c >= 127)
		{
			ft_putchar('\\');
			ft_putchar(hex[c / 16]);
			ft_putchar(hex[c % 16]);
		}
		else
			ft_putchar(c);
		i++;
	}
}

// int	main(void)
// {
// 	char str1[] = "Hello\nWorld";
// 	char str2[] = "Tab\tTest";
// 	char str3[] = "Normal text";
// 	char str4[] = "Control:\x01\x02\x03End";

// 	ft_putstr_non_printable(str1);
// 	write(1, "\n", 1);

// 	ft_putstr_non_printable(str2);
// 	write(1, "\n", 1);

// 	ft_putstr_non_printable(str3);
// 	write(1, "\n", 1);

// 	ft_putstr_non_printable(str4);
// 	write(1, "\n", 1);

// 	return (0);
// }