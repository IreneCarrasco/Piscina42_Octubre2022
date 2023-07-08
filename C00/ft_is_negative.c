/*Create a function that returns P in case a number is equal or greater than
zero, otherwise the function returns N*/

#include <unistd.h>
void	ft_is_negative(int n)
{
	if (n >= 0)
		write (1, &"P", 1);
	else
		write (1, &"N", 1);
}

int	main()
{
	ft_is_negative(-1);
}