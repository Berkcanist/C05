#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if(nb == 0)
		return 1;
	else if(nb < 0)
		return 0;
	return (nb * ft_recursive_factorial(nb - 1));
}
int	main()
{
	int	a = 6;
	printf("%d", ft_recursive_factorial(a));
	return 0;
}
