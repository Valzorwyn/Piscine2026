/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajankov <bajankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:35:56 by bajankov          #+#    #+#             */
/*   Updated: 2026/03/17 17:24:41 by bajankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_split_is_sep(char c, char *charset)
{
	int	ii;

	ii = -1;
	while (charset[++ii])
		if (c == charset[ii])
			return (1);
	return (0);
}

int	ft_split_sep_count(char *str, char *charset)
{
	int	ii;
	int	sep_count;

	sep_count = 0;
	ii = 0;
	while (str[ii])
	{
		if (!ft_split_is_sep(str[ii], charset))
		{
			sep_count++;
			while (str[ii] && !ft_split_is_sep(str[ii], charset))
				ii++;
		}
		ii++;
	}
	return (sep_count);
}

char	*ft_strdup(char *src, char *charset)
{
	int		src_len;
	int		ii;
	char	*word;

	src_len = 0;
	while (src[src_len] && !ft_split_is_sep(src[src_len], charset))
		src_len++;
	word = malloc((src_len + 1) * sizeof (char));
	if (!word)
		return (NULL);
	ii = -1;
	while (++ii < src_len)
		word[ii] = src[ii];
	return (word[src_len] = '\0', word);
}

char	**ft_split(char *str, char *charset)
{
	int		ii;
	int		jj;
	int		sep_count;
	char	**res;

	sep_count = ft_split_sep_count(str, charset);
	ii = 0;
	jj = 0;
	res = malloc((sep_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (str[ii])
	{
		while (str[ii] && ft_split_is_sep(str[ii], charset))
			++ii;
		while (str[ii] && !ft_split_is_sep(str[ii], charset))
		{
			res[jj++] = ft_strdup(&str[ii], charset);
			while (str[ii] && !ft_split_is_sep(str[ii], charset))
				++ii;
		}
	}
	return (res[jj] = NULL, res);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	**result;
// 	int		i;

// 	if (argc != 3)
// 	{
// 		printf("Usage: %s \"string\" \"charset\"\n", argv[0]);
// 		return (1);
// 	}

// 	result = ft_split(argv[1], argv[2]);
// 	if (!result)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("word[%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
