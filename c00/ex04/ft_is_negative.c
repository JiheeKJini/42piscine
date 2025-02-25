#include <unistd.h>

void	ft_is_negative(int n)
{
	char	np;

	if (n >= 0)
	{
		np = 'P';
		write (1, &np, 1);
	}
	else
	{
		np = 'N'
		write (1, &np, 1);
	}
}
