#include "libft.h"

int	main(void)
{
	char	s[10];
	int		c;

	ft_bzero(s, sizeof(s));
	c = 0;
	while (c < sizeof(s))
	{
		printf("%d ", (int)s[c]);
		c++;
	}
	return (0);
}
