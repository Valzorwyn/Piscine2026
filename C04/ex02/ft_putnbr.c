#include <unistd.h>

void	ft_putnbr_prnt(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr_prnt(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr_prnt(nb);
	}
	else
		ft_putnbr_prnt(nb);
}
