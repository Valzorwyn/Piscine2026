/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:44:49 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/19 18:50:22 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}

char	*ft_strcat(char *dest, char *src)
{
	int	ii;
	int	jj;

	ii = -1;
	while (dest[++ii])
		;
	jj = -1;
	while (src[++jj])
	{
		dest[ii] = src[jj];
		++ii;
	}
	return (dest[ii] = '\0', dest);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ii;
	int		sum_len;
	char	*res;

	if (size == 0)
		return (ft_calloc(1, 1));
	if (size < 0)
		return (NULL);
	ii = -1;
	sum_len = 0;
	while (++ii < size)
		sum_len += ft_strlen(strs[ii]);
	sum_len += (ft_strlen(sep) * (size - 1));
	res = ft_calloc((sum_len + 1), sizeof(char));
	ii = -1;
	while (++ii < size)
	{
		ft_strcat(res, strs[ii]);
		if (ii < size - 1)
			ft_strcat(res, sep);
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	if (size == 0)
		return (ft_calloc(1, 1));
	if (size < 0)
		return (NULL);
	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]);
	len += (size - 1) * ft_strlen(sep);
	str = (char *)ft_calloc(1, 1 + len);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}


#include <stdio.h>
int main(int argc, char **argv)
{
    char    *result;

        // argv[1] = separator
        // argv[2..] = strings
        result = ft_strjoin(argc - 2, &argv[2], argv[1]);

    if (!result)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Separator: \"%s\"\n", argv[1]);
    printf("Result: \"%s\"\n", result);

    free(result);
    return (0);
}
