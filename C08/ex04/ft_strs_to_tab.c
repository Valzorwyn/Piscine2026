#include "ft_stock_str.h"
#include <stdlib.h>
 
static int	ft_strlen(char *str)
{
	int	ii;
 
	ii = 0;
	while (str[ii])
		ii++;
	return (ii);
}
 
static char	*ft_strdup(char *str)
{
	int		len;
	char	*dup;
	int		ii;
 
	len = ft_strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	ii = 0;
	while (str[ii])
	{
		dup[ii] = str[ii];
		ii++;
	}
	dup[ii] = '\0';
	return (dup);
}
 
t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			ii;
 
	if (!av || ac < 0)
		return (NULL);
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	ii = 0;
	while (ii < ac)
	{
		tab[ii].size = ft_strlen(av[ii]);
		tab[ii].str = av[ii];
		tab[ii].copy = ft_strdup(av[ii]);
		if (!tab[ii].copy)
		{
			while (--ii >= 0)
				free(tab[ii].copy);
			free(tab);
			return (NULL);
		}
		ii++;
	}
	tab[ac].str = 0;
	return (tab);
}