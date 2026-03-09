int	ft_strlen(char *str)
{
	int	ii;

	ii = -1;
	while (str[++ii])
		;
	return (ii);
}
