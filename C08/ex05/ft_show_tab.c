
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		write(1, &str[ii], 1);
}

static void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	ii;
 
	ii = -1;
	while (par[++ii].str != 0)
	{
		ft_putstr(par[ii].str);
		write(1, "\n", 1);
		ft_putnbr(par[ii].size);
		write(1, "\n", 1);
		ft_putstr(par[ii].copy);
		write(1, "\n", 1);
	}
}
