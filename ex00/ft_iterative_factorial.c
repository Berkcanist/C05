#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while(nb > 0)
	{
		i *= nb;
		nb--;
	}
	if(nb < 0)
		return 0;
	return (i);
}
int	main()
{
	printf("%d", ft_iterative_factorial(5));
	return 0;
}
