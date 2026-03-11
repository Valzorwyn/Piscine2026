int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (1 < nb)
		return(ft_recursive_factorial(nb * (nb - 1)));
	return (0);	
}
 // 4 3 2 1
 // 24

 #include <stdio.h>
 int	main(void)
 {
	printf("%d", ft_recursive_factorial(4));
 }