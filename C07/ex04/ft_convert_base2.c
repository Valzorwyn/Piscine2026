/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:47:42 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/17 13:39:00 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_num_len(long nbr, int base_len)
{
    int len;

    if (nbr <= 0)
        len = 1;
    else
        len = 0;

    while (nbr)
    {
        nbr /= base_len;
        len++;
    }
    return len;
}
