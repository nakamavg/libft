#include "libft.h"

int	main(void)
{
	char str[] = "1hola1!";
	char isnumber[] = "\nCONTIENE NUMERO";
	char isalpha[] = "\nCONTIENE LETRA";
	char isascii[] = "\nCONTIENE ASCII";

	int n = ft_strlen(str);
	int i = 0;

	ft_putstr_fd(str, 1);
	while (i < n)
	{
		ft_putchar_fd('\n', 1);
		ft_putchar_fd(str[i], 1);
		ft_putchar_fd(' ', 1);
		ft_putchar_fd(':', 1);
		ft_putchar_fd(' ', 1);

		if (ft_isalpha(str[i]))
		{
			ft_putstr_fd(isalpha, 1);
		}
		else if (ft_isdigit(str[i]) == 1)
		{
			ft_putstr_fd(isnumber, 1);
		}
		else if (ft_isascii(str[i]))
		{
			ft_putstr_fd(isascii, 1);
		}

		i++;
	}
	return (0);
}