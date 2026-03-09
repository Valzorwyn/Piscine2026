#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		write(1, &str[ii], 1);
}
